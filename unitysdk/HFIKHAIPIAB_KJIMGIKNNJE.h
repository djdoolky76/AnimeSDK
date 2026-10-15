#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EquipmentItemData; }

#define HFIKHAIPIAB_KJIMGIKNNJE_CTOR_OFFSET UNITYSDK_OFFSET(0x15C6FCB0)
#define HFIKHAIPIAB_KJIMGIKNNJE_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15C6FCC0)

inline static constexpr unsigned int HFIKHAIPIAB_KJIMGIKNNJE_TypeDefinitionIndex = 65537;

	class HFIKHAIPIAB_KJIMGIKNNJE : public ::System::Object
	{
	public:
		::RPG::Client::EquipmentItemData* ENFGFAGONNG; // 0x10
		::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x18
		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::EquipmentItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + HFIKHAIPIAB_KJIMGIKNNJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIKHAIPIAB_KJIMGIKNNJE_HKKFFCBJOKM_OFFSET))(this);
		}

	};
