#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class IJIJMJNMIIN;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class Object; }

#define BJHCEHANJOK_AOCANOGJPDC_OFFSET UNITYSDK_OFFSET(0x1BAD8790)
#define BJHCEHANJOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD8920)
#define BJHCEHANJOK_DADAIMMMCMP_OFFSET UNITYSDK_OFFSET(0x1BAD8730)
#define BJHCEHANJOK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1BAB8230)
#define BJHCEHANJOK__ONBIND_OFFSET UNITYSDK_OFFSET(0x1BAD8590)
#define BJHCEHANJOK___ONBUTTONCLICK_B__6_0_OFFSET UNITYSDK_OFFSET(0x1BAD8950)

inline static constexpr unsigned int BJHCEHANJOK_TypeDefinitionIndex = 74357;

	class BJHCEHANJOK : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleGridFightTeamTraitData* NHDBMHJLKNF; // 0x60
		::RPG::Client::AnimatorButton* AAFGIHCCPOP; // 0x68
		::IJIJMJNMIIN* KCKANELOJKG; // 0x70
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHCEHANJOK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHCEHANJOK__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::GameCore::BattleGridFightTeamTraitData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*, ::System::UInt32))((::PBYTE)hIl2Cpp + BJHCEHANJOK_NKPPGDENJAE_OFFSET))(this, a1, a2);
		}

		::System::Void DADAIMMMCMP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BJHCEHANJOK_DADAIMMMCMP_OFFSET))(this, a1);
		}

		::System::Void AOCANOGJPDC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJHCEHANJOK_AOCANOGJPDC_OFFSET))(this, a1);
		}

		::System::Void __OnButtonClick_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHCEHANJOK___ONBUTTONCLICK_B__6_0_OFFSET))(this);
		}

	};
