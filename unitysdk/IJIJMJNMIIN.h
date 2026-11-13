#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define IJIJMJNMIIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1805A450)
#define IJIJMJNMIIN_NKPPGDENJAE_1_OFFSET UNITYSDK_OFFSET(0x1805A010)
#define IJIJMJNMIIN_NKPPGDENJAE_2_OFFSET UNITYSDK_OFFSET(0x1805A2D0)
#define IJIJMJNMIIN_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x18059F80)
#define IJIJMJNMIIN__ONBIND_OFFSET UNITYSDK_OFFSET(0x18059DA0)

inline static constexpr unsigned int IJIJMJNMIIN_TypeDefinitionIndex = 74341;

	class IJIJMJNMIIN : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* CJKKKGDDKHC; // 0x60
		::RPG::Client::MonoUIColorSwitcher* MIALHNKKOED; // 0x68
		::UnityEngine::UI::Image* LEFBNCHKJIG; // 0x70
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIJMJNMIIN_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIJMJNMIIN__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + IJIJMJNMIIN_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE_1(::RPG::Client::GridFightTraitConfigBase* a1, ::RPG::GameCore::BattleGridFightTeamTraitData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitConfigBase*, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + IJIJMJNMIIN_NKPPGDENJAE_1_OFFSET))(this, a1, a2);
		}

		::System::Void NKPPGDENJAE_2(::RPG::Client::GridFightTraitConfigBase* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitConfigBase*, ::System::UInt32))((::PBYTE)hIl2Cpp + IJIJMJNMIIN_NKPPGDENJAE_2_OFFSET))(this, a1, a2);
		}

	};
