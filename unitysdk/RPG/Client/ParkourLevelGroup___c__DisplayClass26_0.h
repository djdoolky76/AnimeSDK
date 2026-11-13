#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ParkourLevel; }

#define RPG_CLIENT_PARKOURLEVELGROUP___C__DISPLAYCLASS26_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC1B6A0)
#define RPG_CLIENT_PARKOURLEVELGROUP___C__DISPLAYCLASS26_0__CONTAINS_B__0_OFFSET UNITYSDK_OFFSET(0x1DC1B880)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourLevelGroup___c__DisplayClass26_0_TypeDefinitionIndex = 63263;

	class ParkourLevelGroup___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::UInt32 levelID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP___C__DISPLAYCLASS26_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Contains_b__0(::RPG::Client::ParkourLevel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP___C__DISPLAYCLASS26_0__CONTAINS_B__0_OFFSET))(this, a1);
		}

	};
}
