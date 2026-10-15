#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Nullable_1.h"
class ACLMDNMDHLE;
class FABMDCOFHCG;
namespace RPG::GameCore { class FateBattleManager; }

#define RPG_GAMECORE_FATEBATTLEMANAGER___C__DISPLAYCLASS32_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE68F260)
#define RPG_GAMECORE_FATEBATTLEMANAGER___C__DISPLAYCLASS32_0___APPLYFATEBUFF_B__0_OFFSET UNITYSDK_OFFSET(0xE690D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateBattleManager___c__DisplayClass32_0_TypeDefinitionIndex = 56087;

	class FateBattleManager___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::FateBattleManager* __4__this; // 0x10
		::FABMDCOFHCG* pInstance; // 0x18
		::ACLMDNMDHLE* pFateBuffData; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER___C__DISPLAYCLASS32_0_CTOR_OFFSET))(this);
		}

		::System::Void __ApplyFateBuff_b__0(::RPG::GameCore::StringHash a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER___C__DISPLAYCLASS32_0___APPLYFATEBUFF_B__0_OFFSET))(this, a1, a2, a3);
		}

	};
}
