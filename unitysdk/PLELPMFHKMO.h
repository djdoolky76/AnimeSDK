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

#define PLELPMFHKMO_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xC2EAF70)
#define PLELPMFHKMO_ADEAMFBKGOC_OFFSET UNITYSDK_OFFSET(0xC2EB040)
#define PLELPMFHKMO_AFIBPJJEAPJ_OFFSET UNITYSDK_OFFSET(0xC2EEFB0)
#define PLELPMFHKMO_AIEFPGLIJLF_OFFSET UNITYSDK_OFFSET(0xC2EF770)
#define PLELPMFHKMO_ANMKDBKMAFP_OFFSET UNITYSDK_OFFSET(0xC2EF430)
#define PLELPMFHKMO_BAACDBNNFCI_OFFSET UNITYSDK_OFFSET(0xC2ED390)
#define PLELPMFHKMO_BDEJBBALMHE_OFFSET UNITYSDK_OFFSET(0xC2EB090)
#define PLELPMFHKMO_BGJILFOOLFC_OFFSET UNITYSDK_OFFSET(0xC2ECAA0)
#define PLELPMFHKMO_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xC2EAFF0)
#define PLELPMFHKMO_BMIBDFJCCBE_OFFSET UNITYSDK_OFFSET(0xC2ED690)
#define PLELPMFHKMO_CCCMOCIELFO_1_OFFSET UNITYSDK_OFFSET(0xC2EC660)
#define PLELPMFHKMO_CCCMOCIELFO_OFFSET UNITYSDK_OFFSET(0xC2EE9B0)
#define PLELPMFHKMO_CCTOR_OFFSET UNITYSDK_OFFSET(0xC2F02C0)
#define PLELPMFHKMO_CEBOBIFBHPD_OFFSET UNITYSDK_OFFSET(0xC2EFD60)
#define PLELPMFHKMO_CEGJBEDIJPC_OFFSET UNITYSDK_OFFSET(0xC2E9400)
#define PLELPMFHKMO_CFBCEGBIDKK_OFFSET UNITYSDK_OFFSET(0xC2E9050)
#define PLELPMFHKMO_CFCPAIBHKKA_OFFSET UNITYSDK_OFFSET(0xC2EC3F0)
#define PLELPMFHKMO_CFKCNIGCEGG_OFFSET UNITYSDK_OFFSET(0xC2EA4C0)
#define PLELPMFHKMO_CIHPLPCKIKI_OFFSET UNITYSDK_OFFSET(0xC2ECFE0)
#define PLELPMFHKMO_CLMBJABNGFP_OFFSET UNITYSDK_OFFSET(0xC2E9590)
#define PLELPMFHKMO_CNFCGEKIFLO_OFFSET UNITYSDK_OFFSET(0xC2EED80)
#define PLELPMFHKMO_CTOR_OFFSET UNITYSDK_OFFSET(0xC2F00B0)
#define PLELPMFHKMO_DKKMGHJHJMB_OFFSET UNITYSDK_OFFSET(0xC2E9900)
#define PLELPMFHKMO_EDFJNHAMKBL_OFFSET UNITYSDK_OFFSET(0xC2ED2C0)
#define PLELPMFHKMO_EPNKLHCHFIH_OFFSET UNITYSDK_OFFSET(0xC2E9220)
#define PLELPMFHKMO_FGJFCJPJEEA_OFFSET UNITYSDK_OFFSET(0xC2ED100)
#define PLELPMFHKMO_GBCLIKHMJMK_OFFSET UNITYSDK_OFFSET(0xC2EFA20)
#define PLELPMFHKMO_GCFOCKMBMIB_OFFSET UNITYSDK_OFFSET(0xC2ED4D0)
#define PLELPMFHKMO_GDCACEKKGIH_OFFSET UNITYSDK_OFFSET(0xC2EF2E0)
#define PLELPMFHKMO_GDDDDIBBAHA_OFFSET UNITYSDK_OFFSET(0xC2ED530)
#define PLELPMFHKMO_GKEFEEOBDCC_OFFSET UNITYSDK_OFFSET(0xC2EDA00)
#define PLELPMFHKMO_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xC2E9A90)
#define PLELPMFHKMO_HGNDDFPBPIB_OFFSET UNITYSDK_OFFSET(0xC2EE280)
#define PLELPMFHKMO_HINCJIOHFBN_OFFSET UNITYSDK_OFFSET(0xC2EDFA0)
#define PLELPMFHKMO_HMEEDGIBIPL_OFFSET UNITYSDK_OFFSET(0xC2EA6B0)
#define PLELPMFHKMO_HPBIPJAJODH_OFFSET UNITYSDK_OFFSET(0xC2EC210)
#define PLELPMFHKMO_IAIOMCDAACK_OFFSET UNITYSDK_OFFSET(0xC2E9450)
#define PLELPMFHKMO_JFDGMDPCMPF_OFFSET UNITYSDK_OFFSET(0xC2ED420)
#define PLELPMFHKMO_JFICOPGLCKM_OFFSET UNITYSDK_OFFSET(0xC2EE1A0)
#define PLELPMFHKMO_KBJFEKIHCAD_OFFSET UNITYSDK_OFFSET(0xC2EA590)
#define PLELPMFHKMO_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC2E8F70)
#define PLELPMFHKMO_KKLPNOJMJHM_OFFSET UNITYSDK_OFFSET(0xC2ED890)
#define PLELPMFHKMO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC2E8ED0)
#define PLELPMFHKMO_MOPJODHBGII_OFFSET UNITYSDK_OFFSET(0xC2ED8E0)
#define PLELPMFHKMO_NFEMAFFNHBH_OFFSET UNITYSDK_OFFSET(0xC2EACB0)
#define PLELPMFHKMO_NIMNLCIFMLK_OFFSET UNITYSDK_OFFSET(0xC2E9BE0)
#define PLELPMFHKMO_NKINAAPKLFP_OFFSET UNITYSDK_OFFSET(0xC2EF5A0)
#define PLELPMFHKMO_NKPOBPANIJK_OFFSET UNITYSDK_OFFSET(0xC2EEDF0)
#define PLELPMFHKMO_OAFAJDPAFBL_OFFSET UNITYSDK_OFFSET(0xC2EF390)
#define PLELPMFHKMO_OAMMDDEGAJP_OFFSET UNITYSDK_OFFSET(0xC2F0010)
#define PLELPMFHKMO_ODPCOAJLFNK_OFFSET UNITYSDK_OFFSET(0xC2EFB90)
#define PLELPMFHKMO_OHCGOAJDNHM_OFFSET UNITYSDK_OFFSET(0xC2EE0F0)
#define PLELPMFHKMO_PADKKJJMKCF_OFFSET UNITYSDK_OFFSET(0xC2EEF10)
#define PLELPMFHKMO_PFMBEHKMHDK_OFFSET UNITYSDK_OFFSET(0xC2ED580)
#define PLELPMFHKMO_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xC2EAF20)
#define PLELPMFHKMO__POSTINIT_B__18_0_OFFSET UNITYSDK_OFFSET(0xC2F02E0)

inline static constexpr unsigned int PLELPMFHKMO_TypeDefinitionIndex = 49343;

	class PLELPMFHKMO : public ::IACMAMNKKNA
	{
	public:
		::SceneLightVolume* JIEONDOOMAI; // 0x58
		::PFJNGFLBJFO* IKOAGBCFBPH; // 0x60
		::System::String* KLPDBPEAAEH; // 0x68
		::System::Collections::Generic::Dictionary_2<::KLEFGGIHGMI*, ::IEJMFJKDEHJ*>* KHBHLGJHKCK; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::OpenWorld::StreamingLightEnum>* GIEIFFBEMNJ; // 0x78
		::System::String* KOHANCMONNH; // 0x80
		::System::Collections::Generic::List_1<::SceneLightVolume*>* IHOPPHFNIIK; // 0x88
		::System::Collections::Generic::List_1<::SceneLightVolume*>* NMJIEIECGCK; // 0x90
		::SceneLightVolume* JPAMGGPJHDP; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::IEJMFJKDEHJ*>* NFOFGBCOBIJ; // 0xA0
		::System::Single KPBKELABLHL; // 0xA8
		::EnviromentSystemV2Space::OutputType PEHBMDOKHDC; // 0xAC
		::UnityEngine::Vector3 PLABHCGLBEL; // 0xB0
		::System::Boolean CMAKJFGCOAH; // 0xBC
		::System::Boolean EFLMJPONJOE; // 0xBD
		::System::Boolean FJOMKALOKNC; // 0xBE
		::System::Boolean ALJAOCAEAMO; // 0xBF
		::System::Int32 KPOKOMBBMCN; // 0xC0
		::System::Int32 NJNJNPCJJPJ; // 0xC4
		::System::Int32 DGMKHFMIIKO; // 0xC8
		static ::System::String** StaticGet_PCNOLEDHJCB()
		{
			return (::System::String**)UnitySDK::FromName("", "PLELPMFHKMO")->GetStaticField(0x70010);
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
