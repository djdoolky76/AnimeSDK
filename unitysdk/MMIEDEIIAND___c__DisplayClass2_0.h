#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }

#define MMIEDEIIAND___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB9CF980)
#define MMIEDEIIAND___C__DISPLAYCLASS2_0__GETAVATARBYOWNERTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xB9D05A0)

inline static constexpr unsigned int MMIEDEIIAND___c__DisplayClass2_0_TypeDefinitionIndex = 81219;

	class MMIEDEIIAND___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GenderType gender; // 0x10
		::RPG::GameCore::FateRinHouguOwnerType ownerType; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIEDEIIAND___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAvatarByOwnerType_b__0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + MMIEDEIIAND___C__DISPLAYCLASS2_0__GETAVATARBYOWNERTYPE_B__0_OFFSET))(this, a1);
		}

	};
