#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimAvatarConfig; }

#define PEEDLCHFAFL___C__DISPLAYCLASS125_0_CTOR_OFFSET UNITYSDK_OFFSET(0x17691240)
#define PEEDLCHFAFL___C__DISPLAYCLASS125_0__CHANGEPLAYERAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0x176BC070)

inline static constexpr unsigned int PEEDLCHFAFL___c__DisplayClass125_0_TypeDefinitionIndex = 44579;

	class PEEDLCHFAFL___c__DisplayClass125_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEDLCHFAFL___C__DISPLAYCLASS125_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _ChangePlayerAvatar_b__0(::RPG::GameCore::FiveDimAvatarConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimAvatarConfig*))((::PBYTE)hIl2Cpp + PEEDLCHFAFL___C__DISPLAYCLASS125_0__CHANGEPLAYERAVATAR_B__0_OFFSET))(this, a1);
		}

	};
