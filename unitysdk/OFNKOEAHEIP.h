#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameCharacterVisionConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define OFNKOEAHEIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C95EAE0)

inline static constexpr unsigned int OFNKOEAHEIP_TypeDefinitionIndex = 42494;

	class OFNKOEAHEIP : public ::System::Object
	{
	public:
		::System::Single LNEHAJPFGPN; // 0x10
		::RPG::Client::LittleGame::TimelineControlGameCharacterVisionConfig NLILBJJCGEJ; // 0x14
		::UnityEngine::Vector3 NEKCGBPLMLB; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNKOEAHEIP_CTOR_OFFSET))(this);
		}

	};
