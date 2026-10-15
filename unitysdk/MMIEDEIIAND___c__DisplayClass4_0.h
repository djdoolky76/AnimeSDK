#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class AvatarSourceConfigRow; }

#define MMIEDEIIAND___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB9D0500)
#define MMIEDEIIAND___C__DISPLAYCLASS4_0__GETAVATARBYSOURCEAVATARID_B__0_OFFSET UNITYSDK_OFFSET(0xB9D0650)
#define MMIEDEIIAND___C__DISPLAYCLASS4_0__GETAVATARBYSOURCEAVATARID_B__1_OFFSET UNITYSDK_OFFSET(0xB9D06D0)

	class MMIEDEIIAND___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIEDEIIAND___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAvatarBySourceAvatarID_b__0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + MMIEDEIIAND___C__DISPLAYCLASS4_0__GETAVATARBYSOURCEAVATARID_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _GetAvatarBySourceAvatarID_b__1(::RPG::GameCore::AvatarSourceConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarSourceConfigRow*))((::PBYTE)hIl2Cpp + MMIEDEIIAND___C__DISPLAYCLASS4_0__GETAVATARBYSOURCEAVATARID_B__1_OFFSET))(this, a1);
		}

	};
