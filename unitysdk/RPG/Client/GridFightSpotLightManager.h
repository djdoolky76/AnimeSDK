#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFNHMOGNJGJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/ValueTuple_2.h"
class ACNDKIFJLJC;
class BMHEAGKIILO;
class CEGNNCDOEPL;
class CPOHGANENDF;
class EMOGKOKPCAC;
class FFECECBAEEH;
class FMBACDOFCAL;
class GNOBLNOCEHA;
class OGEIHMPCFKA;
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightModifierInfo; }
namespace RPG::Client { class GridFightMoonGameSpotLightTraitEffect; }
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::Client { class GridFightSpotLightBinding; }
namespace RPG::Client { class GridFightSpotLightConfig; }
namespace RPG::Client { class GridFightSpotLightSelectAction; }
namespace RPG::Client { class GridFightSpotLightTrack; }
namespace RPG::Client { class GridFightSpotLightTrackGroup; }
namespace RPG::Client { class GridFightSpotLightTrackHit; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_ADDORUPDATE_OFFSET UNITYSDK_OFFSET(0xDC88510)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_BINDMODIFIER_OFFSET UNITYSDK_OFFSET(0xDC87020)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_BUILDBINDINGS_OFFSET UNITYSDK_OFFSET(0xDC74E60)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_CANADDTRACK_OFFSET UNITYSDK_OFFSET(0xDC833D0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_CANCELTRACK_1_OFFSET UNITYSDK_OFFSET(0xDC84E70)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_CANCELTRACK_OFFSET UNITYSDK_OFFSET(0xDC84DC0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC8D010)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xDC8CED0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETACTIVESPOTLIGHTBINDINGBYROLEID_OFFSET UNITYSDK_OFFSET(0xDC88AD0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETACTIVESPOTLIGHTCONFIGBYROLEID_OFFSET UNITYSDK_OFFSET(0xDC88890)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETAHAMAXSTAROPTIONDESC_OFFSET UNITYSDK_OFFSET(0xDC8A540)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETAHAMAXSTAROPTIONICONPATH_OFFSET UNITYSDK_OFFSET(0xDC8A650)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETAHAMAXSTAROPTIONNAME_OFFSET UNITYSDK_OFFSET(0xDC8A480)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETBINDINGSFORCHANGEDIALOG_OFFSET UNITYSDK_OFFSET(0xDC8B970)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETBINDINGS_OFFSET UNITYSDK_OFFSET(0xDC8BA80)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETENEMYDIFFSPOTLIGHTCONFIGS_OFFSET UNITYSDK_OFFSET(0xDC8C850)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETEXTRADESCTEXT_1_OFFSET UNITYSDK_OFFSET(0xDC88E90)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETEXTRADESCTEXT_OFFSET UNITYSDK_OFFSET(0xDC88E30)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETMOONGAMEBINDING_OFFSET UNITYSDK_OFFSET(0xDC8C4A0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETMOONGAMESHOWMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0xDC8B610)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETSPOTLIGHTTRACKHIT_OFFSET UNITYSDK_OFFSET(0xDC83EC0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETSPOTLIGHTUNLOCKNODE_OFFSET UNITYSDK_OFFSET(0xDC8A6F0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETTRACK_OFFSET UNITYSDK_OFFSET(0xDC832E0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_FREEREFRESHCNTTOTAL_OFFSET UNITYSDK_OFFSET(0xDC820E0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_FREEREFRESHCNTUSED_OFFSET UNITYSDK_OFFSET(0xDC820C0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_HASMOONGAMESPOTLIGHTEFFECT_OFFSET UNITYSDK_OFFSET(0xDC8ADC0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_HASRETURNPREPARATION_OFFSET UNITYSDK_OFFSET(0xDC82480)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_HASSELECTION_OFFSET UNITYSDK_OFFSET(0xDC823B0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_INFECTEDROLEUIDS_OFFSET UNITYSDK_OFFSET(0xDC82120)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_ISMOONGAMEGOLDORHIGHERACTIVATED_OFFSET UNITYSDK_OFFSET(0xDC8B440)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_ISMOONGAMESPOTLIGHTACTIVEFROMSERVER_OFFSET UNITYSDK_OFFSET(0xDC8B210)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_ISMOONGAMESPOTLIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0xDC8B270)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_ISSELECTIONPAUSED_OFFSET UNITYSDK_OFFSET(0xDC82400)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_ISTRACKFULL_OFFSET UNITYSDK_OFFSET(0xDC821A0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xDC82100)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_MOONGAMESPOTLIGHTID_OFFSET UNITYSDK_OFFSET(0xDC8AFB0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_MOONGAMESPOTLIGHTROLEID_OFFSET UNITYSDK_OFFSET(0xDC8B1B0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_MOONGAMETRAITICONPATH_OFFSET UNITYSDK_OFFSET(0xDC8B6C0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_REPLACECNTREMAIN_OFFSET UNITYSDK_OFFSET(0xDC8AD70)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_REPLACECNTTOTAL_OFFSET UNITYSDK_OFFSET(0xDC820A0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_REPLACECNTUSED_OFFSET UNITYSDK_OFFSET(0xDC82080)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_SELECTION_OFFSET UNITYSDK_OFFSET(0xDC82260)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_SHOULDDEFERMOONGAMEGOLDICONSHOW_OFFSET UNITYSDK_OFFSET(0xDC8B4A0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_TRACKS_OFFSET UNITYSDK_OFFSET(0xDC82160)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_HASSPOTLIGHTBYUID_OFFSET UNITYSDK_OFFSET(0xDC88700)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_HASSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xDC7F010)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_ISINSPOTLIGHTDISPLAYBYROLEID_OFFSET UNITYSDK_OFFSET(0xDC88840)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_ISINSPOTLIGHTDISPLAY_OFFSET UNITYSDK_OFFSET(0xDC887F0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_ISMOONGAMESPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xDC8B880)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_ISROLEINFECTED_OFFSET UNITYSDK_OFFSET(0xDC82200)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_ISTRACKED_1_OFFSET UNITYSDK_OFFSET(0xDC83920)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_ISTRACKED_OFFSET UNITYSDK_OFFSET(0xDC83470)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_PULLPENDINGMOONGAMEGOLDENHANCEUIDS_OFFSET UNITYSDK_OFFSET(0xDC8B500)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_REMOVE_OFFSET UNITYSDK_OFFSET(0xDC88650)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SET_FREEREFRESHCNTTOTAL_OFFSET UNITYSDK_OFFSET(0xDC820F0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SET_FREEREFRESHCNTUSED_OFFSET UNITYSDK_OFFSET(0xDC820D0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SET_HASRETURNPREPARATION_OFFSET UNITYSDK_OFFSET(0xDC82490)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0xDC82110)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SET_REPLACECNTTOTAL_OFFSET UNITYSDK_OFFSET(0xDC820B0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SET_REPLACECNTUSED_OFFSET UNITYSDK_OFFSET(0xDC82090)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SHOULDSHOWTRAITLAYERBUFFMARKONBOARD_OFFSET UNITYSDK_OFFSET(0xDC8A1A0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SHOULDSHOWTRAITLAYERBUFFMARK_OFFSET UNITYSDK_OFFSET(0xDC89B20)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SYNCFORCEREMOVED_OFFSET UNITYSDK_OFFSET(0xDC82FA0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SYNCFREEREFRESHCNT_OFFSET UNITYSDK_OFFSET(0xDC86F50)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SYNCGUIDETRACKS_OFFSET UNITYSDK_OFFSET(0xDC84FF0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SYNCMOONGAMEGOLDENHANCESHOW_OFFSET UNITYSDK_OFFSET(0xDC8B5B0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SYNCREPLACECNT_OFFSET UNITYSDK_OFFSET(0xDC86EE0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SYNCRETURNPREPARATION_OFFSET UNITYSDK_OFFSET(0xDC86FC0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SYNCTRACKS_OFFSET UNITYSDK_OFFSET(0xDC82F30)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0xDC824A0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_TRACK_1_OFFSET UNITYSDK_OFFSET(0xDC84D40)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_TRACK_OFFSET UNITYSDK_OFFSET(0xDC84530)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__CLONEGROUPS_OFFSET UNITYSDK_OFFSET(0xDC84A30)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__CREATEROLETRACKUPDATE_OFFSET UNITYSDK_OFFSET(0xDC86870)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__FILLREMARKPARAMS_OFFSET UNITYSDK_OFFSET(0xDC899D0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__GETBINDINGSFORCHANGEDIALOG_B__114_0_OFFSET UNITYSDK_OFFSET(0xDC8D0A0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__GETMOONGAMESPOTLIGHTEFFECT_OFFSET UNITYSDK_OFFSET(0xDC8B010)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__ISBOUNDROLEONBOARD_OFFSET UNITYSDK_OFFSET(0xDC89F90)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__NOTIFYDATACHANGEDWHENPREPREADY_OFFSET UNITYSDK_OFFSET(0xDC882E0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__ONMODIFIERCHANGED_OFFSET UNITYSDK_OFFSET(0xDC88230)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__REBUILDINFECTEDROLEUIDS_OFFSET UNITYSDK_OFFSET(0xDC87230)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__REPLACEFIRSTPARAM_OFFSET UNITYSDK_OFFSET(0xDC89930)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__SENDROLETRACKUPDATE_OFFSET UNITYSDK_OFFSET(0xDC84BF0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__SYNCTRACKS_OFFSET UNITYSDK_OFFSET(0xDC82A10)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__TRYCOLLECTENEMYDIFFSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xDC8CCC0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__TRYGETLOCKSTARUPFIRSTPARAM_OFFSET UNITYSDK_OFFSET(0xDC896E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightManager_TypeDefinitionIndex = 66962;

	class GridFightSpotLightManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ACNDKIFJLJC*>* _SpotLightsByUniqueId; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _ForceRemovedSpotLightIDs; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightTrack*>* _Tracks; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _InfectedRoleUIDs; // 0x28
		::RPG::Client::GridFightModifierInfo* _BoundModifier; // 0x30
		::System::UInt32 _FreeRefreshCntTotal_k__BackingField; // 0x38
		::System::UInt32 _FreeRefreshCntUsed_k__BackingField; // 0x3C
		::System::Boolean _IsValid_k__BackingField; // 0x40
		::System::Boolean _HasReturnPreparation_k__BackingField; // 0x41
		::System::Byte _padding0[0x2];
		::System::UInt32 _ReplaceCntUsed_k__BackingField; // 0x44
		::System::UInt32 _ReplaceCntTotal_k__BackingField; // 0x48
		static ::System::Text::RegularExpressions::Regex** StaticGet__RemarkParamRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("RPG.Client", "GridFightSpotLightManager")->GetStaticField(0xE960);
		}

		// static const ::System::Object MaxTrackCount; // 0x0
		// static const ::System::Object _SpecialSpotLightID; // 0x0
		// static const ::System::Object _LockStarUpSpotLightID; // 0x0
		// static const ::System::String* _ExtraTipTextIDWithRole; // 0x0
		// static const ::System::String* _ExtraTipTextIDNoRole; // 0x0
		// static const ::System::String* _ExtraTipParamTextID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_CCTOR_OFFSET))();
		}

		::System::UInt32 get_ReplaceCntUsed()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_REPLACECNTUSED_OFFSET))(this);
		}

		::System::Void set_ReplaceCntUsed(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SET_REPLACECNTUSED_OFFSET))(this, a1);
		}

		::System::UInt32 get_ReplaceCntTotal()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_REPLACECNTTOTAL_OFFSET))(this);
		}

		::System::Void set_ReplaceCntTotal(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SET_REPLACECNTTOTAL_OFFSET))(this, a1);
		}

		::System::UInt32 get_FreeRefreshCntUsed()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_FREEREFRESHCNTUSED_OFFSET))(this);
		}

		::System::Void set_FreeRefreshCntUsed(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SET_FREEREFRESHCNTUSED_OFFSET))(this, a1);
		}

		::System::UInt32 get_FreeRefreshCntTotal()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_FREEREFRESHCNTTOTAL_OFFSET))(this);
		}

		::System::Void set_FreeRefreshCntTotal(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SET_FREEREFRESHCNTTOTAL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SET_ISVALID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>* get_InfectedRoleUIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_INFECTEDROLEUIDS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::GridFightSpotLightTrack*>* get_Tracks()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::GridFightSpotLightTrack*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_TRACKS_OFFSET))(this);
		}

		::System::Boolean get_IsTrackFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_ISTRACKFULL_OFFSET))(this);
		}

		::System::Boolean IsRoleInfected(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_ISROLEINFECTED_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSpotLightSelectAction* get_Selection()
		{
			return ((::RPG::Client::GridFightSpotLightSelectAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_SELECTION_OFFSET))(this);
		}

		::System::Boolean get_HasSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_HASSELECTION_OFFSET))(this);
		}

		::System::Boolean get_IsSelectionPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_ISSELECTIONPAUSED_OFFSET))(this);
		}

		::System::Boolean get_HasReturnPreparation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_HASRETURNPREPARATION_OFFSET))(this);
		}

		::System::Void set_HasReturnPreparation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SET_HASRETURNPREPARATION_OFFSET))(this, a1);
		}

		::System::Void Sync(::GNOBLNOCEHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNOBLNOCEHA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncTracks(::FFECECBAEEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFECECBAEEH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SYNCTRACKS_OFFSET))(this, a1);
		}

		::System::Void SyncForceRemoved(::CEGNNCDOEPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEGNNCDOEPL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SYNCFORCEREMOVED_OFFSET))(this, a1);
		}

		::System::Void _SyncTracks(::System::Collections::Generic::IEnumerable_1<::OGEIHMPCFKA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::OGEIHMPCFKA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__SYNCTRACKS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSpotLightTrack* GetTrack(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightSpotLightTrack*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETTRACK_OFFSET))(this, a1);
		}

		::System::Boolean CanAddTrack(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_CANADDTRACK_OFFSET))(this, a1);
		}

		::System::Boolean IsTracked(::System::UInt32 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_ISTRACKED_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsTracked_1(::System::UInt32 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::DFNHMOGNJGJ a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::DFNHMOGNJGJ))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_ISTRACKED_1_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::GridFightSpotLightTrackHit* GetSpotLightTrackHit(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightSpotLightTrackHit*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETSPOTLIGHTTRACKHIT_OFFSET))(this, a1);
		}

		::System::Void Track(::System::UInt32 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::DFNHMOGNJGJ a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::DFNHMOGNJGJ))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_TRACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Track_1(::System::UInt32 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::DFNHMOGNJGJ a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::DFNHMOGNJGJ, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_TRACK_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CancelTrack(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_CANCELTRACK_OFFSET))(this, a1);
		}

		::System::Void CancelTrack_1(::System::UInt32 a1, ::DFNHMOGNJGJ a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::DFNHMOGNJGJ))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_CANCELTRACK_1_OFFSET))(this, a1, a2);
		}

		::System::Void SyncGuideTracks(::System::Collections::Generic::IReadOnlyList_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SYNCGUIDETRACKS_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightTrackGroup*>* _CloneGroups(::RPG::Client::GridFightSpotLightTrack* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightTrackGroup*>*(*)(::RPG::Client::GridFightSpotLightTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__CLONEGROUPS_OFFSET))(a1);
		}

		static ::System::Void _SendRoleTrackUpdate(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightSpotLightTrackGroup*>* a2, ::System::Boolean a3, ::DFNHMOGNJGJ a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightSpotLightTrackGroup*>*, ::System::Boolean, ::DFNHMOGNJGJ, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__SENDROLETRACKUPDATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::BMHEAGKIILO* _CreateRoleTrackUpdate(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightSpotLightTrackGroup*>* a2, ::System::Boolean a3, ::System::UInt32 a4)
		{
			return ((::BMHEAGKIILO*(*)(::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightSpotLightTrackGroup*>*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__CREATEROLETRACKUPDATE_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void SyncReplaceCnt(::EMOGKOKPCAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMOGKOKPCAC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SYNCREPLACECNT_OFFSET))(this, a1);
		}

		::System::Void SyncFreeRefreshCnt(::CPOHGANENDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPOHGANENDF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SYNCFREEREFRESHCNT_OFFSET))(this, a1);
		}

		::System::Void SyncReturnPreparation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SYNCRETURNPREPARATION_OFFSET))(this, a1);
		}

		::System::Void BindModifier(::RPG::Client::GridFightModifierInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightModifierInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_BINDMODIFIER_OFFSET))(this, a1);
		}

		::System::Void _OnModifierChanged(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__ONMODIFIERCHANGED_OFFSET))(this, a1);
		}

		::System::Void _RebuildInfectedRoleUIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__REBUILDINFECTEDROLEUIDS_OFFSET))(this);
		}

		::System::Void _NotifyDataChangedWhenPrepReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__NOTIFYDATACHANGEDWHENPREPREADY_OFFSET))(this);
		}

		::System::Void AddOrUpdate(::FMBACDOFCAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMBACDOFCAL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_ADDORUPDATE_OFFSET))(this, a1);
		}

		::System::Void Remove(::FMBACDOFCAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMBACDOFCAL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_REMOVE_OFFSET))(this, a1);
		}

		::System::Boolean HasSpotLight(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_HASSPOTLIGHT_OFFSET))(this, a1);
		}

		::System::Boolean HasSpotLightByUID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_HASSPOTLIGHTBYUID_OFFSET))(this, a1);
		}

		::System::Boolean IsInSpotLightDisplay(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_ISINSPOTLIGHTDISPLAY_OFFSET))(this, a1);
		}

		::System::Boolean IsInSpotLightDisplayByRoleId(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_ISINSPOTLIGHTDISPLAYBYROLEID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSpotLightConfig* GetActiveSpotLightConfigByRoleId(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightSpotLightConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETACTIVESPOTLIGHTCONFIGBYROLEID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSpotLightBinding* GetActiveSpotLightBindingByRoleId(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightSpotLightBinding*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETACTIVESPOTLIGHTBINDINGBYROLEID_OFFSET))(this, a1);
		}

		::System::String* GetExtraDescText(::System::UInt32 a1, ::RPG::Client::GridFightRoleConfig* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightRoleConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETEXTRADESCTEXT_OFFSET))(this, a1, a2);
		}

		::System::String* GetExtraDescText_1(::System::UInt32 a1, ::RPG::Client::GridFightRoleConfig* a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightRoleConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETEXTRADESCTEXT_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean _TryGetLockStarUpFirstParam(::System::Boolean a1, ::RPG::Client::GridFightRoleConfig* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::RPG::Client::GridFightRoleConfig*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__TRYGETLOCKSTARUPFIRSTPARAM_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::RPG::GameCore::FixPoint>* _ReplaceFirstParam(::Il2CppArray<::RPG::GameCore::FixPoint>* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__REPLACEFIRSTPARAM_OFFSET))(a1, a2);
		}

		::System::Boolean ShouldShowTraitLayerBuffMark(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SHOULDSHOWTRAITLAYERBUFFMARK_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ShouldShowTraitLayerBuffMarkOnBoard(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SHOULDSHOWTRAITLAYERBUFFMARKONBOARD_OFFSET))(this, a1);
		}

		static ::System::Boolean _IsBoundRoleOnBoard(::ACNDKIFJLJC* a1)
		{
			return ((::System::Boolean(*)(::ACNDKIFJLJC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__ISBOUNDROLEONBOARD_OFFSET))(a1);
		}

		::System::String* GetAhaMaxStarOptionName(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETAHAMAXSTAROPTIONNAME_OFFSET))(this, a1);
		}

		::System::String* GetAhaMaxStarOptionDesc(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETAHAMAXSTAROPTIONDESC_OFFSET))(this, a1);
		}

		::System::String* GetAhaMaxStarOptionIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETAHAMAXSTAROPTIONICONPATH_OFFSET))(this, a1);
		}

		static ::System::String* _FillRemarkParams(::System::String* a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__FILLREMARKPARAMS_OFFSET))(a1, a2);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> GetSpotLightUnlockNode(::System::Int32 a1)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETSPOTLIGHTUNLOCKNODE_OFFSET))(this, a1);
		}

		::System::Int32 get_ReplaceCntRemain()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_REPLACECNTREMAIN_OFFSET))(this);
		}

		::System::Boolean get_HasMoonGameSpotLightEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_HASMOONGAMESPOTLIGHTEFFECT_OFFSET))(this);
		}

		::System::UInt32 get_MoonGameSpotLightId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_MOONGAMESPOTLIGHTID_OFFSET))(this);
		}

		::System::UInt32 get_MoonGameSpotLightRoleId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_MOONGAMESPOTLIGHTROLEID_OFFSET))(this);
		}

		::System::Boolean get_IsMoonGameSpotLightActiveFromServer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_ISMOONGAMESPOTLIGHTACTIVEFROMSERVER_OFFSET))(this);
		}

		::System::Boolean get_IsMoonGameSpotLightActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_ISMOONGAMESPOTLIGHTACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsMoonGameGoldOrHigherActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_ISMOONGAMEGOLDORHIGHERACTIVATED_OFFSET))(this);
		}

		::System::Boolean get_ShouldDeferMoonGameGoldIconShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_SHOULDDEFERMOONGAMEGOLDICONSHOW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* PullPendingMoonGameGoldEnhanceUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_PULLPENDINGMOONGAMEGOLDENHANCEUIDS_OFFSET))(this);
		}

		::System::Void SyncMoonGameGoldEnhanceShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_SYNCMOONGAMEGOLDENHANCESHOW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetMoonGameShowMemberUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETMOONGAMESHOWMEMBERUIDS_OFFSET))(this);
		}

		::System::String* get_MoonGameTraitIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GET_MOONGAMETRAITICONPATH_OFFSET))(this);
		}

		::System::Boolean IsMoonGameSpotLight(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_ISMOONGAMESPOTLIGHT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightBinding*>* GetBindingsForChangeDialog()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightBinding*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETBINDINGSFORCHANGEDIALOG_OFFSET))(this);
		}

		::RPG::Client::GridFightSpotLightBinding* GetMoonGameBinding()
		{
			return ((::RPG::Client::GridFightSpotLightBinding*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETMOONGAMEBINDING_OFFSET))(this);
		}

		::RPG::Client::GridFightMoonGameSpotLightTraitEffect* _GetMoonGameSpotLightEffect()
		{
			return ((::RPG::Client::GridFightMoonGameSpotLightTraitEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__GETMOONGAMESPOTLIGHTEFFECT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightBinding*>* GetBindings()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightBinding*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETBINDINGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* GetEnemyDiffSpotLightConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_GETENEMYDIFFSPOTLIGHTCONFIGS_OFFSET))(this);
		}

		static ::System::Void _TryCollectEnemyDiffSpotLight(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightSpotLightConfig*>* a1, ::RPG::Client::GridFightSpotLightConfig* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightSpotLightConfig*>*, ::RPG::Client::GridFightSpotLightConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__TRYCOLLECTENEMYDIFFSPOTLIGHT_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightBinding*>* BuildBindings(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightBinding*>*(*)(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER_BUILDBINDINGS_OFFSET))(a1);
		}

		::System::Boolean _GetBindingsForChangeDialog_b__114_0(::RPG::Client::GridFightSpotLightBinding* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSpotLightBinding*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER__GETBINDINGSFORCHANGEDIALOG_B__114_0_OFFSET))(this, a1);
		}

	};
}
