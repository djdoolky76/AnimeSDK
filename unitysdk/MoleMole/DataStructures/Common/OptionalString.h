#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBD6F0)

namespace MoleMole::DataStructures::Common
{
	inline static constexpr unsigned int OptionalString_TypeDefinitionIndex = 28166;

	class OptionalString
	{
	public:
		::System::Void _ctor(::System::String* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALSTRING__CTOR_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
