#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimAvatarConfig; }

#define PEEDLCHFAFL___C__DISPLAYCLASS191_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8B2A0)
#define PEEDLCHFAFL___C__DISPLAYCLASS191_0__SETLOCKJUMPENERGYAVATARMAXJUMPENERGY_B__0_OFFSET UNITYSDK_OFFSET(0x1DBAA4B0)

inline static constexpr unsigned int PEEDLCHFAFL___c__DisplayClass191_0_TypeDefinitionIndex = 44580;

	class PEEDLCHFAFL___c__DisplayClass191_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEDLCHFAFL___C__DISPLAYCLASS191_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _SetLockJumpEnergyAvatarMaxJumpEnergy_b__0(::RPG::GameCore::FiveDimAvatarConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimAvatarConfig*))((::PBYTE)hIl2Cpp + PEEDLCHFAFL___C__DISPLAYCLASS191_0__SETLOCKJUMPENERGYAVATARMAXJUMPENERGY_B__0_OFFSET))(this, a1);
		}

	};
