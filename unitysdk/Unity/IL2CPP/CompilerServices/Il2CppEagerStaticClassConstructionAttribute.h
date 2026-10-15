#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPEAGERSTATICCLASSCONSTRUCTIONATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3CC220)

namespace Unity::IL2CPP::CompilerServices
{
	class Il2CppEagerStaticClassConstructionAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPEAGERSTATICCLASSCONSTRUCTIONATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
