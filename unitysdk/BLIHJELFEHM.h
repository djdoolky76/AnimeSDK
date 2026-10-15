#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLIHJELFEHM_TransitionMode.h"
#include "unitysdk/MDILEMALGNC.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BLIHJELFEHM_TransitionShotData;
class CJADIOHCKFH;
class LHBGGEHHLJC;
namespace RPG::Client { class BattleTransitionModuleConfig; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BLIHJELFEHM_ALJKGNHDPIC_OFFSET UNITYSDK_OFFSET(0xBA72EA0)
#define BLIHJELFEHM_APHDACBNOEN_OFFSET UNITYSDK_OFFSET(0xBA70EF0)
#define BLIHJELFEHM_BHBDPBDIDDD_OFFSET UNITYSDK_OFFSET(0xBA724A0)
#define BLIHJELFEHM_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA74260)
#define BLIHJELFEHM_CEKLPBJGLEB_OFFSET UNITYSDK_OFFSET(0xBA71DC0)
#define BLIHJELFEHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0xBA70090)
#define BLIHJELFEHM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA70080)
#define BLIHJELFEHM_DHGEKEIOGIA_OFFSET UNITYSDK_OFFSET(0xBA703C0)
#define BLIHJELFEHM_EGHDEKFNKPC_OFFSET UNITYSDK_OFFSET(0xBA73920)
#define BLIHJELFEHM_EJPDIKJEDCA_OFFSET UNITYSDK_OFFSET(0xBA74040)
#define BLIHJELFEHM_FMLAODJELFJ_OFFSET UNITYSDK_OFFSET(0xBA72440)
#define BLIHJELFEHM_GBAMFLPHMPE_OFFSET UNITYSDK_OFFSET(0xBA71BE0)
#define BLIHJELFEHM_HFCDHEGIICE_OFFSET UNITYSDK_OFFSET(0xBA73500)
#define BLIHJELFEHM_HNEIAHHKLDK_OFFSET UNITYSDK_OFFSET(0xBA71280)
#define BLIHJELFEHM_IFFGABIBIMB_OFFSET UNITYSDK_OFFSET(0xBA70F30)
#define BLIHJELFEHM_IJHHIOLMJAE_OFFSET UNITYSDK_OFFSET(0xBA71D50)
#define BLIHJELFEHM_JBIKAAECIEL_OFFSET UNITYSDK_OFFSET(0xBA70440)
#define BLIHJELFEHM_KFOPKEFOHFE_OFFSET UNITYSDK_OFFSET(0xBA70890)
#define BLIHJELFEHM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBA70200)
#define BLIHJELFEHM_LCIOOHFCJKH_OFFSET UNITYSDK_OFFSET(0xBA725C0)
#define BLIHJELFEHM_LHKAACFFPNP_OFFSET UNITYSDK_OFFSET(0xBA72700)
#define BLIHJELFEHM_LLADIMGBJPG_OFFSET UNITYSDK_OFFSET(0xBA73D20)
#define BLIHJELFEHM_LPHBLEMMLJD_OFFSET UNITYSDK_OFFSET(0xBA72E50)
#define BLIHJELFEHM_NHEDINBLOIH_OFFSET UNITYSDK_OFFSET(0xBA705A0)
#define BLIHJELFEHM_NOANCEOBICI_OFFSET UNITYSDK_OFFSET(0xBA70E90)
#define BLIHJELFEHM_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBA70670)

inline static constexpr unsigned int BLIHJELFEHM_TypeDefinitionIndex = 69628;

	class BLIHJELFEHM : public ::MDILEMALGNC
	{
	public:
		::BLIHJELFEHM_TransitionShotData* MEHFGDNPJFK; // 0x38
		::BLIHJELFEHM_TransitionShotData* PEAEAICLPOL; // 0x40
		::LHBGGEHHLJC* COOFAPDHOPF; // 0x48
		::LHBGGEHHLJC* GBNNONDIGCL; // 0x50
		::BLIHJELFEHM_TransitionShotData* EBEABIGGMOG; // 0x58
		::RPG::Client::BattleTransitionModuleConfig* FDBMJLDPIMI; // 0x60
		::BLIHJELFEHM_TransitionShotData* LCLCHALNADH; // 0x68
		::BLIHJELFEHM_TransitionShotData* CDJIAGBCLGE; // 0x70
		::BLIHJELFEHM_TransitionShotData* AMOGPEPDKAF; // 0x78
		::BLIHJELFEHM_TransitionShotData* GGDFOCKLMFJ; // 0x80
		::BLIHJELFEHM_TransitionMode FENADDOEJCE; // 0x88
		::UnityEngine::Vector3 KPPEBPOOJPD; // 0x8C
		::System::Single DANFIHIKKAC; // 0x98
		::System::Single HOBBDGEPOAM; // 0x9C
		::UnityEngine::Vector3 HKMLCIPHNAF; // 0xA0
		::System::Int32 OJNKJADCOHD; // 0xAC
		::UnityEngine::Vector3 ANKDIFDHNBJ; // 0xB0
		::UnityEngine::Vector3 KLBANNNJFGP; // 0xBC
		::System::Single HAKKCNDGEMM; // 0xC8
		::System::Single NHNOKMDAMLH; // 0xCC
		::System::Single BMHJBDGAKID; // 0xD0
		::System::Boolean GKBMMMBLJCL; // 0xD4
		::System::Boolean BGHHLBBBDEE; // 0xD5
		::System::Boolean GCLIEAABAAA; // 0xD6
		::System::Boolean HFNLGBFGCIJ; // 0xD7
		::System::Single EMOJPFKBICP; // 0xD8
		::System::Single ABPKECDOIJK; // 0xDC
		::System::Single GHPMCANHNMC; // 0xE0
		::System::Single KMMIEAGHMAA; // 0xE4
		static ::System::Int32* StaticGet_MNOMEAJIDIN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "BLIHJELFEHM")->GetStaticField(0x15810);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIHJELFEHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + BLIHJELFEHM_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLIHJELFEHM_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + BLIHJELFEHM_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void JBIKAAECIEL(::CJADIOHCKFH* a1, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CJADIOHCKFH*, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>*))((::PBYTE)hIl2Cpp + BLIHJELFEHM_JBIKAAECIEL_OFFSET))(this, a1, a2);
		}

		::System::Boolean NHEDINBLOIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIHJELFEHM_NHEDINBLOIH_OFFSET))(this);
		}

		::System::Void KFOPKEFOHFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIHJELFEHM_KFOPKEFOHFE_OFFSET))(this);
		}

		::System::Void FMLAODJELFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIHJELFEHM_FMLAODJELFJ_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIHJELFEHM_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void DHGEKEIOGIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIHJELFEHM_DHGEKEIOGIA_OFFSET))(this);
		}

		::System::Boolean NOANCEOBICI(::BLIHJELFEHM_TransitionMode a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BLIHJELFEHM_TransitionMode))((::PBYTE)hIl2Cpp + BLIHJELFEHM_NOANCEOBICI_OFFSET))(this, a1);
		}

		::System::Void IFFGABIBIMB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLIHJELFEHM_IFFGABIBIMB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 LHKAACFFPNP()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIHJELFEHM_LHKAACFFPNP_OFFSET))(this);
		}

		::BLIHJELFEHM_TransitionShotData* BHBDPBDIDDD()
		{
			return ((::BLIHJELFEHM_TransitionShotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIHJELFEHM_BHBDPBDIDDD_OFFSET))(this);
		}

		::System::Void APHDACBNOEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIHJELFEHM_APHDACBNOEN_OFFSET))(this);
		}

		::System::Void LCIOOHFCJKH(::BLIHJELFEHM_TransitionShotData* a1, ::BLIHJELFEHM_TransitionShotData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BLIHJELFEHM_TransitionShotData*, ::BLIHJELFEHM_TransitionShotData*))((::PBYTE)hIl2Cpp + BLIHJELFEHM_LCIOOHFCJKH_OFFSET))(this, a1, a2);
		}

		::System::Void HNEIAHHKLDK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLIHJELFEHM_HNEIAHHKLDK_OFFSET))(this, a1);
		}

		::System::Void ALJKGNHDPIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIHJELFEHM_ALJKGNHDPIC_OFFSET))(this);
		}

		::System::Boolean EGHDEKFNKPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIHJELFEHM_EGHDEKFNKPC_OFFSET))(this);
		}

		::System::Void HFCDHEGIICE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BLIHJELFEHM_HFCDHEGIICE_OFFSET))(this, a1);
		}

		::System::Boolean GBAMFLPHMPE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIHJELFEHM_GBAMFLPHMPE_OFFSET))(this);
		}

		::System::Boolean IJHHIOLMJAE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIHJELFEHM_IJHHIOLMJAE_OFFSET))(this);
		}

		::System::Void CEKLPBJGLEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIHJELFEHM_CEKLPBJGLEB_OFFSET))(this);
		}

		::System::Void LPHBLEMMLJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIHJELFEHM_LPHBLEMMLJD_OFFSET))(this);
		}

		::System::Boolean LLADIMGBJPG(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLIHJELFEHM_LLADIMGBJPG_OFFSET))(this, a1);
		}

		::System::Void EJPDIKJEDCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIHJELFEHM_EJPDIKJEDCA_OFFSET))(this);
		}

	};
