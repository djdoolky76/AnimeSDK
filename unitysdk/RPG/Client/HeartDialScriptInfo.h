#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/RPG/GameCore/HeartDialStepType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/ValueTuple_2.h"
class JMCHDIEPEJP;
class LOBFFHLFKOL;
class OMMEIHJOHGJ;
namespace RPG::GameCore { class GameLevelHeartDialDialogueConfig; }
namespace RPG::GameCore { class GameLevelHeartDialPerformance; }
namespace RPG::GameCore { class GameLevelHeartDialScriptConfig; }
namespace RPG::GameCore { class HeartDialScriptConditionRow; }
namespace RPG::GameCore { class HeartDialScriptRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HEARTDIALSCRIPTINFO_ADDNPC_OFFSET UNITYSDK_OFFSET(0x1C5E4340)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_CHANGEEMOTION_OFFSET UNITYSDK_OFFSET(0x1C5E5E40)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_CHANGENPCMODEL_OFFSET UNITYSDK_OFFSET(0x1C5EB740)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C5E3F80)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5E2C00)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GETCONDITIONITEMLIST_OFFSET UNITYSDK_OFFSET(0x1C5EC1F0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GETCURRENTDIALOGUEID_OFFSET UNITYSDK_OFFSET(0x1C5EC640)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GETCURRENTEMODIALOGUE_OFFSET UNITYSDK_OFFSET(0x1C5EC7B0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GETDIALOGCONFIG_OFFSET UNITYSDK_OFFSET(0x1C5EAF40)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GETFULLCONDITIONDESCTEXTID_OFFSET UNITYSDK_OFFSET(0x1C5E9550)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GETFULLCONDITIONMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1C5E99A0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GETLOCKITEMDATA_OFFSET UNITYSDK_OFFSET(0x1C5E8430)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GETMISSINGITEMDATA_OFFSET UNITYSDK_OFFSET(0x1C5E83D0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_CURRENTEMO_OFFSET UNITYSDK_OFFSET(0x1C5EAF20)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_CURRENTMAINNPC_OFFSET UNITYSDK_OFFSET(0x1C5EAEC0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_CURRENTSTEP_OFFSET UNITYSDK_OFFSET(0x1C5EAF00)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_DIALOGUEINFO_OFFSET UNITYSDK_OFFSET(0x1C5E7C70)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x1C5E7C30)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_ISSCRIPTANYCHANGE_OFFSET UNITYSDK_OFFSET(0x1C5EA180)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_MISSINGEMPTYPE_OFFSET UNITYSDK_OFFSET(0x1C5E8C00)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_SCRIPTID_OFFSET UNITYSDK_OFFSET(0x1C5E8080)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_UNLOCKRAIDID_OFFSET UNITYSDK_OFFSET(0x1C5EAE70)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_HASEMOTYPE_OFFSET UNITYSDK_OFFSET(0x1C5E9C10)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_LOADCURRENTCUSTOMGROUP_OFFSET UNITYSDK_OFFSET(0x1C5EBD00)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_MODIFYOVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0x1C5EB2A0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_ONSTARTPERFORMANCEEND_OFFSET UNITYSDK_OFFSET(0x1C5EC850)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_PLAYPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1C5EBEC0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_PLAYSTARTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1C5EA1F0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_REFRESHDIALOGUEINFO_OFFSET UNITYSDK_OFFSET(0x1C5EB790)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_REFRESHMAINNPC_OFFSET UNITYSDK_OFFSET(0x1C5E7CB0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x1C5E5BC0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_SETCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1C5E42F0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_SETFLOORID_OFFSET UNITYSDK_OFFSET(0x1C5E4210)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_SETISCHANGE_OFFSET UNITYSDK_OFFSET(0x1C5E5B60)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_SETMAINNPC_OFFSET UNITYSDK_OFFSET(0x1C5EB660)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_SETNPCTRACEINFO_OFFSET UNITYSDK_OFFSET(0x1C5E6980)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_SET_CURRENTEMO_OFFSET UNITYSDK_OFFSET(0x1C5EAF30)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_SET_CURRENTSTEP_OFFSET UNITYSDK_OFFSET(0x1C5EAF10)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_SHOWPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1C5EA080)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_TRYPLAYDIALOGUEOVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0x1C5EB9E0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_TRYPLAYOVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0x1C5ECAC0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_TRYPLAYPREOVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0x1C5EC5B0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_TRYRELEASEMAINNPC_OFFSET UNITYSDK_OFFSET(0x1C5EB6E0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_TRYSHOWTOASTAFTERPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1C5E6250)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_UNLOADLASTGROUP_OFFSET UNITYSDK_OFFSET(0x1C5EBA60)

namespace RPG::Client
{
	inline static constexpr unsigned int HeartDialScriptInfo_TypeDefinitionIndex = 67581;

	class HeartDialScriptInfo : public ::System::Object
	{
	public:
		::LOBFFHLFKOL* _lastDialogueInfo; // 0x10
		::RPG::GameCore::GameLevelHeartDialScriptConfig* _scriptConfig; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* _emoDialogueDict; // 0x20
		::System::String* _scriptDialogPath; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameLevelHeartDialDialogueConfig*>* _dialogDict; // 0x30
		::OMMEIHJOHGJ* _currentMainNpc; // 0x38
		::LOBFFHLFKOL* _dialogueInfo; // 0x40
		::RPG::GameCore::HeartDialScriptConditionRow* _scriptconditionRow; // 0x48
		::RPG::GameCore::HeartDialScriptRow* _scriptRow; // 0x50
		::System::Collections::Generic::List_1<::OMMEIHJOHGJ*>* _npcList; // 0x58
		::RPG::GameCore::LevelGraphComponent* _act_Compt; // 0x60
		::RPG::GameCore::GameLevelHeartDialPerformance* _playPerformanceInfo; // 0x68
		::System::UInt32 _dialogueID; // 0x70
		::System::UInt32 _floorID; // 0x74
		::RPG::GameCore::HeartDialStepType _currentStep_k__BackingField; // 0x78
		::RPG::GameCore::HeartDialEmoType _currentEmo_k__BackingField; // 0x7C
		::System::Boolean _isStepChange; // 0x80
		::System::Boolean _isEmotionChange; // 0x81
		::System::Boolean _needPlayPerformance; // 0x82
		::System::Void _ctor(::RPG::GameCore::HeartDialScriptRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HeartDialScriptRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ScriptID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_SCRIPTID_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_FLOORID_OFFSET))(this);
		}

		::System::UInt32 get_UnlockRaidID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_UNLOCKRAIDID_OFFSET))(this);
		}

		::LOBFFHLFKOL* get_DialogueInfo()
		{
			return ((::LOBFFHLFKOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_DIALOGUEINFO_OFFSET))(this);
		}

		::OMMEIHJOHGJ* get_CurrentMainNPC()
		{
			return ((::OMMEIHJOHGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_CURRENTMAINNPC_OFFSET))(this);
		}

		::RPG::GameCore::HeartDialStepType get_currentStep()
		{
			return ((::RPG::GameCore::HeartDialStepType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_CURRENTSTEP_OFFSET))(this);
		}

		::System::Void set_currentStep(::RPG::GameCore::HeartDialStepType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HeartDialStepType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_SET_CURRENTSTEP_OFFSET))(this, a1);
		}

		::RPG::GameCore::HeartDialEmoType get_currentEmo()
		{
			return ((::RPG::GameCore::HeartDialEmoType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_CURRENTEMO_OFFSET))(this);
		}

		::System::Void set_currentEmo(::RPG::GameCore::HeartDialEmoType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HeartDialEmoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_SET_CURRENTEMO_OFFSET))(this, a1);
		}

		::RPG::GameCore::HeartDialEmoType get_missingEmpType()
		{
			return ((::RPG::GameCore::HeartDialEmoType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_MISSINGEMPTYPE_OFFSET))(this);
		}

		::System::Boolean get_isScriptAnyChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_ISSCRIPTANYCHANGE_OFFSET))(this);
		}

		::System::Void AddNPC(::OMMEIHJOHGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMMEIHJOHGJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_ADDNPC_OFFSET))(this, a1);
		}

		::System::Void RefreshMainNpc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_REFRESHMAINNPC_OFFSET))(this);
		}

		::System::Void SetNpcTraceInfo(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_SETNPCTRACEINFO_OFFSET))(this, a1);
		}

		::System::Void SetMainNpc(::OMMEIHJOHGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMMEIHJOHGJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_SETMAINNPC_OFFSET))(this, a1);
		}

		::System::Void TryReleaseMainNpc(::OMMEIHJOHGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMMEIHJOHGJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_TRYRELEASEMAINNPC_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_CLEAR_OFFSET))(this);
		}

		::System::Void ChangeNPCModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_CHANGENPCMODEL_OFFSET))(this);
		}

		::System::Void ChangeEmotion(::RPG::GameCore::HeartDialEmoType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HeartDialEmoType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_CHANGEEMOTION_OFFSET))(this, a1, a2);
		}

		::System::Void SetIsChange(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_SETISCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshState(::RPG::GameCore::HeartDialStepType a1, ::RPG::GameCore::HeartDialEmoType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HeartDialStepType, ::RPG::GameCore::HeartDialEmoType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_REFRESHSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ModifyOverrideInfo(::JMCHDIEPEJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMCHDIEPEJP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_MODIFYOVERRIDEINFO_OFFSET))(this, a1);
		}

		::System::Boolean ShowPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_SHOWPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean PlayStartPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_PLAYSTARTPERFORMANCE_OFFSET))(this);
		}

		::System::Void TryShowToastAfterPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_TRYSHOWTOASTAFTERPERFORMANCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* GetMissingItemData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GETMISSINGITEMDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* GetLockItemData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GETLOCKITEMDATA_OFFSET))(this);
		}

		::RPG::Client::TextID GetFullConditionDescTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GETFULLCONDITIONDESCTEXTID_OFFSET))(this);
		}

		::System::UInt32 GetFullConditionMainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GETFULLCONDITIONMAINMISSIONID_OFFSET))(this);
		}

		::System::Boolean HasEmoType(::RPG::GameCore::HeartDialEmoType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::HeartDialEmoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_HASEMOTYPE_OFFSET))(this, a1);
		}

		::System::Void SetFloorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_SETFLOORID_OFFSET))(this, a1);
		}

		::System::Void SetConfigPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_SETCONFIGPATH_OFFSET))(this, a1);
		}

		::System::Boolean PlayPerformance(::RPG::GameCore::GameLevelHeartDialPerformance* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameLevelHeartDialPerformance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_PLAYPERFORMANCE_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshDialogueInfo(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_REFRESHDIALOGUEINFO_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameLevelHeartDialDialogueConfig* GetDialogConfig(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameLevelHeartDialDialogueConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GETDIALOGCONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 GetCurrentDialogueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GETCURRENTDIALOGUEID_OFFSET))(this);
		}

		::System::UInt32 GetCurrentEmoDialogue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GETCURRENTEMODIALOGUE_OFFSET))(this);
		}

		::System::Void OnStartPerformanceEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_ONSTARTPERFORMANCEEND_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* GetConditionItemList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GETCONDITIONITEMLIST_OFFSET))(this, a1);
		}

		::System::Void TryPlayDialogueOverrideInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_TRYPLAYDIALOGUEOVERRIDEINFO_OFFSET))(this);
		}

		::System::Void TryPlayOverrideInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_TRYPLAYOVERRIDEINFO_OFFSET))(this);
		}

		::System::Void TryPlayPreOverrideInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_TRYPLAYPREOVERRIDEINFO_OFFSET))(this);
		}

		::System::Void UnloadLastGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_UNLOADLASTGROUP_OFFSET))(this);
		}

		::System::Void LoadCurrentCustomGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_LOADCURRENTCUSTOMGROUP_OFFSET))(this);
		}

	};
}
