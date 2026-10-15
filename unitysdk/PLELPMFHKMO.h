#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/IACMAMNKKNA.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BNIEAMHOKJE;
class CBEBICGIOAB;
class GGJFAFONDHN;
class IEJMFJKDEHJ;
class KHKMCPLEEEB;
class KLEFGGIHGMI;
class PFJNGFLBJFO;
class SceneLightVolume;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define PLELPMFHKMO_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xC2F2960)
#define PLELPMFHKMO_ADEAMFBKGOC_OFFSET UNITYSDK_OFFSET(0xC2F2A20)
#define PLELPMFHKMO_AFIBPJJEAPJ_OFFSET UNITYSDK_OFFSET(0xC2F6990)
#define PLELPMFHKMO_AIEFPGLIJLF_OFFSET UNITYSDK_OFFSET(0xC2F7150)
#define PLELPMFHKMO_ANMKDBKMAFP_OFFSET UNITYSDK_OFFSET(0xC2F6E10)
#define PLELPMFHKMO_BAACDBNNFCI_OFFSET UNITYSDK_OFFSET(0xC2F4D70)
#define PLELPMFHKMO_BDEJBBALMHE_OFFSET UNITYSDK_OFFSET(0xC2F2A70)
#define PLELPMFHKMO_BGJILFOOLFC_OFFSET UNITYSDK_OFFSET(0xC2F4470)
#define PLELPMFHKMO_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xC2F29D0)
#define PLELPMFHKMO_BMIBDFJCCBE_OFFSET UNITYSDK_OFFSET(0xC2F5070)
#define PLELPMFHKMO_CCCMOCIELFO_1_OFFSET UNITYSDK_OFFSET(0xC2F4030)
#define PLELPMFHKMO_CCCMOCIELFO_OFFSET UNITYSDK_OFFSET(0xC2F6390)
#define PLELPMFHKMO_CCTOR_OFFSET UNITYSDK_OFFSET(0xC2F7C90)
#define PLELPMFHKMO_CEBOBIFBHPD_OFFSET UNITYSDK_OFFSET(0xC2F7740)
#define PLELPMFHKMO_CEGJBEDIJPC_OFFSET UNITYSDK_OFFSET(0xC2F0DD0)
#define PLELPMFHKMO_CFBCEGBIDKK_OFFSET UNITYSDK_OFFSET(0xC2F0A20)
#define PLELPMFHKMO_CFCPAIBHKKA_OFFSET UNITYSDK_OFFSET(0xC2F3DC0)
#define PLELPMFHKMO_CFKCNIGCEGG_OFFSET UNITYSDK_OFFSET(0xC2F1EB0)
#define PLELPMFHKMO_CIHPLPCKIKI_OFFSET UNITYSDK_OFFSET(0xC2F49C0)
#define PLELPMFHKMO_CLMBJABNGFP_OFFSET UNITYSDK_OFFSET(0xC2F0F60)
#define PLELPMFHKMO_CNFCGEKIFLO_OFFSET UNITYSDK_OFFSET(0xC2F6760)
#define PLELPMFHKMO_CTOR_OFFSET UNITYSDK_OFFSET(0xC2F7A90)
#define PLELPMFHKMO_DKKMGHJHJMB_OFFSET UNITYSDK_OFFSET(0xC2F12D0)
#define PLELPMFHKMO_EDFJNHAMKBL_OFFSET UNITYSDK_OFFSET(0xC2F4CA0)
#define PLELPMFHKMO_EPNKLHCHFIH_OFFSET UNITYSDK_OFFSET(0xC2F0BF0)
#define PLELPMFHKMO_FGJFCJPJEEA_OFFSET UNITYSDK_OFFSET(0xC2F4AE0)
#define PLELPMFHKMO_GBCLIKHMJMK_OFFSET UNITYSDK_OFFSET(0xC2F7400)
#define PLELPMFHKMO_GCFOCKMBMIB_OFFSET UNITYSDK_OFFSET(0xC2F4EB0)
#define PLELPMFHKMO_GDCACEKKGIH_OFFSET UNITYSDK_OFFSET(0xC2F6CC0)
#define PLELPMFHKMO_GDDDDIBBAHA_OFFSET UNITYSDK_OFFSET(0xC2F4F10)
#define PLELPMFHKMO_GKEFEEOBDCC_OFFSET UNITYSDK_OFFSET(0xC2F53E0)
#define PLELPMFHKMO_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xC2F1480)
#define PLELPMFHKMO_HGNDDFPBPIB_OFFSET UNITYSDK_OFFSET(0xC2F5C60)
#define PLELPMFHKMO_HINCJIOHFBN_OFFSET UNITYSDK_OFFSET(0xC2F5980)
#define PLELPMFHKMO_HMEEDGIBIPL_OFFSET UNITYSDK_OFFSET(0xC2F20A0)
#define PLELPMFHKMO_HPBIPJAJODH_OFFSET UNITYSDK_OFFSET(0xC2F3BE0)
#define PLELPMFHKMO_IAIOMCDAACK_OFFSET UNITYSDK_OFFSET(0xC2F0E20)
#define PLELPMFHKMO_JFDGMDPCMPF_OFFSET UNITYSDK_OFFSET(0xC2F4E00)
#define PLELPMFHKMO_JFICOPGLCKM_OFFSET UNITYSDK_OFFSET(0xC2F5B80)
#define PLELPMFHKMO_KBJFEKIHCAD_OFFSET UNITYSDK_OFFSET(0xC2F1F80)
#define PLELPMFHKMO_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC2F0950)
#define PLELPMFHKMO_KKLPNOJMJHM_OFFSET UNITYSDK_OFFSET(0xC2F5270)
#define PLELPMFHKMO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC2F08B0)
#define PLELPMFHKMO_MOPJODHBGII_OFFSET UNITYSDK_OFFSET(0xC2F52C0)
#define PLELPMFHKMO_NFEMAFFNHBH_OFFSET UNITYSDK_OFFSET(0xC2F26A0)
#define PLELPMFHKMO_NIMNLCIFMLK_OFFSET UNITYSDK_OFFSET(0xC2F15D0)
#define PLELPMFHKMO_NKINAAPKLFP_OFFSET UNITYSDK_OFFSET(0xC2F6F80)
#define PLELPMFHKMO_NKPOBPANIJK_OFFSET UNITYSDK_OFFSET(0xC2F67D0)
#define PLELPMFHKMO_OAFAJDPAFBL_OFFSET UNITYSDK_OFFSET(0xC2F6D70)
#define PLELPMFHKMO_OAMMDDEGAJP_OFFSET UNITYSDK_OFFSET(0xC2F79F0)
#define PLELPMFHKMO_ODPCOAJLFNK_OFFSET UNITYSDK_OFFSET(0xC2F7570)
#define PLELPMFHKMO_OHCGOAJDNHM_OFFSET UNITYSDK_OFFSET(0xC2F5AD0)
#define PLELPMFHKMO_PADKKJJMKCF_OFFSET UNITYSDK_OFFSET(0xC2F68F0)
#define PLELPMFHKMO_PFMBEHKMHDK_OFFSET UNITYSDK_OFFSET(0xC2F4F60)
#define PLELPMFHKMO_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xC2F2910)
#define PLELPMFHKMO__POSTINIT_B__18_0_OFFSET UNITYSDK_OFFSET(0xC2F7CB0)

	class PLELPMFHKMO : public ::IACMAMNKKNA
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::OpenWorld::StreamingLightEnum>* GIEIFFBEMNJ; // 0x58
		::System::String* KOHANCMONNH; // 0x60
		::SceneLightVolume* JPAMGGPJHDP; // 0x68
		::System::Collections::Generic::Dictionary_2<::KLEFGGIHGMI*, ::IEJMFJKDEHJ*>* KHBHLGJHKCK; // 0x70
		::System::String* KLPDBPEAAEH; // 0x78
		::SceneLightVolume* JIEONDOOMAI; // 0x80
		::System::Collections::Generic::List_1<::SceneLightVolume*>* NMJIEIECGCK; // 0x88
		::System::Collections::Generic::List_1<::SceneLightVolume*>* IHOPPHFNIIK; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::IEJMFJKDEHJ*>* NFOFGBCOBIJ; // 0x98
		::PFJNGFLBJFO* IKOAGBCFBPH; // 0xA0
		::System::Int32 NJNJNPCJJPJ; // 0xA8
		::System::Int32 DGMKHFMIIKO; // 0xAC
		::UnityEngine::Vector3 PLABHCGLBEL; // 0xB0
		::System::Single KPBKELABLHL; // 0xBC
		::System::Int32 KPOKOMBBMCN; // 0xC0
		::EnviromentSystemV2Space::OutputType PEHBMDOKHDC; // 0xC4
		::System::Boolean ALJAOCAEAMO; // 0xC8
		::System::Boolean EFLMJPONJOE; // 0xC9
		::System::Boolean FJOMKALOKNC; // 0xCA
		::System::Boolean CMAKJFGCOAH; // 0xCB
		static ::System::String** StaticGet_PCNOLEDHJCB()
		{
			return (::System::String**)UnitySDK::FromName("", "PLELPMFHKMO")->GetStaticField(0x6FDC0);
		}

		// static const ::System::Object OBACFOEINGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLELPMFHKMO_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void EPNKLHCHFIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_EPNKLHCHFIH_OFFSET))(this);
		}

		::System::Void CEGJBEDIJPC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PLELPMFHKMO_CEGJBEDIJPC_OFFSET))(this, a1);
		}

		::System::Void IAIOMCDAACK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_IAIOMCDAACK_OFFSET))(this);
		}

		::System::Void DKKMGHJHJMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_DKKMGHJHJMB_OFFSET))(this);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLELPMFHKMO_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void NFEMAFFNHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_NFEMAFFNHBH_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + PLELPMFHKMO_PKADDEPKJFN_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PLELPMFHKMO_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void CFBCEGBIDKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_CFBCEGBIDKK_OFFSET))(this);
		}

		::System::Void ADEAMFBKGOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_ADEAMFBKGOC_OFFSET))(this);
		}

		::System::Void BDEJBBALMHE(::System::Boolean a1, ::System::Boolean a2, ::EnviromentSystemV2Space::OutputType a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::EnviromentSystemV2Space::OutputType, ::System::Single))((::PBYTE)hIl2Cpp + PLELPMFHKMO_BDEJBBALMHE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BGJILFOOLFC(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PLELPMFHKMO_BGJILFOOLFC_OFFSET))(this, a1, a2);
		}

		::System::Void CFCPAIBHKKA(::KHKMCPLEEEB* a1, ::EnviromentSystemV2Space::OutputType a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::KHKMCPLEEEB*, ::EnviromentSystemV2Space::OutputType, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + PLELPMFHKMO_CFCPAIBHKKA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CIHPLPCKIKI(::KHKMCPLEEEB* a1, ::EnviromentSystemV2Space::OutputType a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::KHKMCPLEEEB*, ::EnviromentSystemV2Space::OutputType, ::System::Single))((::PBYTE)hIl2Cpp + PLELPMFHKMO_CIHPLPCKIKI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FGJFCJPJEEA(::EnviromentSystemV2Space::OutputType a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::System::Single))((::PBYTE)hIl2Cpp + PLELPMFHKMO_FGJFCJPJEEA_OFFSET))(this, a1, a2);
		}

		::System::Void CLMBJABNGFP(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + PLELPMFHKMO_CLMBJABNGFP_OFFSET))(this, a1);
		}

		::System::Void EDFJNHAMKBL(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + PLELPMFHKMO_EDFJNHAMKBL_OFFSET))(this, a1);
		}

		::SceneLightVolume* BAACDBNNFCI()
		{
			return ((::SceneLightVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_BAACDBNNFCI_OFFSET))(this);
		}

		::System::Void JFDGMDPCMPF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PLELPMFHKMO_JFDGMDPCMPF_OFFSET))(this, a1);
		}

		::System::Void GCFOCKMBMIB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PLELPMFHKMO_GCFOCKMBMIB_OFFSET))(this, a1);
		}

		::System::Void GDDDDIBBAHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_GDDDDIBBAHA_OFFSET))(this);
		}

		::System::Void PFMBEHKMHDK(::EnviromentSystemV2Space::OutputType a1, ::CBEBICGIOAB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::CBEBICGIOAB*))((::PBYTE)hIl2Cpp + PLELPMFHKMO_PFMBEHKMHDK_OFFSET))(this, a1, a2);
		}

		::System::Void BMIBDFJCCBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_BMIBDFJCCBE_OFFSET))(this);
		}

		::System::Void KKLPNOJMJHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_KKLPNOJMJHM_OFFSET))(this);
		}

		::System::Void MOPJODHBGII(::EnviromentSystemV2Space::OutputType a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::System::Single))((::PBYTE)hIl2Cpp + PLELPMFHKMO_MOPJODHBGII_OFFSET))(this, a1, a2);
		}

		::System::Void HINCJIOHFBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_HINCJIOHFBN_OFFSET))(this);
		}

		::System::Void CFKCNIGCEGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_CFKCNIGCEGG_OFFSET))(this);
		}

		::System::Void KBJFEKIHCAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_KBJFEKIHCAD_OFFSET))(this);
		}

		::System::Void HMEEDGIBIPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_HMEEDGIBIPL_OFFSET))(this);
		}

		::System::Void JFICOPGLCKM(::BNIEAMHOKJE* a1, ::RPG::Client::OpenWorld::StreamingLightEnum a2)
		{
			return ((::System::Void(*)(::PVOID, ::BNIEAMHOKJE*, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + PLELPMFHKMO_JFICOPGLCKM_OFFSET))(this, a1, a2);
		}

		::System::Boolean HGNDDFPBPIB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PLELPMFHKMO_HGNDDFPBPIB_OFFSET))(this, a1);
		}

		::System::Void HPBIPJAJODH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_HPBIPJAJODH_OFFSET))(this);
		}

		::System::Void CNFCGEKIFLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_CNFCGEKIFLO_OFFSET))(this);
		}

		::System::Void OHCGOAJDNHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_OHCGOAJDNHM_OFFSET))(this);
		}

		::System::Void NKPOBPANIJK(::SceneLightVolume* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SceneLightVolume*))((::PBYTE)hIl2Cpp + PLELPMFHKMO_NKPOBPANIJK_OFFSET))(this, a1);
		}

		::System::Void PADKKJJMKCF(::SceneLightVolume* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SceneLightVolume*))((::PBYTE)hIl2Cpp + PLELPMFHKMO_PADKKJJMKCF_OFFSET))(this, a1);
		}

		::System::Void NIMNLCIFMLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_NIMNLCIFMLK_OFFSET))(this);
		}

		::SceneLightVolume* AFIBPJJEAPJ(::UnityEngine::Vector3 a1)
		{
			return ((::SceneLightVolume*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PLELPMFHKMO_AFIBPJJEAPJ_OFFSET))(this, a1);
		}

		::SceneLightVolume* CCCMOCIELFO(::UnityEngine::Vector3 a1)
		{
			return ((::SceneLightVolume*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PLELPMFHKMO_CCCMOCIELFO_OFFSET))(this, a1);
		}

		::SceneLightVolume* CCCMOCIELFO_1(::System::Boolean a1)
		{
			return ((::SceneLightVolume*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PLELPMFHKMO_CCCMOCIELFO_1_OFFSET))(this, a1);
		}

		::System::Void GKEFEEOBDCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_GKEFEEOBDCC_OFFSET))(this);
		}

		::System::Void GDCACEKKGIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLELPMFHKMO_GDCACEKKGIH_OFFSET))(this);
		}

		::RPG::Client::OpenWorld::StreamingLightEnum OAFAJDPAFBL(::UnityEngine::Vector3 a1, ::System::String* a2)
		{
			return ((::RPG::Client::OpenWorld::StreamingLightEnum(*)(::PVOID, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + PLELPMFHKMO_OAFAJDPAFBL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Light* ANMKDBKMAFP(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PLELPMFHKMO_ANMKDBKMAFP_OFFSET))(this, a1);
		}

		::UnityEngine::Light* NKINAAPKLFP(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PLELPMFHKMO_NKINAAPKLFP_OFFSET))(this, a1);
		}

		::UnityEngine::Light* GBCLIKHMJMK(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PLELPMFHKMO_GBCLIKHMJMK_OFFSET))(this, a1);
		}

		::UnityEngine::Light* ODPCOAJLFNK(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PLELPMFHKMO_ODPCOAJLFNK_OFFSET))(this, a1);
		}

		::UnityEngine::Light* AIEFPGLIJLF(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PLELPMFHKMO_AIEFPGLIJLF_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Light* CEBOBIFBHPD(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PLELPMFHKMO_CEBOBIFBHPD_OFFSET))(this, a1, a2);
		}

		::System::Void OAMMDDEGAJP(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PLELPMFHKMO_OAMMDDEGAJP_OFFSET))(this, a1, a2);
		}

		::System::Void _PostInit_b__18_0(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + PLELPMFHKMO__POSTINIT_B__18_0_OFFSET))(this, a1);
		}

	};
