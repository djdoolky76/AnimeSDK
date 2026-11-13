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

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDBASICRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x1D689680)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDCORE_OFFSET UNITYSDK_OFFSET(0x1D687DE0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDEDITCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D682E10)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDEQUIP_OFFSET UNITYSDK_OFFSET(0x1D686FB0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDPRIMARYRECOMMENDSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1D688620)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x1D6897C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDSECONDRECOMMENDSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1D6888B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1D6880D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANADDCORE_OFFSET UNITYSDK_OFFSET(0x1D687D70)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANADDSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1D688070)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANDRESS_OFFSET UNITYSDK_OFFSET(0x1D680C70)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANPUTROLE_OFFSET UNITYSDK_OFFSET(0x1D682870)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANPUT_OFFSET UNITYSDK_OFFSET(0x1D684330)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D68B250)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_COMPOSITEEQUIP_OFFSET UNITYSDK_OFFSET(0x1D6894F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CONTAINSROLEID_OFFSET UNITYSDK_OFFSET(0x1D685550)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D67EEA0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_DELETE_OFFSET UNITYSDK_OFFSET(0x1D68ABF0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITDESC_OFFSET UNITYSDK_OFFSET(0x1D685490)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITTITLE_OFFSET UNITYSDK_OFFSET(0x1D6853D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETALLEQUIPOPTIONS_OFFSET UNITYSDK_OFFSET(0x1D682250)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETALLROLEOPTIONS_OFFSET UNITYSDK_OFFSET(0x1D681C00)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETFILTER_OFFSET UNITYSDK_OFFSET(0x1D680DA0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETFIRSTEMPTYINDEX_1_OFFSET UNITYSDK_OFFSET(0x1D685D90)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETFIRSTEMPTYINDEX_OFFSET UNITYSDK_OFFSET(0x1D685C20)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETROLEPOS_OFFSET UNITYSDK_OFFSET(0x1D6856E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_CURTEAM_OFFSET UNITYSDK_OFFSET(0x1D682E60)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_EARLYTEAM_OFFSET UNITYSDK_OFFSET(0x1D682DF0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_EDITINGSPOTLIGHTRECOMMENDS_OFFSET UNITYSDK_OFFSET(0x1D685BE0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_FINALTEAM_OFFSET UNITYSDK_OFFSET(0x1D682DB0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_MIDTEAM_OFFSET UNITYSDK_OFFSET(0x1D682DD0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_RECOMMENDBASICEQUIPS_OFFSET UNITYSDK_OFFSET(0x1D6858B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_RECOMMENDEQUIPS_OFFSET UNITYSDK_OFFSET(0x1D685A20)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_SPOTLIGHTRECOMMENDS_OFFSET UNITYSDK_OFFSET(0x1D685B90)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET__CUREDITFORMATION_OFFSET UNITYSDK_OFFSET(0x1D682D10)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1D685380)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ISSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1D688510)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_MOVERECOMMENDSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1D688D90)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_PUTROLE_OFFSET UNITYSDK_OFFSET(0x1D6831A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEBASICRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x1D689900)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVECORE_OFFSET UNITYSDK_OFFSET(0x1D688000)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEEQUIP_OFFSET UNITYSDK_OFFSET(0x1D687720)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVERECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x1D6899A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVERECOMMENDSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1D6890A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEROLEBYROLEID_OFFSET UNITYSDK_OFFSET(0x1D684D90)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEROLE_OFFSET UNITYSDK_OFFSET(0x1D6845D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVESPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1D688490)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SAVE_OFFSET UNITYSDK_OFFSET(0x1D689C60)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SETCORE_OFFSET UNITYSDK_OFFSET(0x1D6843A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SETRECOMMENDSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1D688910)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SETROLESTAR_OFFSET UNITYSDK_OFFSET(0x1D6835A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SET_EARLYTEAM_OFFSET UNITYSDK_OFFSET(0x1D682E00)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SET_FINALTEAM_OFFSET UNITYSDK_OFFSET(0x1D682DC0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SET_MIDTEAM_OFFSET UNITYSDK_OFFSET(0x1D682DE0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_STARTEDITOR_OFFSET UNITYSDK_OFFSET(0x1D683150)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPBASICORDER_OFFSET UNITYSDK_OFFSET(0x1D689A40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPORDER_OFFSET UNITYSDK_OFFSET(0x1D689B50)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPPOS_OFFSET UNITYSDK_OFFSET(0x1D684000)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPRECOMMENDSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1D689020)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_TRYCOMPOSITEEQUIP_OFFSET UNITYSDK_OFFSET(0x1D6861D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__CONTAINSROLE_OFFSET UNITYSDK_OFFSET(0x1D683A90)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__DISPATCHEDITEVENT_OFFSET UNITYSDK_OFFSET(0x1D683460)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__FINDCRAFTTARGET_OFFSET UNITYSDK_OFFSET(0x1D6865F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETEDITINGSLOTS_OFFSET UNITYSDK_OFFSET(0x1D688B20)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETEDITINGSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1D683F20)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETEQUIPORDER_OFFSET UNITYSDK_OFFSET(0x1D68B160)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETFIRSTEMPTYINDEX_B__72_0_OFFSET UNITYSDK_OFFSET(0x1D68B5B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETROLEBYPOSINDEX_OFFSET UNITYSDK_OFFSET(0x1D682ED0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__HASEDITINGSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1D688B90)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__ISPOSINDEXSUPPORT_OFFSET UNITYSDK_OFFSET(0x1D686010)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__RELOADEDITINGSPOTLIGHTS_OFFSET UNITYSDK_OFFSET(0x1D682F30)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__REMOVECORE_OFFSET UNITYSDK_OFFSET(0x1D684B40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__REMOVEEQUIPREQUIEDBYEMBLEM_OFFSET UNITYSDK_OFFSET(0x1D687950)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__REMOVESPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1D684970)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__REPLACEROLEIDINMARKS_OFFSET UNITYSDK_OFFSET(0x1D683B50)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__SETAHASPRANK_OFFSET UNITYSDK_OFFSET(0x1D6837F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__SETRECOMMENDSPOTLIGHTATFIRSTEMPTY_OFFSET UNITYSDK_OFFSET(0x1D688680)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__SHOULDNOTEQUIPSHOWINEDITOR_OFFSET UNITYSDK_OFFSET(0x1D68B1F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__SYNCALLEDITINGSPOTLIGHTS_OFFSET UNITYSDK_OFFSET(0x1D689250)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__SYNCEDITINGSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1D688CD0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__WRITECOMPACTSPOTLIGHTS_OFFSET UNITYSDK_OFFSET(0x1D6893A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_TypeDefinitionIndex = 66158;

	class GridFightGameFormationEditor : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _EditingSpotLights; // 0x10
		::RPG::Client::GridFightFormationTeam* _FinalTeam_k__BackingField; // 0x18
		::RPG::Client::GridFightFormationTeam* _EarlyTeam_k__BackingField; // 0x20
		::RPG::Client::GridFightGameFormation* _Formation; // 0x28
		::System::Action_1<::System::Object*>* OnEdit; // 0x30
		::RPG::Client::GridFightFormationTeam* _MidTeam_k__BackingField; // 0x38
		::RPG::Client::GridFightGameFormationEditor_EditorType CurEditorType; // 0x40
		static ::RPG::Client::GridFightGameFormationEditor_EditEvent** StaticGet__EditEvent()
		{
			return (::RPG::Client::GridFightGameFormationEditor_EditEvent**)UnitySDK::FromName("RPG.Client", "GridFightGameFormationEditor")->GetStaticField(0x6A050);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet__DressRules()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("RPG.Client", "GridFightGameFormationEditor")->GetStaticField(0x6A058);
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
