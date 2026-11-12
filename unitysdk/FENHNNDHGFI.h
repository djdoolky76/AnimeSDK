#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDILEMALGNC.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AJDAJPHJBME;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class Freelook3rdModuleConfig; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class ZoomModuleConfig; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define FENHNNDHGFI_BAECPDKPNIF_OFFSET UNITYSDK_OFFSET(0x16643E50)
#define FENHNNDHGFI_BFIAMMHMBII_OFFSET UNITYSDK_OFFSET(0x16645DE0)
#define FENHNNDHGFI_CCIMLGABCDG_OFFSET UNITYSDK_OFFSET(0x16645C40)
#define FENHNNDHGFI_CGOIKMGOLIK_OFFSET UNITYSDK_OFFSET(0x16643B80)
#define FENHNNDHGFI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x16643130)
#define FENHNNDHGFI_CTOR_OFFSET UNITYSDK_OFFSET(0x16643120)
#define FENHNNDHGFI_ELNGDKIBBIK_OFFSET UNITYSDK_OFFSET(0x16645CC0)
#define FENHNNDHGFI_ENLIIIBNBGH_OFFSET UNITYSDK_OFFSET(0x16645220)
#define FENHNNDHGFI_FCALPECKHFK_OFFSET UNITYSDK_OFFSET(0x16645D80)
#define FENHNNDHGFI_GJCPBBACOAF_OFFSET UNITYSDK_OFFSET(0x16645B60)
#define FENHNNDHGFI_IHPALPLIHNG_OFFSET UNITYSDK_OFFSET(0x16645E70)
#define FENHNNDHGFI_KDPCFABNIKJ_OFFSET UNITYSDK_OFFSET(0x16643DD0)
#define FENHNNDHGFI_KFOPKEFOHFE_OFFSET UNITYSDK_OFFSET(0x16643660)
#define FENHNNDHGFI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16643290)
#define FENHNNDHGFI_MOFBKKICOJG_OFFSET UNITYSDK_OFFSET(0x16645990)
#define FENHNNDHGFI_NBNGLAJOCMN_OFFSET UNITYSDK_OFFSET(0x16643F80)
#define FENHNNDHGFI_NCAAPNAKLCA_OFFSET UNITYSDK_OFFSET(0x16645D20)
#define FENHNNDHGFI_NEBAOBGPAAM_OFFSET UNITYSDK_OFFSET(0x16643AA0)
#define FENHNNDHGFI_NGBPFIDOELG_OFFSET UNITYSDK_OFFSET(0x16645AC0)
#define FENHNNDHGFI_NHEDINBLOIH_OFFSET UNITYSDK_OFFSET(0x16643400)
#define FENHNNDHGFI_NNKGGHEPLCD_OFFSET UNITYSDK_OFFSET(0x16643C20)
#define FENHNNDHGFI_OBDCOKFPANJ_OFFSET UNITYSDK_OFFSET(0x16645450)
#define FENHNNDHGFI_OEAAMLFOCIP_OFFSET UNITYSDK_OFFSET(0x16645BD0)
#define FENHNNDHGFI_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x166435C0)
#define FENHNNDHGFI_PLJHHJFAOFA_OFFSET UNITYSDK_OFFSET(0x166461A0)

inline static constexpr unsigned int FENHNNDHGFI_TypeDefinitionIndex = 71613;

	class FENHNNDHGFI : public ::MDILEMALGNC
	{
	public:
		::RPG::Client::ZoomModuleConfig* OECNIGBFPLI; // 0x38
		::UnityEngine::Camera* COOFAPDHOPF; // 0x40
		::AJDAJPHJBME* JIEEKFLBLAC; // 0x48
		::System::Nullable_1<::UnityEngine::Vector3> AIBPKNIKOEM; // 0x50
		::System::Byte _padding0[0x8];
		::System::Nullable_1<::UnityEngine::Vector3> LGAKMMNIDBH; // 0x60
		::System::Byte _padding1[0x8];
		::System::Single AKPJEFAIAAH; // 0x70
		::System::Nullable_1<::UnityEngine::Vector3> HDPLAEJNHKF; // 0x74
		::System::Byte _padding2[0x8];
		::UnityEngine::Vector3 NIJOOBNBIGH; // 0x84
		::System::Nullable_1<::UnityEngine::Vector3> IKDPDKMMIIL; // 0x90
		::System::Byte _padding3[0x8];
		::System::Nullable_1<::System::Single> BAJDACPIKJI; // 0xA0
		::System::Nullable_1<::System::Single> BCCHKOFHHIG; // 0xA8
		::System::Single BBGPLPEAEOA; // 0xB0
		::System::Nullable_1<::System::Single> BEBNHKJCBLL; // 0xB4
		::System::Single DMAGFPLPEKC; // 0xBC
		::System::Single JJJMDDBOJGA; // 0xC0
		::System::Nullable_1<::System::Single> GKGNHIDCJFM; // 0xC4
		::System::Single IHJCLMFJCFI; // 0xCC
		::System::Boolean ANKAHLMFDFN; // 0xD0
		::System::Boolean PJACOCOKFLP; // 0xD1
		::System::Boolean HPAEIBFNACJ; // 0xD2
		::System::Byte _padding4[0x1];
		::System::Single EGIIBCLDKBA; // 0xD4
		::System::Single IAALGINAHEI; // 0xD8
		// static const ::System::Object MDOJLKNCMIC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENHNNDHGFI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + FENHNNDHGFI_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + FENHNNDHGFI_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean NHEDINBLOIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FENHNNDHGFI_NHEDINBLOIH_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENHNNDHGFI_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void KFOPKEFOHFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENHNNDHGFI_KFOPKEFOHFE_OFFSET))(this);
		}

		::System::Void NGBPFIDOELG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENHNNDHGFI_NGBPFIDOELG_OFFSET))(this);
		}

		::System::Boolean GJCPBBACOAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FENHNNDHGFI_GJCPBBACOAF_OFFSET))(this);
		}

		::System::Boolean OEAAMLFOCIP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FENHNNDHGFI_OEAAMLFOCIP_OFFSET))(this);
		}

		::System::Void CGOIKMGOLIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENHNNDHGFI_CGOIKMGOLIK_OFFSET))(this);
		}

		::System::Single CCIMLGABCDG(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FENHNNDHGFI_CCIMLGABCDG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NEBAOBGPAAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENHNNDHGFI_NEBAOBGPAAM_OFFSET))(this);
		}

		::System::Void NNKGGHEPLCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENHNNDHGFI_NNKGGHEPLCD_OFFSET))(this);
		}

		::System::Void ENLIIIBNBGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENHNNDHGFI_ENLIIIBNBGH_OFFSET))(this);
		}

		::System::Void NCAAPNAKLCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENHNNDHGFI_NCAAPNAKLCA_OFFSET))(this);
		}

		::System::Void ELNGDKIBBIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENHNNDHGFI_ELNGDKIBBIK_OFFSET))(this);
		}

		::System::Single KDPCFABNIKJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FENHNNDHGFI_KDPCFABNIKJ_OFFSET))(this);
		}

		::System::Single OBDCOKFPANJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FENHNNDHGFI_OBDCOKFPANJ_OFFSET))(this);
		}

		::System::Single MOFBKKICOJG(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FENHNNDHGFI_MOFBKKICOJG_OFFSET))(this, a1);
		}

		::System::Void NBNGLAJOCMN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FENHNNDHGFI_NBNGLAJOCMN_OFFSET))(this, a1);
		}

		::System::Single PLJHHJFAOFA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FENHNNDHGFI_PLJHHJFAOFA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BAECPDKPNIF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FENHNNDHGFI_BAECPDKPNIF_OFFSET))(this, a1);
		}

		::System::Boolean FCALPECKHFK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FENHNNDHGFI_FCALPECKHFK_OFFSET))(this);
		}

		::UnityEngine::Vector3 IHPALPLIHNG(::RPG::Client::Freelook3rdModuleConfig* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::Freelook3rdModuleConfig*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FENHNNDHGFI_IHPALPLIHNG_OFFSET))(this, a1, a2);
		}

		::System::Single BFIAMMHMBII()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FENHNNDHGFI_BFIAMMHMBII_OFFSET))(this);
		}

	};
