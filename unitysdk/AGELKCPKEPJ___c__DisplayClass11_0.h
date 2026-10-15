#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AvatarOutfitSlot; }

#define AGELKCPKEPJ___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCF20F80)
#define AGELKCPKEPJ___C__DISPLAYCLASS11_0__GETSLOT_B__0_OFFSET UNITYSDK_OFFSET(0xCF22050)

inline static constexpr unsigned int AGELKCPKEPJ___c__DisplayClass11_0_TypeDefinitionIndex = 62508;

	class AGELKCPKEPJ___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::PlayerOutfitSlotType type; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGELKCPKEPJ___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSlot_b__0(::RPG::Client::AvatarOutfitSlot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarOutfitSlot*))((::PBYTE)hIl2Cpp + AGELKCPKEPJ___C__DISPLAYCLASS11_0__GETSLOT_B__0_OFFSET))(this, a1);
		}

	};
