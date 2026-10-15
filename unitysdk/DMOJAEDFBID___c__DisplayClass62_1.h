#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEDGOLOBNJM;
namespace RPG::GameCore { class ModifierHint; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define DMOJAEDFBID___C__DISPLAYCLASS62_1_CTOR_OFFSET UNITYSDK_OFFSET(0xFECD970)
#define DMOJAEDFBID___C__DISPLAYCLASS62_1___SETUPMODIFIERHINTS_B__3_OFFSET UNITYSDK_OFFSET(0xFECD9E0)

	template <typename T>
	class DMOJAEDFBID___c__DisplayClass62_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* modifier; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C__DISPLAYCLASS62_1_CTOR_OFFSET))(this);
		}

		::MEDGOLOBNJM* __SetupModifierHints_b__3(::RPG::GameCore::ModifierHint* a1)
		{
			return ((::MEDGOLOBNJM*(*)(::PVOID, ::RPG::GameCore::ModifierHint*))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C__DISPLAYCLASS62_1___SETUPMODIFIERHINTS_B__3_OFFSET))(this, a1);
		}

	};
