#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimAvatarConfig; }

#define PEEDLCHFAFL___C__DISPLAYCLASS124_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7E4B0)
#define PEEDLCHFAFL___C__DISPLAYCLASS124_0__CREATEPLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x1DBAA470)

inline static constexpr unsigned int PEEDLCHFAFL___c__DisplayClass124_0_TypeDefinitionIndex = 44578;

	class PEEDLCHFAFL___c__DisplayClass124_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEDLCHFAFL___C__DISPLAYCLASS124_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _CreatePlayer_b__0(::RPG::GameCore::FiveDimAvatarConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimAvatarConfig*))((::PBYTE)hIl2Cpp + PEEDLCHFAFL___C__DISPLAYCLASS124_0__CREATEPLAYER_B__0_OFFSET))(this, a1);
		}

	};
