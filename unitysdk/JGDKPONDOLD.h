#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class IJIJMJNMIIN;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define JGDKPONDOLD_AOCANOGJPDC_OFFSET UNITYSDK_OFFSET(0xB199510)
#define JGDKPONDOLD_CTOR_OFFSET UNITYSDK_OFFSET(0xB1996A0)
#define JGDKPONDOLD_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB199110)
#define JGDKPONDOLD_OJHLLKFGIOH_OFFSET UNITYSDK_OFFSET(0xB1992A0)
#define JGDKPONDOLD__ONBIND_OFFSET UNITYSDK_OFFSET(0xB198F60)
#define JGDKPONDOLD___ONBUTTONCLICK_B__9_0_OFFSET UNITYSDK_OFFSET(0xB199740)

inline static constexpr unsigned int JGDKPONDOLD_TypeDefinitionIndex = 72281;

	class JGDKPONDOLD : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* GIDAEFPOGHI; // 0x60
		::UnityEngine::UI::Text* PPNBGHOPMNB; // 0x68
		::RPG::Client::AnimatorButton* AAFGIHCCPOP; // 0x70
		::RPG::GameCore::BattleGridFightTeamTraitData* NHDBMHJLKNF; // 0x78
		::System::Collections::Generic::List_1<::System::UInt32>* GEKNAHPEDIE; // 0x80
		::UnityEngine::UI::Button* JJCEJBMJELA; // 0x88
		::IJIJMJNMIIN* KCKANELOJKG; // 0x90
		::System::Text::StringBuilder* EEKCKMPNIPB; // 0x98
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

		::System::Void OJHLLKFGIOH(::RPG::Client::GridFightTraitConfigBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitConfigBase*))((::PBYTE)hIl2Cpp + JGDKPONDOLD_OJHLLKFGIOH_OFFSET))(this, a1);
		}

		::System::Void AOCANOGJPDC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGDKPONDOLD_AOCANOGJPDC_OFFSET))(this, a1);
		}

		::System::Void __OnButtonClick_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDKPONDOLD___ONBUTTONCLICK_B__9_0_OFFSET))(this);
		}

	};
