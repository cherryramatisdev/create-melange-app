module Aciton = Action;
module Component = Component;
module Dependency = Dependency;

let command = {
  Commander.(
    create_command("env-check")
    |> Command.set_description(
         "Check and validate that all system dependencies are installed",
       )
    |> Command.add_action(((), _this) => {
         Ink.render(<Component />)
         |> Ink.Instance.wait_until_exit
         |> (exit_promise => `Promise_void(exit_promise))
       })
  );
};
