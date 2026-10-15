#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::CompilerFramework
{
	enum class DiagnosticSeverity : ::System::Int32
	{
		Info = 0,
		Warning = 1,
		Error = 2,
	};
}
