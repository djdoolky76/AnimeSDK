#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameCharacterVisionConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define OFNKOEAHEIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C98CDA0)

	class OFNKOEAHEIP : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 NEKCGBPLMLB; // 0x10
		::System::Single LNEHAJPFGPN; // 0x1C
		::RPG::Client::LittleGame::TimelineControlGameCharacterVisionConfig NLILBJJCGEJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNKOEAHEIP_CTOR_OFFSET))(this);
		}

	};
