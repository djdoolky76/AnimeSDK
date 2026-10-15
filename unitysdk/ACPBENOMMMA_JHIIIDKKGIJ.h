#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::Prop { class RogueDLCRayModule; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define ACPBENOMMMA_JHIIIDKKGIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB12FD60)

	class ACPBENOMMMA_JHIIIDKKGIJ : public ::System::Object
	{
	public:
		::RPG::Client::Prop::RogueDLCRayModule* BBBFOLNCOBO; // 0x10
		::RPG::GameCore::AnchorInfo* OEOOFDAGECM; // 0x18
		::RPG::GameCore::GameEntity* GMLKHIBJJLC; // 0x20
		::RPG::Client::MonoEffect* CPKPOBMFMJI; // 0x28
		::UnityEngine::Transform* NIJNPFOOJLC; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPBENOMMMA_JHIIIDKKGIJ_CTOR_OFFSET))(this);
		}

	};
