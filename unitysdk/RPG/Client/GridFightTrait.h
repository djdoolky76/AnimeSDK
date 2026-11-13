#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayerPreparationState.h"
#include "unitysdk/RPG/GameCore/GridFightTrailLayerQuality.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
#include "unitysdk/RPG/Client/GridFightTrait_EffectEnumerable.h"
class AEHFALNJDKC;
class FBFODNFGMKG;
class HEBDCPNECAD;
class HEJJDLPNKMH;
class JBNOOOMNDEJ;
class NDPFOOJIAIJ;
class OBDNIEDPENN;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitAstropolisInfo; }
namespace RPG::Client { class GridFightTraitBuffEffect; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitLayerConfig; }
namespace RPG::Client { class GridFightTraitRemarkParser; }
namespace RPG::Client { class GridFightTraitSubTraitConfig; }
namespace RPG::Client { class GridFightUnlockTraitMember; }
namespace RPG::Client { class IGridFightTraitEditEffect; }
namespace RPG::Client { class IGridFightTraitEffect; }
namespace RPG::Client { class IGridFightTraitShowEffect; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTTRAIT_APPLYLAYER_OFFSET UNITYSDK_OFFSET(0x1D3DAD90)
#define RPG_CLIENT_GRIDFIGHTTRAIT_CANEDITINPREPARATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1D3E0040)
#define RPG_CLIENT_GRIDFIGHTTRAIT_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1D3DF0F0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_CREATEDUMMY_OFFSET UNITYSDK_OFFSET(0x1D3D9A90)
#define RPG_CLIENT_GRIDFIGHTTRAIT_CREATE_OFFSET UNITYSDK_OFFSET(0x1D3D99F0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D8F00)
#define RPG_CLIENT_GRIDFIGHTTRAIT_EDIT_OFFSET UNITYSDK_OFFSET(0x1D3DC210)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GETCURRENTSUBTRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x1D3DB290)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GETEDITEFFECTLIST_OFFSET UNITYSDK_OFFSET(0x1D3DBF20)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GETEDITICON_OFFSET UNITYSDK_OFFSET(0x1D3E01C0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GETEFFECT_1_OFFSET UNITYSDK_OFFSET(0x1D3DB590)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GETEFFECT_OFFSET UNITYSDK_OFFSET(0x1D3DAEB0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GETLAYERS_OFFSET UNITYSDK_OFFSET(0x1D3DB1A0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GETMEMBERSONBOARD_OFFSET UNITYSDK_OFFSET(0x1D3DB880)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GETSHOWNEFFECTLIST_OFFSET UNITYSDK_OFFSET(0x1D3DBC50)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GETTRAITBONUSEQUIPS_OFFSET UNITYSDK_OFFSET(0x1D3DFE90)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GETTRAITMODULEID_OFFSET UNITYSDK_OFFSET(0x1D3DFDE0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ACTIVATEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x1D3DF0B0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0x1D3DE400)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ALLMEMBERS_OFFSET UNITYSDK_OFFSET(0x1D3DB9F0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ASTROPOLISINFO_OFFSET UNITYSDK_OFFSET(0x1D3DE520)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_BUFFEFFECTS_OFFSET UNITYSDK_OFFSET(0x1D3E0570)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANEDIT_OFFSET UNITYSDK_OFFSET(0x1D3DD200)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANEFFECTSLOT_OFFSET UNITYSDK_OFFSET(0x1D3DD950)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANSHOW_OFFSET UNITYSDK_OFFSET(0x1D3DD8C0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANSUMMON_OFFSET UNITYSDK_OFFSET(0x1D3DD4C0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1D3DF0A0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_DATACONTEXT_OFFSET UNITYSDK_OFFSET(0x1D3D25F0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_EFFECTS_OFFSET UNITYSDK_OFFSET(0x1D3DBE70)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D3D3650)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x1D3D1F80)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISASTROPOLIS_OFFSET UNITYSDK_OFFSET(0x1D3DEEA0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISBATTLETRAIT_OFFSET UNITYSDK_OFFSET(0x1D3E05B0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISCURLAYERERROR_OFFSET UNITYSDK_OFFSET(0x1D3DEF90)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISPREPARATIONTRAIT_OFFSET UNITYSDK_OFFSET(0x1D3D3710)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISSPOTLIGHTTRAIT_OFFSET UNITYSDK_OFFSET(0x1D3DDD40)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISSUBTRAITACTIVE_OFFSET UNITYSDK_OFFSET(0x1D3DB240)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0x1D3DD9E0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x1D3DDE00)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x1D3D1EA0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_REMARKPARSER_OFFSET UNITYSDK_OFFSET(0x1D3E0590)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_SPOTLIGHTID_OFFSET UNITYSDK_OFFSET(0x1D3DDB20)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_SUBTRAITACTIVATEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x1D3DF0D0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_TEAMREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1D3D9CF0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_TRAITPROJECTION_OFFSET UNITYSDK_OFFSET(0x1D3DD510)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_TRAITREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1D3D9BA0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_ISLAYERACTIVATED_OFFSET UNITYSDK_OFFSET(0x1D3D3280)
#define RPG_CLIENT_GRIDFIGHTTRAIT_ISTRAITINMODULE_OFFSET UNITYSDK_OFFSET(0x1D3DFA60)
#define RPG_CLIENT_GRIDFIGHTTRAIT_REFRESHSUBTRAITACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0x1D3DFA10)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x1D3D9E40)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SETTRAITLAYERMODIFIER_OFFSET UNITYSDK_OFFSET(0x1D3DFFF0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SET_ACTIVATEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x1D3DF0C0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SET_ACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0x1D3DE490)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SET_BUFFEFFECTS_OFFSET UNITYSDK_OFFSET(0x1D3E0580)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x1D3DEF20)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SET_LAYER_OFFSET UNITYSDK_OFFSET(0x1D3DAE30)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SET_REMARKPARSER_OFFSET UNITYSDK_OFFSET(0x1D3E05A0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SET_SUBTRAITACTIVATEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x1D3DF0E0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_TRACK_OFFSET UNITYSDK_OFFSET(0x1D3DCF80)
#define RPG_CLIENT_GRIDFIGHTTRAIT_UNTRACK_OFFSET UNITYSDK_OFFSET(0x1D3DD0C0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_UPDATELAYER_OFFSET UNITYSDK_OFFSET(0x1D3DAD40)
#define RPG_CLIENT_GRIDFIGHTTRAIT__CANEDIT_OFFSET UNITYSDK_OFFSET(0x1D3DD250)
#define RPG_CLIENT_GRIDFIGHTTRAIT__CHECKPROJECTIONCONDITION_OFFSET UNITYSDK_OFFSET(0x1D3DC660)
#define RPG_CLIENT_GRIDFIGHTTRAIT__ENUMERATEEFFECTS_OFFSET UNITYSDK_OFFSET(0x1D3DA400)
#define RPG_CLIENT_GRIDFIGHTTRAIT__GETEFFECTS_OFFSET UNITYSDK_OFFSET(0x1D3E04C0)
#define RPG_CLIENT_GRIDFIGHTTRAIT__GET_SPOTLIGHTID_B__47_0_OFFSET UNITYSDK_OFFSET(0x1D3E0660)
#define RPG_CLIENT_GRIDFIGHTTRAIT__INITREMARK_OFFSET UNITYSDK_OFFSET(0x1D3D94A0)
#define RPG_CLIENT_GRIDFIGHTTRAIT__INITTRAIT_OFFSET UNITYSDK_OFFSET(0x1D3D9140)
#define RPG_CLIENT_GRIDFIGHTTRAIT__ISSUBTRAITACTIVE_OFFSET UNITYSDK_OFFSET(0x1D3DCE20)
#define RPG_CLIENT_GRIDFIGHTTRAIT__ONROLECHOOSEPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1D3DF8D0)
#define RPG_CLIENT_GRIDFIGHTTRAIT__REFRESHACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0x1D3DDE40)
#define RPG_CLIENT_GRIDFIGHTTRAIT__REFRESHSUBTRAITACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0x1D3DF480)
#define RPG_CLIENT_GRIDFIGHTTRAIT__UPDATELAYER_OFFSET UNITYSDK_OFFSET(0x1D3D9550)
#define RPG_CLIENT_GRIDFIGHTTRAIT___UPDATELAYER_B__80_0_OFFSET UNITYSDK_OFFSET(0x1D3E06B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrait_TypeDefinitionIndex = 67321;

	class GridFightTrait : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitBuffEffect*>* _BuffEffects_k__BackingField; // 0x18
		::HEBDCPNECAD* _TraitLayerModifier; // 0x20
		::RPG::Client::GridFightTraitLayerConfig* _SubTraitActivatedLayerConfig_k__BackingField; // 0x28
		::RPG::Client::GridFightTraitConfigBase* _Config_k__BackingField; // 0x30
		::RPG::Client::GridFightTraitRemarkParser* _RemarkParser_k__BackingField; // 0x38
		::RPG::Client::GridFightTraitLayerConfig* _ActivatedLayerConfig_k__BackingField; // 0x40
		::JBNOOOMNDEJ* _LayerErrorChecker; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>* _TraitEffects; // 0x50
		::NDPFOOJIAIJ* _DataContext; // 0x58
		::System::UInt32 _ActivatedLayer; // 0x60
		::System::UInt32 _Layer; // 0x64
		::System::Boolean _IsActivated; // 0x68
		::System::Void _ctor(::System::UInt32 a1, ::NDPFOOJIAIJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NDPFOOJIAIJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::GridFightTrait* Create(::System::UInt32 a1, ::NDPFOOJIAIJ* a2)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::System::UInt32, ::NDPFOOJIAIJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightTrait* CreateDummy(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_CREATEDUMMY_OFFSET))(a1);
		}

		::OBDNIEDPENN* get_TraitRepository()
		{
			return ((::OBDNIEDPENN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_TRAITREPOSITORY_OFFSET))(this);
		}

		::HEJJDLPNKMH* get_teamRepository()
		{
			return ((::HEJJDLPNKMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_TEAMREPOSITORY_OFFSET))(this);
		}

		::System::Void SetCollector(::FBFODNFGMKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBFODNFGMKG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_UPDATELAYER_OFFSET))(this);
		}

		::System::Void ApplyLayer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_APPLYLAYER_OFFSET))(this, a1);
		}

		::RPG::Client::IGridFightTraitEffect* GetEffect(::System::UInt32 a1)
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GETEFFECT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLayers()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GETLAYERS_OFFSET))(this);
		}

		::RPG::Client::IGridFightTraitEffect* GetEffect_1(::RPG::GameCore::GridFightTraitEffectType a1)
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GETEFFECT_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGridMember*>* GetMembersOnBoard()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GETMEMBERSONBOARD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* GetShownEffectList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GETSHOWNEFFECTLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEditEffect*>* GetEditEffectList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEditEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GETEDITEFFECTLIST_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* GetCurrentSubTraitConfig()
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GETCURRENTSUBTRAITCONFIG_OFFSET))(this);
		}

		::System::Void Edit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_EDIT_OFFSET))(this);
		}

		::System::Void _InitTrait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__INITTRAIT_OFFSET))(this);
		}

		::System::Boolean _CheckProjectionCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__CHECKPROJECTIONCONDITION_OFFSET))(this);
		}

		::System::Boolean _IsSubTraitActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__ISSUBTRAITACTIVE_OFFSET))(this);
		}

		::System::Void _InitRemark()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__INITREMARK_OFFSET))(this);
		}

		::System::Void Track()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_TRACK_OFFSET))(this);
		}

		::System::Void Untrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_UNTRACK_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* get_AllMembers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ALLMEMBERS_OFFSET))(this);
		}

		::System::Boolean get_CanEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANEDIT_OFFSET))(this);
		}

		::System::Boolean get_CanSummon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANSUMMON_OFFSET))(this);
		}

		::RPG::Client::GridFightProjection* get_TraitProjection()
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_TRAITPROJECTION_OFFSET))(this);
		}

		::System::Boolean get_CanShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANSHOW_OFFSET))(this);
		}

		::System::Boolean get_CanEffectSlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANEFFECTSLOT_OFFSET))(this);
		}

		::System::Boolean get_IsSubTraitActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISSUBTRAITACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsTracked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISTRACKED_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_SpotLightID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_SPOTLIGHTID_OFFSET))(this);
		}

		::System::Boolean get_IsSpotLightTrait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISSPOTLIGHTTRAIT_OFFSET))(this);
		}

		::System::UInt32 get_Layer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_LAYER_OFFSET))(this);
		}

		::System::Void set_Layer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SET_LAYER_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivatedLayer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ACTIVATEDLAYER_OFFSET))(this);
		}

		::System::Void set_ActivatedLayer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SET_ACTIVATEDLAYER_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightTrailLayerQuality get_Quality()
		{
			return ((::RPG::GameCore::GridFightTrailLayerQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_QUALITY_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitAstropolisInfo* get_AstropolisInfo()
		{
			return ((::RPG::Client::GridFightTraitAstropolisInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ASTROPOLISINFO_OFFSET))(this);
		}

		::System::Boolean get_IsAstropolis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISASTROPOLIS_OFFSET))(this);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISACTIVATED_OFFSET))(this);
		}

		::System::Void set_IsActivated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SET_ISACTIVATED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCurLayerError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISCURLAYERERROR_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitConfigBase* get_Config()
		{
			return ((::RPG::Client::GridFightTraitConfigBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_CONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitLayerConfig* get_ActivatedLayerConfig()
		{
			return ((::RPG::Client::GridFightTraitLayerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ACTIVATEDLAYERCONFIG_OFFSET))(this);
		}

		::System::Void set_ActivatedLayerConfig(::RPG::Client::GridFightTraitLayerConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitLayerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SET_ACTIVATEDLAYERCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitLayerConfig* get_SubTraitActivatedLayerConfig()
		{
			return ((::RPG::Client::GridFightTraitLayerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_SUBTRAITACTIVATEDLAYERCONFIG_OFFSET))(this);
		}

		::System::Void set_SubTraitActivatedLayerConfig(::RPG::Client::GridFightTraitLayerConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitLayerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SET_SUBTRAITACTIVATEDLAYERCONFIG_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_COMPARETO_OFFSET))(this, a1);
		}

		::System::Boolean IsLayerActivated(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_ISLAYERACTIVATED_OFFSET))(this, a1);
		}

		::System::Void _UpdateLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__UPDATELAYER_OFFSET))(this);
		}

		::System::Void _RefreshActivatedLayer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__REFRESHACTIVATEDLAYER_OFFSET))(this, a1);
		}

		::System::Void _OnRoleChoosePropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__ONROLECHOOSEPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshSubTraitActivatedLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_REFRESHSUBTRAITACTIVATEDLAYER_OFFSET))(this);
		}

		::System::Void _RefreshSubTraitActivatedLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__REFRESHSUBTRAITACTIVATEDLAYER_OFFSET))(this);
		}

		::System::Boolean IsTraitInModule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_ISTRAITINMODULE_OFFSET))(this);
		}

		::System::UInt32 GetTraitModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GETTRAITMODULEID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* GetTraitBonusEquips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GETTRAITBONUSEQUIPS_OFFSET))(this);
		}

		::System::Void SetTraitLayerModifier(::HEBDCPNECAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEBDCPNECAD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SETTRAITLAYERMODIFIER_OFFSET))(this, a1);
		}

		::System::Boolean _CanEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__CANEDIT_OFFSET))(this);
		}

		::System::Boolean CanEditInPreparationState(::RPG::Client::PlayerPreparationState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayerPreparationState))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_CANEDITINPREPARATIONSTATE_OFFSET))(this, a1);
		}

		::System::String* GetEditIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GETEDITICON_OFFSET))(this);
		}

		::RPG::Client::GridFightTrait_EffectEnumerable _EnumerateEffects()
		{
			return ((::RPG::Client::GridFightTrait_EffectEnumerable(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__ENUMERATEEFFECTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitEffect*>* _GetEffects()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__GETEFFECTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitEffect*>* get_Effects()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_EFFECTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitBuffEffect*>* get_BuffEffects()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitBuffEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_BUFFEFFECTS_OFFSET))(this);
		}

		::System::Void set_BuffEffects(::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitBuffEffect*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitBuffEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SET_BUFFEFFECTS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitRemarkParser* get_RemarkParser()
		{
			return ((::RPG::Client::GridFightTraitRemarkParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_REMARKPARSER_OFFSET))(this);
		}

		::System::Void set_RemarkParser(::RPG::Client::GridFightTraitRemarkParser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitRemarkParser*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SET_REMARKPARSER_OFFSET))(this, a1);
		}

		::NDPFOOJIAIJ* get_DataContext()
		{
			return ((::NDPFOOJIAIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_DATACONTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsBattleTrait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISBATTLETRAIT_OFFSET))(this);
		}

		::System::Boolean get_IsPreparationTrait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISPREPARATIONTRAIT_OFFSET))(this);
		}

		::System::Boolean _get_SpotLightID_b__47_0(::RPG::Client::GridFightUnlockTraitMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightUnlockTraitMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__GET_SPOTLIGHTID_B__47_0_OFFSET))(this, a1);
		}

		::System::Int32 __UpdateLayer_b__80_0(::AEHFALNJDKC* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::AEHFALNJDKC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___UPDATELAYER_B__80_0_OFFSET))(this, a1);
		}

	};
}
