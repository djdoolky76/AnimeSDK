#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define RPG_GAMECORE_STATUSEXCELTABLE_INDEXKEY_CTOR_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define RPG_GAMECORE_STATUSEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x3EE9440)
#define RPG_GAMECORE_STATUSEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define RPG_GAMECORE_STATUSEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3EE93A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StatusExcelTable_IndexKey_TypeDefinitionIndex = 15338;

	struct alignas(4) StatusExcelTable_IndexKey
	{
		::System::UInt32 StatusID; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_INDEXKEY_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::RPG::GameCore::StatusExcelTable_IndexKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StatusExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}

	};
}
