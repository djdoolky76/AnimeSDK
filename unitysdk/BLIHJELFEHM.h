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

#define BLIHJELFEHM_ALJKGNHDPIC_OFFSET UNITYSDK_OFFSET(0x18B51860)
#define BLIHJELFEHM_APHDACBNOEN_OFFSET UNITYSDK_OFFSET(0x18B4F8C0)
#define BLIHJELFEHM_BHBDPBDIDDD_OFFSET UNITYSDK_OFFSET(0x18B50E70)
#define BLIHJELFEHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x18B52C10)
#define BLIHJELFEHM_CEKLPBJGLEB_OFFSET UNITYSDK_OFFSET(0x18B50790)
#define BLIHJELFEHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x18B4EA40)
#define BLIHJELFEHM_CTOR_OFFSET UNITYSDK_OFFSET(0x18B4EA30)
#define BLIHJELFEHM_DHGEKEIOGIA_OFFSET UNITYSDK_OFFSET(0x18B4ED70)
#define BLIHJELFEHM_EGHDEKFNKPC_OFFSET UNITYSDK_OFFSET(0x18B522D0)
#define BLIHJELFEHM_EJPDIKJEDCA_OFFSET UNITYSDK_OFFSET(0x18B529F0)
#define BLIHJELFEHM_FMLAODJELFJ_OFFSET UNITYSDK_OFFSET(0x18B50E10)
#define BLIHJELFEHM_GBAMFLPHMPE_OFFSET UNITYSDK_OFFSET(0x18B505B0)
#define BLIHJELFEHM_HFCDHEGIICE_OFFSET UNITYSDK_OFFSET(0x18B51EB0)
#define BLIHJELFEHM_HNEIAHHKLDK_OFFSET UNITYSDK_OFFSET(0x18B4FC50)
#define BLIHJELFEHM_IFFGABIBIMB_OFFSET UNITYSDK_OFFSET(0x18B4F900)
#define BLIHJELFEHM_IJHHIOLMJAE_OFFSET UNITYSDK_OFFSET(0x18B50720)
#define BLIHJELFEHM_JBIKAAECIEL_OFFSET UNITYSDK_OFFSET(0x18B4EDF0)
#define BLIHJELFEHM_KFOPKEFOHFE_OFFSET UNITYSDK_OFFSET(0x18B4F260)
#define BLIHJELFEHM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x18B4EBB0)
#define BLIHJELFEHM_LCIOOHFCJKH_OFFSET UNITYSDK_OFFSET(0x18B50F80)
#define BLIHJELFEHM_LHKAACFFPNP_OFFSET UNITYSDK_OFFSET(0x18B510C0)
#define BLIHJELFEHM_LLADIMGBJPG_OFFSET UNITYSDK_OFFSET(0x18B526D0)
#define BLIHJELFEHM_LPHBLEMMLJD_OFFSET UNITYSDK_OFFSET(0x18B51810)
#define BLIHJELFEHM_NHEDINBLOIH_OFFSET UNITYSDK_OFFSET(0x18B4EF70)
#define BLIHJELFEHM_NOANCEOBICI_OFFSET UNITYSDK_OFFSET(0x18B4F860)
#define BLIHJELFEHM_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x18B4F040)

inline static constexpr unsigned int BLIHJELFEHM_TypeDefinitionIndex = 71585;

	class BLIHJELFEHM : public ::MDILEMALGNC
	{
	public:
		::BLIHJELFEHM_TransitionShotData* MEHFGDNPJFK; // 0x38
		::BLIHJELFEHM_TransitionShotData* LCLCHALNADH; // 0x40
		::RPG::Client::BattleTransitionModuleConfig* FDBMJLDPIMI; // 0x48
		::BLIHJELFEHM_TransitionShotData* AMOGPEPDKAF; // 0x50
		::BLIHJELFEHM_TransitionShotData* GGDFOCKLMFJ; // 0x58
		::BLIHJELFEHM_TransitionShotData* PEAEAICLPOL; // 0x60
		::LHBGGEHHLJC* COOFAPDHOPF; // 0x68
		::BLIHJELFEHM_TransitionShotData* EBEABIGGMOG; // 0x70
		::BLIHJELFEHM_TransitionShotData* CDJIAGBCLGE; // 0x78
		::LHBGGEHHLJC* GBNNONDIGCL; // 0x80
		::System::Single DANFIHIKKAC; // 0x88
		::UnityEngine::Vector3 KPPEBPOOJPD; // 0x8C
		::UnityEngine::Vector3 KLBANNNJFGP; // 0x98
		::System::Single KMMIEAGHMAA; // 0xA4
		::BLIHJELFEHM_TransitionMode FENADDOEJCE; // 0xA8
		::System::Single ABPKECDOIJK; // 0xAC
		::UnityEngine::Vector3 HKMLCIPHNAF; // 0xB0
		::System::Single BMHJBDGAKID; // 0xBC
		::System::Single GHPMCANHNMC; // 0xC0
		::UnityEngine::Vector3 ANKDIFDHNBJ; // 0xC4
		::System::Single NHNOKMDAMLH; // 0xD0
		::System::Int32 OJNKJADCOHD; // 0xD4
		::System::Single EMOJPFKBICP; // 0xD8
		::System::Boolean GKBMMMBLJCL; // 0xDC
		::System::Boolean HFNLGBFGCIJ; // 0xDD
		::System::Boolean GCLIEAABAAA; // 0xDE
		::System::Boolean BGHHLBBBDEE; // 0xDF
		::System::Single HOBBDGEPOAM; // 0xE0
		::System::Single HAKKCNDGEMM; // 0xE4
		static ::System::Int32* StaticGet_MNOMEAJIDIN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "BLIHJELFEHM")->GetStaticField(0x14C70);
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
