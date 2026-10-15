#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }

#define MMIEDEIIAND___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB9CF380)
#define MMIEDEIIAND___C__DISPLAYCLASS1_0__GETAVATARBYOWNERTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xB9D0520)

inline static constexpr unsigned int MMIEDEIIAND___c__DisplayClass1_0_TypeDefinitionIndex = 81218;

	class MMIEDEIIAND___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::FateRinHouguOwnerType ownerType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIEDEIIAND___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAvatarByOwnerType_b__0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + MMIEDEIIAND___C__DISPLAYCLASS1_0__GETAVATARBYOWNERTYPE_B__0_OFFSET))(this, a1);
		}

	};
