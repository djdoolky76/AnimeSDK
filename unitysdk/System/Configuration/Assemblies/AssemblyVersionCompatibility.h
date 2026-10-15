#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Configuration::Assemblies
{
	enum class AssemblyVersionCompatibility : ::System::Int32
	{
		SameMachine = 1,
		SameProcess = 2,
		SameDomain = 3,
	};
}
