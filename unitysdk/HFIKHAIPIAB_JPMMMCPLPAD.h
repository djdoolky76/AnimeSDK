#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }

#define HFIKHAIPIAB_JPMMMCPLPAD_CTOR_OFFSET UNITYSDK_OFFSET(0x15C6FBB0)
#define HFIKHAIPIAB_JPMMMCPLPAD_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15C6FBC0)

inline static constexpr unsigned int HFIKHAIPIAB_JPMMMCPLPAD_TypeDefinitionIndex = 65541;

	class HFIKHAIPIAB_JPMMMCPLPAD : public ::System::Object
	{
	public:
		::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* OIJOBDPINJM; // 0x10
		::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x18
		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + HFIKHAIPIAB_JPMMMCPLPAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIKHAIPIAB_JPMMMCPLPAD_HKKFFCBJOKM_OFFSET))(this);
		}

	};
