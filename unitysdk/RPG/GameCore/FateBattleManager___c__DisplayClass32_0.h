#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class ACLMDNMDHLE;
class FABMDCOFHCG;
namespace RPG::GameCore { class FateBattleManager; }
namespace System { class Nullable; }

#define RPG_GAMECORE_FATEBATTLEMANAGER___C__DISPLAYCLASS32_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE699F10)
#define RPG_GAMECORE_FATEBATTLEMANAGER___C__DISPLAYCLASS32_0___APPLYFATEBUFF_B__0_OFFSET UNITYSDK_OFFSET(0xE69B9F0)

namespace RPG::GameCore
{
	class FateBattleManager___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::FABMDCOFHCG* pInstance; // 0x10
		::RPG::GameCore::FateBattleManager* __4__this; // 0x18
		::ACLMDNMDHLE* pFateBuffData; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER___C__DISPLAYCLASS32_0_CTOR_OFFSET))(this);
		}

		::System::Void __ApplyFateBuff_b__0(::RPG::GameCore::StringHash a1, ::System::Nullable* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER___C__DISPLAYCLASS32_0___APPLYFATEBUFF_B__0_OFFSET))(this, a1, a2, a3);
		}

	};
}
