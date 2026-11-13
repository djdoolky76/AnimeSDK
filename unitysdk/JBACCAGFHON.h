#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceGameState.h"
class AFLHEGNAGAB;
class BFHCIFFJNIA;
class BOBJFFPMFDB;
class CFCBKPOGNHF;
class COLPFPLJGEB;
class CPMPDLEPIKP;
class DICKPDFNEHP;
class ECPGBDINBAB;
class EGDAOGCDJBB;
class FDPALAEIHPB;
class FMOEFNOMPOG;
class GBHADOLNLHE;
class GCHGOOJFCFP;
class GGNCONNFMHM;
class HHOJMPHDOAK;
class HOBAKOLBNMI;
class JBACCAGFHON;
class JEIFBCPKIDA;
class KIIMBJDNGLG;
class KMIDLAEIFEA;
class LGHPKEAODPH;
class MIMCAGPCALM;
class MKAEECGEMME;
class NAJCEIHIIIP;
class PAIKIFFPMNH;
namespace RPG::Client { class CakeRaceModule; }
namespace RPG::Client::CakeRace { class CakeRaceGameplayContext; }
namespace System { class Action; }
namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JBACCAGFHON_ADD_ONALLSERVICESCREATED_OFFSET UNITYSDK_OFFSET(0x19A5F4A0)
#define JBACCAGFHON_ADD_ONGAMEPLAYCONTEXTSET_OFFSET UNITYSDK_OFFSET(0x19A5F580)
#define JBACCAGFHON_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x19A5FAF0)
#define JBACCAGFHON_CTOR_OFFSET UNITYSDK_OFFSET(0x19A5FBC0)
#define JBACCAGFHON_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19A60860)
#define JBACCAGFHON_DOGIEJMCING_OFFSET UNITYSDK_OFFSET(0x19A5F7F0)
#define JBACCAGFHON_ECHIBEEFJEC_OFFSET UNITYSDK_OFFSET(0x19A5F680)
#define JBACCAGFHON_GET_CAMERACONTROLSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F8B0)
#define JBACCAGFHON_GET_CATPROVIDERSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F930)
#define JBACCAGFHON_GET_CATVIEWSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F9F0)
#define JBACCAGFHON_GET_CELLPROVIDERSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F910)
#define JBACCAGFHON_GET_CONFIGSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F850)
#define JBACCAGFHON_GET_EFFECTSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5FA50)
#define JBACCAGFHON_GET_FIELDEVENTSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F950)
#define JBACCAGFHON_GET_FIELDPROVIDERSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F8D0)
#define JBACCAGFHON_GET_FIELDTIMESERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F870)
#define JBACCAGFHON_GET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x19A5F660)
#define JBACCAGFHON_GET_GAMEPLAYCONTEXT_OFFSET UNITYSDK_OFFSET(0x19A5F720)
#define JBACCAGFHON_GET_GAMESTATE_OFFSET UNITYSDK_OFFSET(0x19A5FAD0)
#define JBACCAGFHON_GET_INDICATORSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5FA90)
#define JBACCAGFHON_GET_MESSAGESERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F970)
#define JBACCAGFHON_GET_PROPSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F9D0)
#define JBACCAGFHON_GET_REGIONPROVIDERSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F8F0)
#define JBACCAGFHON_GET_REPLAYSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5FA10)
#define JBACCAGFHON_GET_SDKREPORTSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5FAB0)
#define JBACCAGFHON_GET_SECTIONPROVIDERSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F9B0)
#define JBACCAGFHON_GET_SECTIONVIEWSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F990)
#define JBACCAGFHON_GET_TRIGGEREVENTSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5FA30)
#define JBACCAGFHON_GET_TUTORIALSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5FA70)
#define JBACCAGFHON_GET_VIEWSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F890)
#define JBACCAGFHON_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0x19A5F800)
#define JBACCAGFHON_IEKDCIMBKPJ_OFFSET UNITYSDK_OFFSET(0x19A605D0)
#define JBACCAGFHON_NDONHLCPJDB_OFFSET UNITYSDK_OFFSET(0x19A609B0)
#define JBACCAGFHON_OANOHBFAOMN_OFFSET UNITYSDK_OFFSET(0x19A5F740)
#define JBACCAGFHON_PNKGCIPEJGD_OFFSET UNITYSDK_OFFSET(0x19A5FC20)
#define JBACCAGFHON_REMOVE_ONALLSERVICESCREATED_OFFSET UNITYSDK_OFFSET(0x19A5F510)
#define JBACCAGFHON_REMOVE_ONGAMEPLAYCONTEXTSET_OFFSET UNITYSDK_OFFSET(0x19A5F5F0)
#define JBACCAGFHON_SET_CAMERACONTROLSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F8C0)
#define JBACCAGFHON_SET_CATPROVIDERSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F940)
#define JBACCAGFHON_SET_CATVIEWSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5FA00)
#define JBACCAGFHON_SET_CELLPROVIDERSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F920)
#define JBACCAGFHON_SET_CONFIGSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F860)
#define JBACCAGFHON_SET_EFFECTSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5FA60)
#define JBACCAGFHON_SET_FIELDEVENTSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F960)
#define JBACCAGFHON_SET_FIELDPROVIDERSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F8E0)
#define JBACCAGFHON_SET_FIELDTIMESERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F880)
#define JBACCAGFHON_SET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x19A5F670)
#define JBACCAGFHON_SET_GAMEPLAYCONTEXT_OFFSET UNITYSDK_OFFSET(0x19A5F730)
#define JBACCAGFHON_SET_GAMESTATE_OFFSET UNITYSDK_OFFSET(0x19A5FAE0)
#define JBACCAGFHON_SET_INDICATORSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5FAA0)
#define JBACCAGFHON_SET_MESSAGESERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F980)
#define JBACCAGFHON_SET_PROPSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F9E0)
#define JBACCAGFHON_SET_REGIONPROVIDERSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F900)
#define JBACCAGFHON_SET_REPLAYSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5FA20)
#define JBACCAGFHON_SET_SDKREPORTSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5FAC0)
#define JBACCAGFHON_SET_SECTIONPROVIDERSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F9C0)
#define JBACCAGFHON_SET_SECTIONVIEWSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F9A0)
#define JBACCAGFHON_SET_TRIGGEREVENTSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5FA40)
#define JBACCAGFHON_SET_TUTORIALSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5FA80)
#define JBACCAGFHON_SET_VIEWSERVICE_OFFSET UNITYSDK_OFFSET(0x19A5F8A0)
#define JBACCAGFHON___CREATESERVICES_B__108_0_OFFSET UNITYSDK_OFFSET(0x19A60B40)

inline static constexpr unsigned int JBACCAGFHON_TypeDefinitionIndex = 80742;

	class JBACCAGFHON
	{
	public:
		::System::Action* OnAllServicesCreated; // 0x90
		::GGNCONNFMHM* _FieldTimeService_k__BackingField; // 0x98
		::MKAEECGEMME* _FieldProviderService_k__BackingField; // 0xA0
		::KMIDLAEIFEA* _GameInstance_k__BackingField; // 0xA8
		::NAJCEIHIIIP* _IndicatorService_k__BackingField; // 0xB0
		::BOBJFFPMFDB* _CatViewService_k__BackingField; // 0xB8
		::PAIKIFFPMNH* _FieldEventService_k__BackingField; // 0xC0
		::FMOEFNOMPOG* _EffectService_k__BackingField; // 0xC8
		::JEIFBCPKIDA* _MessageService_k__BackingField; // 0xD0
		::System::Collections::Generic::List_1<::System::IDisposable*>* LCIIJAKKKIL; // 0xD8
		::CFCBKPOGNHF* _PropService_k__BackingField; // 0xE0
		::HHOJMPHDOAK* _SDKReportService_k__BackingField; // 0xE8
		::EGDAOGCDJBB* _TutorialService_k__BackingField; // 0xF0
		::GBHADOLNLHE* _ReplayService_k__BackingField; // 0xF8
		::BFHCIFFJNIA* _ViewService_k__BackingField; // 0x100
		::System::Action* OnGameplayContextSet; // 0x108
		::DICKPDFNEHP* _TriggerEventService_k__BackingField; // 0x110
		::RPG::Client::CakeRace::CakeRaceGameplayContext* _GameplayContext_k__BackingField; // 0x118
		::CPMPDLEPIKP* _CatProviderService_k__BackingField; // 0x120
		::MIMCAGPCALM* _SectionViewService_k__BackingField; // 0x128
		::AFLHEGNAGAB* _ConfigService_k__BackingField; // 0x130
		::GCHGOOJFCFP* _SectionProviderService_k__BackingField; // 0x138
		::HOBAKOLBNMI* _CellProviderService_k__BackingField; // 0x140
		::ECPGBDINBAB* _CameraControlService_k__BackingField; // 0x148
		::KIIMBJDNGLG* _RegionProviderService_k__BackingField; // 0x150
		::RPG::Client::LittleGame::CakeRace::CakeRaceGameState _GameState_k__BackingField; // 0x158
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_CTOR_OFFSET))(this);
		}

		::System::Void add_OnAllServicesCreated(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JBACCAGFHON_ADD_ONALLSERVICESCREATED_OFFSET))(this, a1);
		}

		::System::Void remove_OnAllServicesCreated(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JBACCAGFHON_REMOVE_ONALLSERVICESCREATED_OFFSET))(this, a1);
		}

		::System::Void add_OnGameplayContextSet(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JBACCAGFHON_ADD_ONGAMEPLAYCONTEXTSET_OFFSET))(this, a1);
		}

		::System::Void remove_OnGameplayContextSet(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JBACCAGFHON_REMOVE_ONGAMEPLAYCONTEXTSET_OFFSET))(this, a1);
		}

		::KMIDLAEIFEA* get_GameInstance()
		{
			return ((::KMIDLAEIFEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_GAMEINSTANCE_OFFSET))(this);
		}

		::System::Void set_GameInstance(::KMIDLAEIFEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMIDLAEIFEA*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_GAMEINSTANCE_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceModule* ECHIBEEFJEC()
		{
			return ((::RPG::Client::CakeRaceModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_ECHIBEEFJEC_OFFSET))(this);
		}

		::RPG::Client::CakeRace::CakeRaceGameplayContext* get_GameplayContext()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameplayContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_GAMEPLAYCONTEXT_OFFSET))(this);
		}

		::System::Void set_GameplayContext(::RPG::Client::CakeRace::CakeRaceGameplayContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceGameplayContext*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_GAMEPLAYCONTEXT_OFFSET))(this, a1);
		}

		::COLPFPLJGEB* OANOHBFAOMN()
		{
			return ((::COLPFPLJGEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_OANOHBFAOMN_OFFSET))(this);
		}

		::FDPALAEIHPB* DOGIEJMCING()
		{
			return ((::FDPALAEIHPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_DOGIEJMCING_OFFSET))(this);
		}

		::LGHPKEAODPH* GHDIJCNKKOM()
		{
			return ((::LGHPKEAODPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GHDIJCNKKOM_OFFSET))(this);
		}

		::AFLHEGNAGAB* get_ConfigService()
		{
			return ((::AFLHEGNAGAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_CONFIGSERVICE_OFFSET))(this);
		}

		::System::Void set_ConfigService(::AFLHEGNAGAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFLHEGNAGAB*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_CONFIGSERVICE_OFFSET))(this, a1);
		}

		::GGNCONNFMHM* get_FieldTimeService()
		{
			return ((::GGNCONNFMHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_FIELDTIMESERVICE_OFFSET))(this);
		}

		::System::Void set_FieldTimeService(::GGNCONNFMHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGNCONNFMHM*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_FIELDTIMESERVICE_OFFSET))(this, a1);
		}

		::BFHCIFFJNIA* get_ViewService()
		{
			return ((::BFHCIFFJNIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_VIEWSERVICE_OFFSET))(this);
		}

		::System::Void set_ViewService(::BFHCIFFJNIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFHCIFFJNIA*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_VIEWSERVICE_OFFSET))(this, a1);
		}

		::ECPGBDINBAB* get_CameraControlService()
		{
			return ((::ECPGBDINBAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_CAMERACONTROLSERVICE_OFFSET))(this);
		}

		::System::Void set_CameraControlService(::ECPGBDINBAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECPGBDINBAB*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_CAMERACONTROLSERVICE_OFFSET))(this, a1);
		}

		::MKAEECGEMME* get_FieldProviderService()
		{
			return ((::MKAEECGEMME*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_FIELDPROVIDERSERVICE_OFFSET))(this);
		}

		::System::Void set_FieldProviderService(::MKAEECGEMME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKAEECGEMME*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_FIELDPROVIDERSERVICE_OFFSET))(this, a1);
		}

		::KIIMBJDNGLG* get_RegionProviderService()
		{
			return ((::KIIMBJDNGLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_REGIONPROVIDERSERVICE_OFFSET))(this);
		}

		::System::Void set_RegionProviderService(::KIIMBJDNGLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIIMBJDNGLG*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_REGIONPROVIDERSERVICE_OFFSET))(this, a1);
		}

		::HOBAKOLBNMI* get_CellProviderService()
		{
			return ((::HOBAKOLBNMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_CELLPROVIDERSERVICE_OFFSET))(this);
		}

		::System::Void set_CellProviderService(::HOBAKOLBNMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOBAKOLBNMI*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_CELLPROVIDERSERVICE_OFFSET))(this, a1);
		}

		::CPMPDLEPIKP* get_CatProviderService()
		{
			return ((::CPMPDLEPIKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_CATPROVIDERSERVICE_OFFSET))(this);
		}

		::System::Void set_CatProviderService(::CPMPDLEPIKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPMPDLEPIKP*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_CATPROVIDERSERVICE_OFFSET))(this, a1);
		}

		::PAIKIFFPMNH* get_FieldEventService()
		{
			return ((::PAIKIFFPMNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_FIELDEVENTSERVICE_OFFSET))(this);
		}

		::System::Void set_FieldEventService(::PAIKIFFPMNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAIKIFFPMNH*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_FIELDEVENTSERVICE_OFFSET))(this, a1);
		}

		::JEIFBCPKIDA* get_MessageService()
		{
			return ((::JEIFBCPKIDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_MESSAGESERVICE_OFFSET))(this);
		}

		::System::Void set_MessageService(::JEIFBCPKIDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEIFBCPKIDA*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_MESSAGESERVICE_OFFSET))(this, a1);
		}

		::MIMCAGPCALM* get_SectionViewService()
		{
			return ((::MIMCAGPCALM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_SECTIONVIEWSERVICE_OFFSET))(this);
		}

		::System::Void set_SectionViewService(::MIMCAGPCALM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIMCAGPCALM*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_SECTIONVIEWSERVICE_OFFSET))(this, a1);
		}

		::GCHGOOJFCFP* get_SectionProviderService()
		{
			return ((::GCHGOOJFCFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_SECTIONPROVIDERSERVICE_OFFSET))(this);
		}

		::System::Void set_SectionProviderService(::GCHGOOJFCFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCHGOOJFCFP*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_SECTIONPROVIDERSERVICE_OFFSET))(this, a1);
		}

		::CFCBKPOGNHF* get_PropService()
		{
			return ((::CFCBKPOGNHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_PROPSERVICE_OFFSET))(this);
		}

		::System::Void set_PropService(::CFCBKPOGNHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFCBKPOGNHF*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_PROPSERVICE_OFFSET))(this, a1);
		}

		::BOBJFFPMFDB* get_CatViewService()
		{
			return ((::BOBJFFPMFDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_CATVIEWSERVICE_OFFSET))(this);
		}

		::System::Void set_CatViewService(::BOBJFFPMFDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOBJFFPMFDB*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_CATVIEWSERVICE_OFFSET))(this, a1);
		}

		::GBHADOLNLHE* get_ReplayService()
		{
			return ((::GBHADOLNLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_REPLAYSERVICE_OFFSET))(this);
		}

		::System::Void set_ReplayService(::GBHADOLNLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBHADOLNLHE*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_REPLAYSERVICE_OFFSET))(this, a1);
		}

		::DICKPDFNEHP* get_TriggerEventService()
		{
			return ((::DICKPDFNEHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_TRIGGEREVENTSERVICE_OFFSET))(this);
		}

		::System::Void set_TriggerEventService(::DICKPDFNEHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DICKPDFNEHP*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_TRIGGEREVENTSERVICE_OFFSET))(this, a1);
		}

		::FMOEFNOMPOG* get_EffectService()
		{
			return ((::FMOEFNOMPOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_EFFECTSERVICE_OFFSET))(this);
		}

		::System::Void set_EffectService(::FMOEFNOMPOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMOEFNOMPOG*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_EFFECTSERVICE_OFFSET))(this, a1);
		}

		::EGDAOGCDJBB* get_TutorialService()
		{
			return ((::EGDAOGCDJBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_TUTORIALSERVICE_OFFSET))(this);
		}

		::System::Void set_TutorialService(::EGDAOGCDJBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGDAOGCDJBB*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_TUTORIALSERVICE_OFFSET))(this, a1);
		}

		::NAJCEIHIIIP* get_IndicatorService()
		{
			return ((::NAJCEIHIIIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_INDICATORSERVICE_OFFSET))(this);
		}

		::System::Void set_IndicatorService(::NAJCEIHIIIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAJCEIHIIIP*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_INDICATORSERVICE_OFFSET))(this, a1);
		}

		::HHOJMPHDOAK* get_SDKReportService()
		{
			return ((::HHOJMPHDOAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_SDKREPORTSERVICE_OFFSET))(this);
		}

		::System::Void set_SDKReportService(::HHOJMPHDOAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHOJMPHDOAK*))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_SDKREPORTSERVICE_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceGameState get_GameState()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceGameState(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_GET_GAMESTATE_OFFSET))(this);
		}

		::System::Void set_GameState(::RPG::Client::LittleGame::CakeRace::CakeRaceGameState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceGameState))((::PBYTE)hIl2Cpp + JBACCAGFHON_SET_GAMESTATE_OFFSET))(this, a1);
		}

		static ::JBACCAGFHON* BPLPBPMEODA(::KMIDLAEIFEA* a1)
		{
			return ((::JBACCAGFHON*(*)(::KMIDLAEIFEA*))((::PBYTE)hIl2Cpp + JBACCAGFHON_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void PNKGCIPEJGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_PNKGCIPEJGD_OFFSET))(this);
		}

		::System::Void IEKDCIMBKPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_IEKDCIMBKPJ_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBACCAGFHON_DISPOSE_OFFSET))(this);
		}

		::System::Void NDONHLCPJDB(::RPG::Client::CakeRace::CakeRaceGameplayContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceGameplayContext*))((::PBYTE)hIl2Cpp + JBACCAGFHON_NDONHLCPJDB_OFFSET))(this, a1);
		}

		::BFHCIFFJNIA* __CreateServices_b__108_0(::JBACCAGFHON* a1)
		{
			return ((::BFHCIFFJNIA*(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + JBACCAGFHON___CREATESERVICES_B__108_0_OFFSET))(this, a1);
		}

	};
