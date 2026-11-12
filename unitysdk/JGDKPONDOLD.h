#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class IJIJMJNMIIN;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class GridFightTraitAstropolisInfo; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define JGDKPONDOLD_AOCANOGJPDC_OFFSET UNITYSDK_OFFSET(0xB9B2BB0)
#define JGDKPONDOLD_CTOR_OFFSET UNITYSDK_OFFSET(0xB9B2D40)
#define JGDKPONDOLD_EPDNLPPFJMC_OFFSET UNITYSDK_OFFSET(0xB9B2940)
#define JGDKPONDOLD_FJOIJMJEOGN_OFFSET UNITYSDK_OFFSET(0xB9B2420)
#define JGDKPONDOLD_GKCIHCIAGNF_OFFSET UNITYSDK_OFFSET(0xB9B2700)
#define JGDKPONDOLD_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB9B2280)
#define JGDKPONDOLD_OJHLLKFGIOH_OFFSET UNITYSDK_OFFSET(0xB9B2590)
#define JGDKPONDOLD__ONBIND_OFFSET UNITYSDK_OFFSET(0xB9B1C70)
#define JGDKPONDOLD___ONBUTTONCLICK_B__19_0_OFFSET UNITYSDK_OFFSET(0xB9B2DE0)

inline static constexpr unsigned int JGDKPONDOLD_TypeDefinitionIndex = 74357;

	class JGDKPONDOLD : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* GIDAEFPOGHI; // 0x60
		::RPG::Client::AnimatorButton* AAFGIHCCPOP; // 0x68
		::UnityEngine::Transform* IKPLBMDLNFD; // 0x70
		::UnityEngine::Transform* ACNEFGLKBKF; // 0x78
		::UnityEngine::UI::Text* BCPFKOEODIO; // 0x80
		::UnityEngine::UI::Text* LENCFMMAOIH; // 0x88
		::System::Collections::Generic::List_1<::System::UInt32>* GEKNAHPEDIE; // 0x90
		::UnityEngine::UI::Button* JJCEJBMJELA; // 0x98
		::UnityEngine::Transform* GPINPEEEGEC; // 0xA0
		::System::Text::StringBuilder* EEKCKMPNIPB; // 0xA8
		::IJIJMJNMIIN* KCKANELOJKG; // 0xB0
		::RPG::GameCore::BattleGridFightTeamTraitData* NHDBMHJLKNF; // 0xB8
		::UnityEngine::Transform* EJLCPOKFBKO; // 0xC0
		::UnityEngine::UI::Text* PPNBGHOPMNB; // 0xC8
		::UnityEngine::Transform* OMLENALCNEG; // 0xD0
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* KJOAOPHMBPI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDKPONDOLD_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDKPONDOLD__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::GameCore::BattleGridFightTeamTraitData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*, ::System::UInt32))((::PBYTE)hIl2Cpp + JGDKPONDOLD_NKPPGDENJAE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightTraitConfigBase* FJOIJMJEOGN(::RPG::GameCore::BattleGridFightTeamTraitData* a1, ::RPG::Client::GridFightTraitConfigBase* a2)
		{
			return ((::RPG::Client::GridFightTraitConfigBase*(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*, ::RPG::Client::GridFightTraitConfigBase*))((::PBYTE)hIl2Cpp + JGDKPONDOLD_FJOIJMJEOGN_OFFSET))(this, a1, a2);
		}

		::System::Void OJHLLKFGIOH(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + JGDKPONDOLD_OJHLLKFGIOH_OFFSET))(this, a1);
		}

		::System::Void GKCIHCIAGNF(::RPG::Client::GridFightTraitAstropolisInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitAstropolisInfo*))((::PBYTE)hIl2Cpp + JGDKPONDOLD_GKCIHCIAGNF_OFFSET))(this, a1);
		}

		::System::Void EPDNLPPFJMC(::RPG::Client::GridFightTraitConfigBase* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitConfigBase*, ::System::UInt32))((::PBYTE)hIl2Cpp + JGDKPONDOLD_EPDNLPPFJMC_OFFSET))(this, a1, a2);
		}

		::System::Void AOCANOGJPDC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGDKPONDOLD_AOCANOGJPDC_OFFSET))(this, a1);
		}

		::System::Void __OnButtonClick_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDKPONDOLD___ONBUTTONCLICK_B__19_0_OFFSET))(this);
		}

	};
