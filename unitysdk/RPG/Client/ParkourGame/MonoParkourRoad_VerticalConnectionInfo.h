#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/MonoParkourRoad_ConnectionInfo.h"
namespace System { class Object; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_VERTICALCONNECTIONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xDA721A0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourRoad_VerticalConnectionInfo_TypeDefinitionIndex = 74162;

	class MonoParkourRoad_VerticalConnectionInfo : public ::RPG::Client::ParkourGame::MonoParkourRoad_ConnectionInfo
	{
	public:
		::Il2CppArray<::System::Object*>* Data; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_VERTICALCONNECTIONINFO_CTOR_OFFSET))(this);
		}

	};
}
