#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHIDGDHOJEF.h"
#include "unitysdk/RPG/GameCore/BattleModeState.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
class FAAHAACBEEK;
class FFNOMKOBGGL;
class PKLOMDCOKOC;
class POEGKFEADIE;
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { class Map; }
namespace RPG::Client { class PipelineCameraEngine; }

#define GFDEOBDBACI_AHGNCDFAFBM_OFFSET UNITYSDK_OFFSET(0x1B4897D0)
#define GFDEOBDBACI_AJMMFLAHAEO_OFFSET UNITYSDK_OFFSET(0x1B487680)
#define GFDEOBDBACI_CAKHPECADON_OFFSET UNITYSDK_OFFSET(0x1B488950)
#define GFDEOBDBACI_CTOR_OFFSET UNITYSDK_OFFSET(0x1B489910)
#define GFDEOBDBACI_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x1B4892B0)
#define GFDEOBDBACI_DDLLNIBEJFF_OFFSET UNITYSDK_OFFSET(0x1B489900)
#define GFDEOBDBACI_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x1B4896B0)
#define GFDEOBDBACI_DIGPANBGONA_OFFSET UNITYSDK_OFFSET(0x1B487B20)
#define GFDEOBDBACI_DIPHCOADLCN_OFFSET UNITYSDK_OFFSET(0x1B4898E0)
#define GFDEOBDBACI_DJJKKPANMBG_OFFSET UNITYSDK_OFFSET(0x1B487620)
#define GFDEOBDBACI_FADBKHANGFN_OFFSET UNITYSDK_OFFSET(0x1B489290)
#define GFDEOBDBACI_FANHCABNFFA_OFFSET UNITYSDK_OFFSET(0x1B487150)
#define GFDEOBDBACI_FJMALMHLCEH_OFFSET UNITYSDK_OFFSET(0x1B487460)
#define GFDEOBDBACI_FMNNMFLMKGO_OFFSET UNITYSDK_OFFSET(0x1B487400)
#define GFDEOBDBACI_GETENVIRONMENTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1B489840)
#define GFDEOBDBACI_GFEHDPDAAEF_OFFSET UNITYSDK_OFFSET(0x1B4898F0)
#define GFDEOBDBACI_GIHMOLLDJPA_OFFSET UNITYSDK_OFFSET(0x1B488090)
#define GFDEOBDBACI_GJEMPLBNLOP_OFFSET UNITYSDK_OFFSET(0x1B4883D0)
#define GFDEOBDBACI_GJPLHANEHHI_OFFSET UNITYSDK_OFFSET(0x1B4877C0)
#define GFDEOBDBACI_HHPNEJMBACH_OFFSET UNITYSDK_OFFSET(0x1B487280)
#define GFDEOBDBACI_IEGKLLNGDFE_OFFSET UNITYSDK_OFFSET(0x1B489280)
#define GFDEOBDBACI_ILNEPHOPKPA_OFFSET UNITYSDK_OFFSET(0x1B489260)
#define GFDEOBDBACI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1B489650)
#define GFDEOBDBACI_JMLHDGHGPHO_OFFSET UNITYSDK_OFFSET(0x1B4878E0)
#define GFDEOBDBACI_KNIMHHKCHKP_OFFSET UNITYSDK_OFFSET(0x1B489120)
#define GFDEOBDBACI_LKFNJJICPCA_OFFSET UNITYSDK_OFFSET(0x1B489250)
#define GFDEOBDBACI_LPAODKMIHIM_OFFSET UNITYSDK_OFFSET(0x1B489880)
#define GFDEOBDBACI_MFPDHPAJCID_OFFSET UNITYSDK_OFFSET(0x1B487580)
#define GFDEOBDBACI_MNEGEHBPMCC_OFFSET UNITYSDK_OFFSET(0x1B488AC0)
#define GFDEOBDBACI_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x1B4894E0)
#define GFDEOBDBACI_NODPFDMNLJN_OFFSET UNITYSDK_OFFSET(0x1B487330)
#define GFDEOBDBACI_OPGLAKFNMLD_OFFSET UNITYSDK_OFFSET(0x1B4898D0)
#define GFDEOBDBACI_PCHDHLPOKEO_OFFSET UNITYSDK_OFFSET(0x1B487100)
#define GFDEOBDBACI_PMLLOFFOEIK_OFFSET UNITYSDK_OFFSET(0x1B4870C0)

inline static constexpr unsigned int GFDEOBDBACI_TypeDefinitionIndex = 75390;

	class GFDEOBDBACI : public ::JHIDGDHOJEF
	{
	public:
		::FAAHAACBEEK* AALMMLAAAJP; // 0x38
		::FFNOMKOBGGL* IAPCFKAPBAG; // 0x40
		::RPG::Client::PipelineCameraEngine* KMJJAHOHANH; // 0x48
		::PKLOMDCOKOC* ANKPMFPDDMA; // 0x50
		::RPG::Client::EnvironmentSystem* NLKKPKJEAOO; // 0x58
		::POEGKFEADIE* BHJDJDPLCLP; // 0x60
		::RPG::Client::Map* APBKPGMCPLI; // 0x68
		::UnityEngine::Vector3 KHNGLLEPLDE; // 0x70
		::UnityEngine::Matrix4x4 HIKJLOGAFFF; // 0x7C
		::UnityEngine::Matrix4x4 OGDJFPCDAJL; // 0xBC
		::UnityEngine::Quaternion BCBMOEEFFOD; // 0xFC
		::UnityEngine::Vector3 KAFNLFHNEFH; // 0x10C
		::UnityEngine::Quaternion PHOJPKJCPMM; // 0x118
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_CTOR_OFFSET))(this);
		}

		::System::Void PMLLOFFOEIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_PMLLOFFOEIK_OFFSET))(this);
		}

		::System::Void PCHDHLPOKEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_PCHDHLPOKEO_OFFSET))(this);
		}

		::System::Void HHPNEJMBACH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_HHPNEJMBACH_OFFSET))(this);
		}

		::System::Void MFPDHPAJCID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_MFPDHPAJCID_OFFSET))(this);
		}

		::System::Void DJJKKPANMBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_DJJKKPANMBG_OFFSET))(this);
		}

		::System::Void AJMMFLAHAEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_AJMMFLAHAEO_OFFSET))(this);
		}

		::System::Void FANHCABNFFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_FANHCABNFFA_OFFSET))(this);
		}

		::System::Void GJPLHANEHHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_GJPLHANEHHI_OFFSET))(this);
		}

		::System::Void FJMALMHLCEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_FJMALMHLCEH_OFFSET))(this);
		}

		::System::Void JMLHDGHGPHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_JMLHDGHGPHO_OFFSET))(this);
		}

		::System::Void GJEMPLBNLOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_GJEMPLBNLOP_OFFSET))(this);
		}

		::System::Void DIGPANBGONA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_DIGPANBGONA_OFFSET))(this);
		}

		::System::Void FMNNMFLMKGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_FMNNMFLMKGO_OFFSET))(this);
		}

		::System::Void GIHMOLLDJPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_GIHMOLLDJPA_OFFSET))(this);
		}

		::System::Void NODPFDMNLJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_NODPFDMNLJN_OFFSET))(this);
		}

		::System::Void MNEGEHBPMCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_MNEGEHBPMCC_OFFSET))(this);
		}

		::UnityEngine::Vector3 CAKHPECADON(::RPG::GameCore::FixVec3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + GFDEOBDBACI_CAKHPECADON_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixVec3 KNIMHHKCHKP(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::GameCore::FixVec3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GFDEOBDBACI_KNIMHHKCHKP_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion LKFNJJICPCA()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_LKFNJJICPCA_OFFSET))(this);
		}

		::UnityEngine::Vector3 ILNEPHOPKPA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_ILNEPHOPKPA_OFFSET))(this);
		}

		::UnityEngine::Quaternion IEGKLLNGDFE()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_IEGKLLNGDFE_OFFSET))(this);
		}

		::UnityEngine::Vector3 FADBKHANGFN()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_FADBKHANGFN_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GFDEOBDBACI_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GFDEOBDBACI_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void AHGNCDFAFBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_AHGNCDFAFBM_OFFSET))(this);
		}

		::RPG::Client::EnvironmentSystem* GetEnvironmentSystem()
		{
			return ((::RPG::Client::EnvironmentSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_GETENVIRONMENTSYSTEM_OFFSET))(this);
		}

		::System::Void LPAODKMIHIM(::RPG::GameCore::BattleModeState a1, ::RPG::GameCore::BattleModeState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleModeState, ::RPG::GameCore::BattleModeState))((::PBYTE)hIl2Cpp + GFDEOBDBACI_LPAODKMIHIM_OFFSET))(this, a1, a2);
		}

		::POEGKFEADIE* OPGLAKFNMLD()
		{
			return ((::POEGKFEADIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_OPGLAKFNMLD_OFFSET))(this);
		}

		::FAAHAACBEEK* DIPHCOADLCN()
		{
			return ((::FAAHAACBEEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_DIPHCOADLCN_OFFSET))(this);
		}

		::FFNOMKOBGGL* GFEHDPDAAEF()
		{
			return ((::FFNOMKOBGGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_GFEHDPDAAEF_OFFSET))(this);
		}

		::RPG::Client::Map* DDLLNIBEJFF()
		{
			return ((::RPG::Client::Map*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEOBDBACI_DDLLNIBEJFF_OFFSET))(this);
		}

	};
