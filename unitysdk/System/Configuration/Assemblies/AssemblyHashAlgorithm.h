#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Configuration::Assemblies
{
	enum class AssemblyHashAlgorithm : ::System::Int32
	{
		None = 0,
		MD5 = 32771,
		SHA1 = 32772,
		SHA256 = 32780,
		SHA384 = 32781,
		SHA512 = 32782,
	};
}
