#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }

#define MMIEDEIIAND___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB9CA990)
#define MMIEDEIIAND___C__DISPLAYCLASS3_0__GETAVATARBYACTIVITYAVATARID_B__0_OFFSET UNITYSDK_OFFSET(0xB9CAFE0)

inline static constexpr unsigned int MMIEDEIIAND___c__DisplayClass3_0_TypeDefinitionIndex = 81219;

	class MMIEDEIIAND___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIEDEIIAND___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAvatarByActivityAvatarID_b__0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + MMIEDEIIAND___C__DISPLAYCLASS3_0__GETAVATARBYACTIVITYAVATARID_B__0_OFFSET))(this, a1);
		}

	};
