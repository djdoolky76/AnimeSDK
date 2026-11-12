#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AvatarEnhancedHint; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RankChange; }
namespace RPG::Client { class SkillTreeChange; }
namespace RPG::GameCore { class AvatarEnhancedHintRow; }
namespace RPG::GameCore { class AvatarSkillRow; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARENHANCEDHINT_CREATE_OFFSET UNITYSDK_OFFSET(0xD030850)
#define RPG_CLIENT_AVATARENHANCEDHINT_CTOR_OFFSET UNITYSDK_OFFSET(0xD0309F0)
#define RPG_CLIENT_AVATARENHANCEDHINT_ENTERTRIALSTAGE_OFFSET UNITYSDK_OFFSET(0xD034670)
#define RPG_CLIENT_AVATARENHANCEDHINT_GETDESCS_OFFSET UNITYSDK_OFFSET(0xD032260)
#define RPG_CLIENT_AVATARENHANCEDHINT_GETHINTSINBOX_OFFSET UNITYSDK_OFFSET(0xD030A00)
#define RPG_CLIENT_AVATARENHANCEDHINT_GETRANKCHANGES_OFFSET UNITYSDK_OFFSET(0xD0340F0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GETSEASONHINTS_OFFSET UNITYSDK_OFFSET(0xD030470)
#define RPG_CLIENT_AVATARENHANCEDHINT_GETSKILLTREECHANGES_OFFSET UNITYSDK_OFFSET(0xD032420)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_AFTERENHANCEDID_OFFSET UNITYSDK_OFFSET(0xD030F60)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_AVATARGACHARESULTIMGPATH_OFFSET UNITYSDK_OFFSET(0xD031520)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xD030D00)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_BEFOREENHANCEDID_OFFSET UNITYSDK_OFFSET(0xD030E30)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_HASRANKCHANGE_OFFSET UNITYSDK_OFFSET(0xD031A90)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD0311E0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_ISPREVIEW_OFFSET UNITYSDK_OFFSET(0xD0318C0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_ISTRIALREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xD030770)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_ISTRIALREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xD034750)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_ISUP_OFFSET UNITYSDK_OFFSET(0xD0319B0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD031090)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_PROFESSIONSMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xD031650)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_REWARDITEM_OFFSET UNITYSDK_OFFSET(0xD034980)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xD0312C0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_TRIALREWARDID_OFFSET UNITYSDK_OFFSET(0xD0317F0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_TRIALSTAGEID_OFFSET UNITYSDK_OFFSET(0xD0317A0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xD0313F0)
#define RPG_CLIENT_AVATARENHANCEDHINT_TAKESTAGEREWARD_OFFSET UNITYSDK_OFFSET(0xD0348A0)
#define RPG_CLIENT_AVATARENHANCEDHINT__GETCHANGERANKLIST_OFFSET UNITYSDK_OFFSET(0xD031AF0)
#define RPG_CLIENT_AVATARENHANCEDHINT__GETCHANGESKILLTREELIST_OFFSET UNITYSDK_OFFSET(0xD031D30)
#define RPG_CLIENT_AVATARENHANCEDHINT__GETDISPLAYATTACKTYPE_OFFSET UNITYSDK_OFFSET(0xD034060)
#define RPG_CLIENT_AVATARENHANCEDHINT__GETSUBSKILLS_OFFSET UNITYSDK_OFFSET(0xD033BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarEnhancedHint_TypeDefinitionIndex = 63903;

	class AvatarEnhancedHint : public ::System::Object
	{
	public:
		::RPG::GameCore::IAvatarCommonRowWrap* _BeforeRow; // 0x10
		::RPG::GameCore::IAvatarCommonRowWrap* _AfterRow; // 0x18
		::RPG::GameCore::AvatarEnhancedHintRow* _HintRow; // 0x20
		::System::Void _ctor(::RPG::GameCore::AvatarEnhancedHintRow* a1, ::RPG::GameCore::IAvatarCommonRowWrap* a2, ::RPG::GameCore::IAvatarCommonRowWrap* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnhancedHintRow*, ::RPG::GameCore::IAvatarCommonRowWrap*, ::RPG::GameCore::IAvatarCommonRowWrap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::AvatarEnhancedHint* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::AvatarEnhancedHint*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_CREATE_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::AvatarEnhancedHint*>* GetSeasonHints(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarEnhancedHint*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GETSEASONHINTS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::AvatarEnhancedHint*>* GetHintsInBox(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarEnhancedHint*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GETHINTSINBOX_OFFSET))(a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_AVATARID_OFFSET))(this);
		}

		::System::UInt32 get_BeforeEnhancedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_BEFOREENHANCEDID_OFFSET))(this);
		}

		::System::UInt32 get_AfterEnhancedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_AFTERENHANCEDID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_NAME_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_WaitingAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_WAITINGAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_AvatarGachaResultImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_AVATARGACHARESULTIMGPATH_OFFSET))(this);
		}

		::System::String* get_ProfessionSmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_PROFESSIONSMALLICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_TrialStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_TRIALSTAGEID_OFFSET))(this);
		}

		::System::UInt32 get_TrialRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_TRIALREWARDID_OFFSET))(this);
		}

		::System::Boolean get_IsPreview()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_ISPREVIEW_OFFSET))(this);
		}

		::System::Boolean get_IsUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_ISUP_OFFSET))(this);
		}

		::System::Boolean get_HasRankChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_HASRANKCHANGE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetChangeSkillTreeList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT__GETCHANGESKILLTREELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetChangeRankList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT__GETCHANGERANKLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* GetDescs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GETDESCS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SkillTreeChange*>* GetSkillTreeChanges(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SkillTreeChange*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GETSKILLTREECHANGES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>* _GetSubSkills(::RPG::GameCore::IAvatarCommonRowWrap* a1, ::RPG::GameCore::AvatarSkillRow* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>*(*)(::PVOID, ::RPG::GameCore::IAvatarCommonRowWrap*, ::RPG::GameCore::AvatarSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT__GETSUBSKILLS_OFFSET))(this, a1, a2);
		}

		static ::RPG::GameCore::AttackType _GetDisplayAttackType(::RPG::GameCore::AvatarSkillRow* a1)
		{
			return ((::RPG::GameCore::AttackType(*)(::RPG::GameCore::AvatarSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT__GETDISPLAYATTACKTYPE_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RankChange*>* GetRankChanges()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RankChange*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GETRANKCHANGES_OFFSET))(this);
		}

		::System::Void EnterTrialStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_ENTERTRIALSTAGE_OFFSET))(this);
		}

		::System::Boolean get_IsTrialRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_ISTRIALREWARDTAKEN_OFFSET))(this);
		}

		::System::Boolean get_IsTrialRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_ISTRIALREWARDCANTAKE_OFFSET))(this);
		}

		::System::Void TakeStageReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_TAKESTAGEREWARD_OFFSET))(this);
		}

		::RPG::Client::ItemDisplayData* get_RewardItem()
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_REWARDITEM_OFFSET))(this);
		}

	};
}
