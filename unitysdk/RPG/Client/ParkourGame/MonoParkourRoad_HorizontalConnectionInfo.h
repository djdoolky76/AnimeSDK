#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/MonoParkourRoad_ConnectionInfo.h"
namespace System { class Object; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_HORIZONTALCONNECTIONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xDA72170)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourRoad_HorizontalConnectionInfo_TypeDefinitionIndex = 74161;

	class MonoParkourRoad_HorizontalConnectionInfo : public ::RPG::Client::ParkourGame::MonoParkourRoad_ConnectionInfo
	{
	public:
		::System::Single LockSwitchDistance; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* Data; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_HORIZONTALCONNECTIONINFO_CTOR_OFFSET))(this);
		}

	};
}
