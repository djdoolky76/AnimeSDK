#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameFormationEditor_EditorType.h"
#include "unitysdk/System/Object.h"
class BLOHPFEHNPK;
namespace RPG::Client { class GridFightEquipCraftMapInfo; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightFormationRole; }
namespace RPG::Client { class GridFightFormationTeam; }
namespace RPG::Client { class GridFightGameFormation; }
namespace RPG::Client { class GridFightGameFormationEditor_EditEvent; }
namespace RPG::Client { class GridFightGameFormationEditor_EditingSpotLightRecommend; }
namespace RPG::Client { class GridFightGameFormationEditor_EquipDressRule; }
namespace RPG::Client { class GridFightGameFormationEditor_Filter; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::Client { class GridFightSpotLightRecommend; }
namespace RPG::GameCore { class GridFightEquipConfigRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDBASICRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xDB15FF0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDCORE_OFFSET UNITYSDK_OFFSET(0xDB14750)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDEDITCALLBACK_OFFSET UNITYSDK_OFFSET(0xDB0F780)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDEQUIP_OFFSET UNITYSDK_OFFSET(0xDB13920)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDPRIMARYRECOMMENDSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xDB14F90)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xDB16130)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDSECONDRECOMMENDSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xDB15220)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xDB14A40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANADDCORE_OFFSET UNITYSDK_OFFSET(0xDB146E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANADDSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xDB149E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANDRESS_OFFSET UNITYSDK_OFFSET(0xDB0D5E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANPUTROLE_OFFSET UNITYSDK_OFFSET(0xDB0F1E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANPUT_OFFSET UNITYSDK_OFFSET(0xDB10CA0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB17BA0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_COMPOSITEEQUIP_OFFSET UNITYSDK_OFFSET(0xDB15E60)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CONTAINSROLEID_OFFSET UNITYSDK_OFFSET(0xDB11EC0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CTOR_OFFSET UNITYSDK_OFFSET(0xDB0B810)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_DELETE_OFFSET UNITYSDK_OFFSET(0xDB17540)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITDESC_OFFSET UNITYSDK_OFFSET(0xDB11E00)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITTITLE_OFFSET UNITYSDK_OFFSET(0xDB11D40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETALLEQUIPOPTIONS_OFFSET UNITYSDK_OFFSET(0xDB0EBC0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETALLROLEOPTIONS_OFFSET UNITYSDK_OFFSET(0xDB0E570)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETFILTER_OFFSET UNITYSDK_OFFSET(0xDB0D710)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETFIRSTEMPTYINDEX_1_OFFSET UNITYSDK_OFFSET(0xDB12700)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETFIRSTEMPTYINDEX_OFFSET UNITYSDK_OFFSET(0xDB12590)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETROLEPOS_OFFSET UNITYSDK_OFFSET(0xDB12050)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_CURTEAM_OFFSET UNITYSDK_OFFSET(0xDB0F7D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_EARLYTEAM_OFFSET UNITYSDK_OFFSET(0xDB0F760)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_EDITINGSPOTLIGHTRECOMMENDS_OFFSET UNITYSDK_OFFSET(0xDB12550)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_FINALTEAM_OFFSET UNITYSDK_OFFSET(0xDB0F720)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_MIDTEAM_OFFSET UNITYSDK_OFFSET(0xDB0F740)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_RECOMMENDBASICEQUIPS_OFFSET UNITYSDK_OFFSET(0xDB12220)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_RECOMMENDEQUIPS_OFFSET UNITYSDK_OFFSET(0xDB12390)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_SPOTLIGHTRECOMMENDS_OFFSET UNITYSDK_OFFSET(0xDB12500)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET__CUREDITFORMATION_OFFSET UNITYSDK_OFFSET(0xDB0F680)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xDB11CF0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ISSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xDB14E80)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_MOVERECOMMENDSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xDB15700)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_PUTROLE_OFFSET UNITYSDK_OFFSET(0xDB0FB10)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEBASICRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xDB16270)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVECORE_OFFSET UNITYSDK_OFFSET(0xDB14970)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEEQUIP_OFFSET UNITYSDK_OFFSET(0xDB14090)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVERECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xDB16310)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVERECOMMENDSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xDB15A10)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEROLEBYROLEID_OFFSET UNITYSDK_OFFSET(0xDB11700)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEROLE_OFFSET UNITYSDK_OFFSET(0xDB10F40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVESPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xDB14E00)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SAVE_OFFSET UNITYSDK_OFFSET(0xDB165D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SETCORE_OFFSET UNITYSDK_OFFSET(0xDB10D10)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SETRECOMMENDSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xDB15280)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SETROLESTAR_OFFSET UNITYSDK_OFFSET(0xDB0FF10)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SET_EARLYTEAM_OFFSET UNITYSDK_OFFSET(0xDB0F770)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SET_FINALTEAM_OFFSET UNITYSDK_OFFSET(0xDB0F730)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SET_MIDTEAM_OFFSET UNITYSDK_OFFSET(0xDB0F750)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_STARTEDITOR_OFFSET UNITYSDK_OFFSET(0xDB0FAC0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPBASICORDER_OFFSET UNITYSDK_OFFSET(0xDB163B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPORDER_OFFSET UNITYSDK_OFFSET(0xDB164C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPPOS_OFFSET UNITYSDK_OFFSET(0xDB10970)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPRECOMMENDSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xDB15990)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_TRYCOMPOSITEEQUIP_OFFSET UNITYSDK_OFFSET(0xDB12B40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__CONTAINSROLE_OFFSET UNITYSDK_OFFSET(0xDB10400)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__DISPATCHEDITEVENT_OFFSET UNITYSDK_OFFSET(0xDB0FDD0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__FINDCRAFTTARGET_OFFSET UNITYSDK_OFFSET(0xDB12F60)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETEDITINGSLOTS_OFFSET UNITYSDK_OFFSET(0xDB15490)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETEDITINGSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xDB10890)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETEQUIPORDER_OFFSET UNITYSDK_OFFSET(0xDB17AB0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETFIRSTEMPTYINDEX_B__72_0_OFFSET UNITYSDK_OFFSET(0xDB17F00)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETROLEBYPOSINDEX_OFFSET UNITYSDK_OFFSET(0xDB0F840)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__HASEDITINGSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xDB15500)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__ISPOSINDEXSUPPORT_OFFSET UNITYSDK_OFFSET(0xDB12980)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__RELOADEDITINGSPOTLIGHTS_OFFSET UNITYSDK_OFFSET(0xDB0F8A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__REMOVECORE_OFFSET UNITYSDK_OFFSET(0xDB114B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__REMOVEEQUIPREQUIEDBYEMBLEM_OFFSET UNITYSDK_OFFSET(0xDB142C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__REMOVESPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xDB112E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__REPLACEROLEIDINMARKS_OFFSET UNITYSDK_OFFSET(0xDB104C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__SETAHASPRANK_OFFSET UNITYSDK_OFFSET(0xDB10160)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__SETRECOMMENDSPOTLIGHTATFIRSTEMPTY_OFFSET UNITYSDK_OFFSET(0xDB14FF0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__SHOULDNOTEQUIPSHOWINEDITOR_OFFSET UNITYSDK_OFFSET(0xDB17B40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__SYNCALLEDITINGSPOTLIGHTS_OFFSET UNITYSDK_OFFSET(0xDB15BC0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__SYNCEDITINGSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xDB15640)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__WRITECOMPACTSPOTLIGHTS_OFFSET UNITYSDK_OFFSET(0xDB15D10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_TypeDefinitionIndex = 66158;

	class GridFightGameFormationEditor : public ::System::Object
	{
	public:
		::System::Action_1<::System::Object*>* OnEdit; // 0x10
		::RPG::Client::GridFightFormationTeam* _EarlyTeam_k__BackingField; // 0x18
		::RPG::Client::GridFightFormationTeam* _MidTeam_k__BackingField; // 0x20
		::RPG::Client::GridFightFormationTeam* _FinalTeam_k__BackingField; // 0x28
		::RPG::Client::GridFightGameFormation* _Formation; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* _EditingSpotLights; // 0x38
		::RPG::Client::GridFightGameFormationEditor_EditorType CurEditorType; // 0x40
		static ::RPG::Client::GridFightGameFormationEditor_EditEvent** StaticGet__EditEvent()
		{
			return (::RPG::Client::GridFightGameFormationEditor_EditEvent**)UnitySDK::FromName("RPG.Client", "GridFightGameFormationEditor")->GetStaticField(0x68CD0);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet__DressRules()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("RPG.Client", "GridFightGameFormationEditor")->GetStaticField(0x68CD8);
		}

		// static const ::System::Object _PrimaryRecommendSpotLightSlotCount; // 0x0
		// static const ::System::Object _SecondRecommendSpotLightSlotCount; // 0x0
		// static const ::System::Object _RecommendSpotLightRoleMaxCount; // 0x0
		::System::Void _ctor(::RPG::Client::GridFightGameFormation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CCTOR_OFFSET))();
		}

		::RPG::Client::GridFightGameFormationEditor_EquipDressRule* CanDress(::RPG::Client::GridFightFormationRole* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightGameFormationEditor_EquipDressRule*(*)(::PVOID, ::RPG::Client::GridFightFormationRole*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANDRESS_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightGameFormationEditor_Filter* GetFilter()
		{
			return ((::RPG::Client::GridFightGameFormationEditor_Filter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETFILTER_OFFSET))(this);
		}

		::System::Boolean CanPutRole(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANPUTROLE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightFormationTeam* get_FinalTeam()
		{
			return ((::RPG::Client::GridFightFormationTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_FINALTEAM_OFFSET))(this);
		}

		::System::Void set_FinalTeam(::RPG::Client::GridFightFormationTeam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFormationTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SET_FINALTEAM_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightFormationTeam* get_MidTeam()
		{
			return ((::RPG::Client::GridFightFormationTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_MIDTEAM_OFFSET))(this);
		}

		::System::Void set_MidTeam(::RPG::Client::GridFightFormationTeam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFormationTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SET_MIDTEAM_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightFormationTeam* get_EarlyTeam()
		{
			return ((::RPG::Client::GridFightFormationTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_EARLYTEAM_OFFSET))(this);
		}

		::System::Void set_EarlyTeam(::RPG::Client::GridFightFormationTeam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFormationTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SET_EARLYTEAM_OFFSET))(this, a1);
		}

		::System::Void AddEditCallback(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDEDITCALLBACK_OFFSET))(this, a1);
		}

		::BLOHPFEHNPK* get__CurEditFormation()
		{
			return ((::BLOHPFEHNPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET__CUREDITFORMATION_OFFSET))(this);
		}

		::RPG::Client::GridFightFormationTeam* get_CurTeam()
		{
			return ((::RPG::Client::GridFightFormationTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_CURTEAM_OFFSET))(this);
		}

		::RPG::Client::GridFightFormationRole* _GetRoleByPosIndex(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightFormationRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETROLEBYPOSINDEX_OFFSET))(this, a1);
		}

		::System::Void StartEditor(::RPG::Client::GridFightGameFormationEditor_EditorType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormationEditor_EditorType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_STARTEDITOR_OFFSET))(this, a1);
		}

		::System::Void PutRole(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_PUTROLE_OFFSET))(this, a1, a2);
		}

		::System::Void SetRoleStar(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SETROLESTAR_OFFSET))(this, a1, a2);
		}

		::System::Void _SetAhaSpRank(::RPG::Client::GridFightFormationRole* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFormationRole*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__SETAHASPRANK_OFFSET))(this, a1, a2);
		}

		::System::Void _ReplaceRoleIDInMarks(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__REPLACEROLEIDINMARKS_OFFSET))(this, a1, a2);
		}

		::System::Void SwapPos(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPPOS_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanPut(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANPUT_OFFSET))(this, a1, a2);
		}

		::System::Void SetCore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SETCORE_OFFSET))(this, a1);
		}

		::System::Void RemoveRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEROLE_OFFSET))(this, a1);
		}

		::System::Void RemoveRoleByRoleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEROLEBYROLEID_OFFSET))(this, a1);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ISEMPTY_OFFSET))(this);
		}

		::System::Void EditTitle(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITTITLE_OFFSET))(this, a1);
		}

		::System::Void EditDesc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITDESC_OFFSET))(this, a1);
		}

		::System::Boolean ContainsRoleID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CONTAINSROLEID_OFFSET))(this, a1);
		}

		::System::UInt32 GetRolePos(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETROLEPOS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_RecommendBasicEquips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_RECOMMENDBASICEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_RecommendEquips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_RECOMMENDEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightRecommend*>* get_SpotLightRecommends()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightRecommend*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_SPOTLIGHTRECOMMENDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_EditingSpotLightRecommends()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_EDITINGSPOTLIGHTRECOMMENDS_OFFSET))(this);
		}

		::System::UInt32 GetFirstEmptyIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETFIRSTEMPTYINDEX_OFFSET))(this);
		}

		::System::UInt32 GetFirstEmptyIndex_1(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETFIRSTEMPTYINDEX_1_OFFSET))(this, a1);
		}

		::System::Boolean _IsPosIndexSupport(::RPG::Client::GridFightRoleConfig* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRoleConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__ISPOSINDEXSUPPORT_OFFSET))(this, a1, a2);
		}

		::System::UInt32 TryCompositeEquip(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_TRYCOMPOSITEEQUIP_OFFSET))(this, a1, a2);
		}

		::System::Void AddEquip(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDEQUIP_OFFSET))(this, a1, a2);
		}

		static ::System::UInt32 _FindCraftTarget(::RPG::Client::GridFightEquipCraftMapInfo* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::RPG::Client::GridFightEquipCraftMapInfo*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__FINDCRAFTTARGET_OFFSET))(a1, a2, a3);
		}

		::System::Void RemoveEquip(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEEQUIP_OFFSET))(this, a1, a2);
		}

		::System::Void _RemoveEquipRequiedByEmblem(::RPG::Client::GridFightFormationRole* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFormationRole*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__REMOVEEQUIPREQUIEDBYEMBLEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanAddCore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANADDCORE_OFFSET))(this);
		}

		::System::Void AddCore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDCORE_OFFSET))(this, a1);
		}

		::System::Void RemoveCore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVECORE_OFFSET))(this, a1);
		}

		::System::Boolean _RemoveCore(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__REMOVECORE_OFFSET))(this, a1);
		}

		::System::Boolean CanAddSpotLight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANADDSPOTLIGHT_OFFSET))(this);
		}

		::System::Void AddSpotLight(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDSPOTLIGHT_OFFSET))(this, a1);
		}

		::System::Void RemoveSpotLight(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVESPOTLIGHT_OFFSET))(this, a1);
		}

		::System::Boolean _ContainsRole(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__CONTAINSROLE_OFFSET))(this, a1);
		}

		::System::Boolean _RemoveSpotLight(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__REMOVESPOTLIGHT_OFFSET))(this, a1);
		}

		::System::Boolean IsSpotLight(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ISSPOTLIGHT_OFFSET))(this, a1);
		}

		::System::Void AddPrimaryRecommendSpotLight(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDPRIMARYRECOMMENDSPOTLIGHT_OFFSET))(this, a1, a2);
		}

		::System::Void AddSecondRecommendSpotLight(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDSECONDRECOMMENDSPOTLIGHT_OFFSET))(this, a1, a2);
		}

		::System::Void SetRecommendSpotLight(::System::UInt32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SETRECOMMENDSPOTLIGHT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MoveRecommendSpotLight(::System::UInt32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_MOVERECOMMENDSPOTLIGHT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SwapRecommendSpotLight(::System::UInt32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPRECOMMENDSPOTLIGHT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RemoveRecommendSpotLight(::System::UInt32 a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVERECOMMENDSPOTLIGHT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetRecommendSpotLightAtFirstEmpty(::System::UInt32 a1, ::System::Boolean a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__SETRECOMMENDSPOTLIGHTATFIRSTEMPTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ReloadEditingSpotLights()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__RELOADEDITINGSPOTLIGHTS_OFFSET))(this);
		}

		::RPG::Client::GridFightGameFormationEditor_EditingSpotLightRecommend* _GetEditingSpotLight(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGameFormationEditor_EditingSpotLightRecommend*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETEDITINGSPOTLIGHT_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* _GetEditingSlots(::RPG::Client::GridFightGameFormationEditor_EditingSpotLightRecommend* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::Client::GridFightGameFormationEditor_EditingSpotLightRecommend*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETEDITINGSLOTS_OFFSET))(a1, a2);
		}

		static ::System::Boolean _HasEditingSpotLight(::RPG::Client::GridFightGameFormationEditor_EditingSpotLightRecommend* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightGameFormationEditor_EditingSpotLightRecommend*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__HASEDITINGSPOTLIGHT_OFFSET))(a1, a2);
		}

		::System::Void _SyncAllEditingSpotLights()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__SYNCALLEDITINGSPOTLIGHTS_OFFSET))(this);
		}

		static ::System::Void _SyncEditingSpotLight(::RPG::Client::GridFightGameFormationEditor_EditingSpotLightRecommend* a1)
		{
			return ((::System::Void(*)(::RPG::Client::GridFightGameFormationEditor_EditingSpotLightRecommend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__SYNCEDITINGSPOTLIGHT_OFFSET))(a1);
		}

		static ::System::Void _WriteCompactSpotLights(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__WRITECOMPACTSPOTLIGHTS_OFFSET))(a1, a2);
		}

		::System::Void CompositeEquip(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_COMPOSITEEQUIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddBasicRecommendEquip(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDBASICRECOMMENDEQUIP_OFFSET))(this, a1, a2);
		}

		::System::Void AddRecommendEquip(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDRECOMMENDEQUIP_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveBasicRecommendEquip(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEBASICRECOMMENDEQUIP_OFFSET))(this, a1);
		}

		::System::Void RemoveRecommendEquip(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVERECOMMENDEQUIP_OFFSET))(this, a1);
		}

		::System::Void SwapBasicOrder(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPBASICORDER_OFFSET))(this, a1, a2);
		}

		::System::Void SwapOrder(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPORDER_OFFSET))(this, a1, a2);
		}

		::System::Void Save()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SAVE_OFFSET))(this);
		}

		::System::Void Delete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_DELETE_OFFSET))(this);
		}

		::System::Void _DispatchEditEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__DISPATCHEDITEVENT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetAllRoleOptions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETALLROLEOPTIONS_OFFSET))(this);
		}

		::System::Int32 _GetEquipOrder(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETEQUIPORDER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* GetAllEquipOptions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETALLEQUIPOPTIONS_OFFSET))(this);
		}

		::System::Boolean _ShouldNotEquipShowInEditor(::RPG::GameCore::GridFightEquipConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__SHOULDNOTEQUIPSHOWINEDITOR_OFFSET))(this, a1);
		}

		::System::Boolean _GetFirstEmptyIndex_b__72_0(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETFIRSTEMPTYINDEX_B__72_0_OFFSET))(this, a1);
		}

	};
}
