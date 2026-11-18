#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBD6D0)

namespace MoleMole::DataStructures::Common
{
	inline static constexpr unsigned int OptionalInt_TypeDefinitionIndex = 28170;

	class OptionalInt
	{
	public:
		::System::Void _ctor(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALINT__CTOR_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
