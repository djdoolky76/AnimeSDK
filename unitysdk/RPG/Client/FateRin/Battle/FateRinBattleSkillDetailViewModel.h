#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/Color.h"
class DHLGJCOBNKH;
namespace RPG::Client::FateRin { class IFateRinExtraEffectViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLESKILLDETAILVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCED0E70)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLESKILLDETAILVIEWMODEL_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0xCED1170)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLESKILLDETAILVIEWMODEL_GET_SKILLEXTRAEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xCED12E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLESKILLDETAILVIEWMODEL_GET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0xCED1110)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLESKILLDETAILVIEWMODEL_GET_SKILLTAG_OFFSET UNITYSDK_OFFSET(0xCED11C0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLESKILLDETAILVIEWMODEL_GET_SKILLTYPECOLOR_OFFSET UNITYSDK_OFFSET(0xCED1280)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLESKILLDETAILVIEWMODEL_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xCED1220)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleSkillDetailViewModel_TypeDefinitionIndex = 80949;

	class FateRinBattleSkillDetailViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::IFateRinExtraEffectViewModel*>* _SkillExtraEffectList_k__BackingField; // 0x20
		::DHLGJCOBNKH* _Model; // 0x28
		::System::Void _ctor(::DHLGJCOBNKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHLGJCOBNKH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLESKILLDETAILVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_SkillName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLESKILLDETAILVIEWMODEL_GET_SKILLNAME_OFFSET))(this);
		}

		::System::String* get_SkillDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLESKILLDETAILVIEWMODEL_GET_SKILLDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillTag()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLESKILLDETAILVIEWMODEL_GET_SKILLTAG_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillType()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLESKILLDETAILVIEWMODEL_GET_SKILLTYPE_OFFSET))(this);
		}

		::UnityEngine::Color get_SkillTypeColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLESKILLDETAILVIEWMODEL_GET_SKILLTYPECOLOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateRin::IFateRinExtraEffectViewModel*>* get_SkillExtraEffectList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::IFateRinExtraEffectViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLESKILLDETAILVIEWMODEL_GET_SKILLEXTRAEFFECTLIST_OFFSET))(this);
		}

	};
}
