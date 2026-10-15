#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AimEntityInfoType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CIEHGAHJDFN;
namespace RPG::GameCore { class GameEntity; }

#define OBALPFEHAAK_CTOR_1_OFFSET UNITYSDK_OFFSET(0xBD32410)
#define OBALPFEHAAK_CTOR_OFFSET UNITYSDK_OFFSET(0xBD323F0)

inline static constexpr unsigned int OBALPFEHAAK_TypeDefinitionIndex = 60932;

	class OBALPFEHAAK : public ::System::Object
	{
	public:
		::CIEHGAHJDFN* BJOANNFMNEO; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::RPG::Client::AimEntityInfoType HGIABLHMGPB; // 0x20
		::UnityEngine::Vector3 KKLDLLOJEFN; // 0x24
		::RPG::GameCore::PhotoGraphAimIdentifyType BDHPOJCKPIM; // 0x30
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::PhotoGraphAimIdentifyType a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + OBALPFEHAAK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::CIEHGAHJDFN* a1, ::RPG::GameCore::PhotoGraphAimIdentifyType a2)
		{
			return ((::System::Void(*)(::PVOID, ::CIEHGAHJDFN*, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + OBALPFEHAAK_CTOR_1_OFFSET))(this, a1, a2);
		}

	};
