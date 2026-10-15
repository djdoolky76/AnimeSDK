#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_INDEXKEY_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0xAF50)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE620)
#define RPG_GAMECORE_PERFORMANCEEEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C36440)

namespace RPG::GameCore
{
	struct alignas(4) PerformanceEExcelTable_IndexKey
	{
		::System::UInt32 PerformanceID; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_INDEXKEY_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::RPG::GameCore::PerformanceEExcelTable_IndexKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PerformanceEExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}

	};
}
