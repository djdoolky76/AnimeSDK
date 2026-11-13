#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EquipmentItemData; }

#define HFIKHAIPIAB_KJIMGIKNNJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A229740)
#define HFIKHAIPIAB_KJIMGIKNNJE_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1A229750)

inline static constexpr unsigned int HFIKHAIPIAB_KJIMGIKNNJE_TypeDefinitionIndex = 67453;

	class HFIKHAIPIAB_KJIMGIKNNJE : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x10
		::RPG::Client::EquipmentItemData* ENFGFAGONNG; // 0x18
		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::EquipmentItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + HFIKHAIPIAB_KJIMGIKNNJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIKHAIPIAB_KJIMGIKNNJE_HKKFFCBJOKM_OFFSET))(this);
		}

	};
