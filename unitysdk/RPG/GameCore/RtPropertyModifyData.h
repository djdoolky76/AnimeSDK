#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"

#define RPG_GAMECORE_RTPROPERTYMODIFYDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xF6390)

namespace RPG::GameCore
{
	struct alignas(4) RtPropertyModifyData
	{
		::RPG::GameCore::RtAbilityProperty PropertyType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint ModifyValue; // 0x18
		/*
		::System::Boolean Equals(::RPG::GameCore::RtPropertyModifyData a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtPropertyModifyData))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTPROPERTYMODIFYDATA_EQUALS_OFFSET))(this, a1);
		}
		*/

	};
}
