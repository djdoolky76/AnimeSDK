#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavSpaceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AFOIEAJDJLG;
class FFCGHKGDAJF;
class HKENHAIMOCH;
class IFGCDEEKCCD;
class INBJBBGLCKJ;
class IOEPMPAKMOK;
class JHGAJMAOPJE;
class NNPMENNGJLH;
namespace RPG::Client { class FiveDimManager; }
namespace RPG::Client::NavMap { class ITrackPointInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFGCDEEKCCD_ACEFJKFNCAJ_OFFSET UNITYSDK_OFFSET(0x1BC0E6E0)
#define IFGCDEEKCCD_AEALEMOPPKE_OFFSET UNITYSDK_OFFSET(0x1BC0F720)
#define IFGCDEEKCCD_APIPLEOCGOO_OFFSET UNITYSDK_OFFSET(0x1BC0F5F0)
#define IFGCDEEKCCD_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x1BC0DF70)
#define IFGCDEEKCCD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1BC0D910)
#define IFGCDEEKCCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC0FA80)
#define IFGCDEEKCCD_COCIHHDHCFH_OFFSET UNITYSDK_OFFSET(0x1BC0F060)
#define IFGCDEEKCCD_CPNMDAMNJEG_OFFSET UNITYSDK_OFFSET(0x1BC0DFB0)
#define IFGCDEEKCCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC0DA10)
#define IFGCDEEKCCD_DDPKNKONKEH_OFFSET UNITYSDK_OFFSET(0x1BC0D3E0)
#define IFGCDEEKCCD_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x1BC0DAA0)
#define IFGCDEEKCCD_DJILAOAENKK_OFFSET UNITYSDK_OFFSET(0x1BC0E9C0)
#define IFGCDEEKCCD_DOEBNEJONIE_OFFSET UNITYSDK_OFFSET(0x1BC0E880)
#define IFGCDEEKCCD_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0x1BC0D640)
#define IFGCDEEKCCD_GAFDLKHKJDP_OFFSET UNITYSDK_OFFSET(0x1BC0DF20)
#define IFGCDEEKCCD_GET_ENTRANCEWEIGHT_OFFSET UNITYSDK_OFFSET(0x1BC0D8F0)
#define IFGCDEEKCCD_GET_TELEPORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x1BC0D8D0)
#define IFGCDEEKCCD_IPHJODJLPNA_OFFSET UNITYSDK_OFFSET(0x1BC0F380)
#define IFGCDEEKCCD_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1BC0D740)
#define IFGCDEEKCCD_JJPNDBNCCJE_OFFSET UNITYSDK_OFFSET(0x1BC0F8D0)
#define IFGCDEEKCCD_JOJIAPOBDDO_OFFSET UNITYSDK_OFFSET(0x1BC0DD20)
#define IFGCDEEKCCD_LKEOGGHMOND_OFFSET UNITYSDK_OFFSET(0x1BC0E270)
#define IFGCDEEKCCD_MAOEOBHMHIN_OFFSET UNITYSDK_OFFSET(0x1BC0D6A0)
#define IFGCDEEKCCD_ODEEJLMPCJE_OFFSET UNITYSDK_OFFSET(0x1BC0DB20)
#define IFGCDEEKCCD_ODKMMAHDDIK_OFFSET UNITYSDK_OFFSET(0x1BC0E0A0)
#define IFGCDEEKCCD_SET_ENTRANCEWEIGHT_OFFSET UNITYSDK_OFFSET(0x1BC0D900)
#define IFGCDEEKCCD_SET_TELEPORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x1BC0D8E0)

inline static constexpr unsigned int IFGCDEEKCCD_TypeDefinitionIndex = 76708;

	class IFGCDEEKCCD : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AFOIEAJDJLG*>* IHLBAMHPGFG; // 0x10
		::FFCGHKGDAJF* DCOPELFHOLO; // 0x18
		::System::Single _EntranceWeight_k__BackingField; // 0x20
		::System::Single _TeleportWeight_k__BackingField; // 0x24
		static ::System::Single* StaticGet_IHGAIAIMNKC()
		{
			return (::System::Single*)UnitySDK::FromName("", "IFGCDEEKCCD")->GetStaticField(0xE4A0);
		}

		static ::UnityEngine::Vector3* StaticGet_OCIONMJLCJO()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("", "IFGCDEEKCCD")->GetStaticField(0xE4A4);
		}

		static ::System::Single* StaticGet_BNNBJBMCFAB()
		{
			return (::System::Single*)UnitySDK::FromName("", "IFGCDEEKCCD")->GetStaticField(0xE4B0);
		}

		// static const ::System::Object AMADBCEHKFI; // 0x0
		// static const ::System::Object FMMPGDNNFFO; // 0x0
		// static const ::System::Object HBPNLLLLLNB; // 0x0
		::System::Void _ctor(::FFCGHKGDAJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFCGHKGDAJF*))((::PBYTE)hIl2Cpp + IFGCDEEKCCD_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFGCDEEKCCD_CCTOR_OFFSET))();
		}

		static ::RPG::Client::FiveDimManager* DDPKNKONKEH()
		{
			return ((::RPG::Client::FiveDimManager*(*)())((::PBYTE)hIl2Cpp + IFGCDEEKCCD_DDPKNKONKEH_OFFSET))();
		}

		::HKENHAIMOCH* FMHKLHAKMKO()
		{
			return ((::HKENHAIMOCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGCDEEKCCD_FMHKLHAKMKO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::JHGAJMAOPJE*>* MAOEOBHMHIN()
		{
			return ((::System::Collections::Generic::List_1<::JHGAJMAOPJE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGCDEEKCCD_MAOEOBHMHIN_OFFSET))(this);
		}

		::RPG::Client::NavMap::NavSpaceType JBIOGKPHKKC()
		{
			return ((::RPG::Client::NavMap::NavSpaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGCDEEKCCD_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Single get_TeleportWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGCDEEKCCD_GET_TELEPORTWEIGHT_OFFSET))(this);
		}

		::System::Void set_TeleportWeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFGCDEEKCCD_SET_TELEPORTWEIGHT_OFFSET))(this, a1);
		}

		::System::Single get_EntranceWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGCDEEKCCD_GET_ENTRANCEWEIGHT_OFFSET))(this);
		}

		::System::Void set_EntranceWeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFGCDEEKCCD_SET_ENTRANCEWEIGHT_OFFSET))(this, a1);
		}

		static ::IFGCDEEKCCD* BPLPBPMEODA(::FFCGHKGDAJF* a1)
		{
			return ((::IFGCDEEKCCD*(*)(::FFCGHKGDAJF*))((::PBYTE)hIl2Cpp + IFGCDEEKCCD_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGCDEEKCCD_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGCDEEKCCD_BJMNKLGEMPM_OFFSET))(this);
		}

		static ::System::Boolean CPNMDAMNJEG()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IFGCDEEKCCD_CPNMDAMNJEG_OFFSET))();
		}

		static ::UnityEngine::Vector3 ODKMMAHDDIK()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + IFGCDEEKCCD_ODKMMAHDDIK_OFFSET))();
		}

		static ::System::Boolean LKEOGGHMOND()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IFGCDEEKCCD_LKEOGGHMOND_OFFSET))();
		}

		static ::System::Void ACEFJKFNCAJ()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFGCDEEKCCD_ACEFJKFNCAJ_OFFSET))();
		}

		static ::RPG::Client::NavMap::ITrackPointInfo* DOEBNEJONIE(::FFCGHKGDAJF* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::NavMap::ITrackPointInfo*(*)(::FFCGHKGDAJF*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IFGCDEEKCCD_DOEBNEJONIE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DJILAOAENKK(::NNPMENNGJLH* a1)
		{
			return ((::System::Void(*)(::NNPMENNGJLH*))((::PBYTE)hIl2Cpp + IFGCDEEKCCD_DJILAOAENKK_OFFSET))(a1);
		}

		::System::Boolean COCIHHDHCFH(::INBJBBGLCKJ* a1, ::IOEPMPAKMOK* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::INBJBBGLCKJ*, ::IOEPMPAKMOK*))((::PBYTE)hIl2Cpp + IFGCDEEKCCD_COCIHHDHCFH_OFFSET))(this, a1, a2);
		}

		::AFOIEAJDJLG* IPHJODJLPNA(::System::UInt32 a1)
		{
			return ((::AFOIEAJDJLG*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFGCDEEKCCD_IPHJODJLPNA_OFFSET))(this, a1);
		}

		::AFOIEAJDJLG* APIPLEOCGOO(::System::UInt32 a1)
		{
			return ((::AFOIEAJDJLG*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFGCDEEKCCD_APIPLEOCGOO_OFFSET))(this, a1);
		}

		::System::Void ODEEJLMPCJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGCDEEKCCD_ODEEJLMPCJE_OFFSET))(this);
		}

		::System::Void JOJIAPOBDDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGCDEEKCCD_JOJIAPOBDDO_OFFSET))(this);
		}

		::System::Void GAFDLKHKJDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGCDEEKCCD_GAFDLKHKJDP_OFFSET))(this);
		}

		::System::Void AEALEMOPPKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGCDEEKCCD_AEALEMOPPKE_OFFSET))(this);
		}

		::System::Void JJPNDBNCCJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGCDEEKCCD_JJPNDBNCCJE_OFFSET))(this);
		}

	};
