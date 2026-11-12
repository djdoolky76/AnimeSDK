#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/Nullable_1.h"
class BGOBCKLPEMK;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCasterToTargetConfig; }
namespace RPG::Client { class CameraSomatoDynamicOffset; }
namespace RPG::Client { class CloseupShotData; }
namespace RPG::Client { class FightModuleConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HPGLJFPJLMO_AMFEDJJJJKE_OFFSET UNITYSDK_OFFSET(0x16D68010)
#define HPGLJFPJLMO_BCGKNFLGBPP_OFFSET UNITYSDK_OFFSET(0x16D66AC0)
#define HPGLJFPJLMO_BKAGJGLFAKH_OFFSET UNITYSDK_OFFSET(0x16D68140)
#define HPGLJFPJLMO_CENEMEOMMOO_OFFSET UNITYSDK_OFFSET(0x16D685D0)
#define HPGLJFPJLMO_CTOR_OFFSET UNITYSDK_OFFSET(0x16D66830)
#define HPGLJFPJLMO_DOKPBLIDAJG_OFFSET UNITYSDK_OFFSET(0x16D677B0)
#define HPGLJFPJLMO_GIAPNPFFBFC_OFFSET UNITYSDK_OFFSET(0x16D69A80)
#define HPGLJFPJLMO_GKBCPAGKFGF_OFFSET UNITYSDK_OFFSET(0x16D68920)
#define HPGLJFPJLMO_HAEHAKPKOPP_OFFSET UNITYSDK_OFFSET(0x16D69760)
#define HPGLJFPJLMO_HHFMLACDHPL_OFFSET UNITYSDK_OFFSET(0x16D6A4C0)
#define HPGLJFPJLMO_INFFJPMGEMK_OFFSET UNITYSDK_OFFSET(0x16D67890)
#define HPGLJFPJLMO_INMMBIONNKJ_OFFSET UNITYSDK_OFFSET(0x16D67C50)
#define HPGLJFPJLMO_JBJDCFOAJAF_OFFSET UNITYSDK_OFFSET(0x16D6A270)
#define HPGLJFPJLMO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16D66C80)
#define HPGLJFPJLMO_JNHMEEKKCHP_OFFSET UNITYSDK_OFFSET(0x16D67F80)
#define HPGLJFPJLMO_KJGACLMHNII_OFFSET UNITYSDK_OFFSET(0x16D68500)
#define HPGLJFPJLMO_MPMDPABKBAO_OFFSET UNITYSDK_OFFSET(0x16D69C70)
#define HPGLJFPJLMO_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x16D66B30)
#define HPGLJFPJLMO_PCIFOCDJOJM_OFFSET UNITYSDK_OFFSET(0x16D69170)
#define HPGLJFPJLMO_PLDAJIKABKG_OFFSET UNITYSDK_OFFSET(0x16D69890)

inline static constexpr unsigned int HPGLJFPJLMO_TypeDefinitionIndex = 71615;

	class HPGLJFPJLMO : public ::System::Object
	{
	public:
		::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x10
		::BGOBCKLPEMK* KGNJKPBPFKC; // 0x18
		::RPG::Client::FightModuleConfig* GBCNKFOMCJO; // 0x20
		::RPG::Client::CloseupShotData* PCCIBCHCLHE; // 0x28
		::RPG::Client::CameraFightStateCasterToTargetConfig* HBJMKGKJHLO; // 0x30
		::UnityEngine::Vector3 IPDEGHKPEOO; // 0x38
		::System::Boolean GDGAOJMLDHC; // 0x44
		::System::Boolean LPEJKCCECDE; // 0x45
		::System::Boolean DOFJLCMOJML; // 0x46
		::System::Byte _padding0[0x1];
		::System::Single DDMLGPKAIOB; // 0x48
		::UnityEngine::Quaternion EFOJEMGDBKL; // 0x4C
		::UnityEngine::Vector3 BOKBLMPAFOP; // 0x5C
		::UnityEngine::Vector3 GNLKFOKBMHN; // 0x68
		::System::Single IMGJAKMFGIO; // 0x74
		::UnityEngine::Vector3 IBMCLNIKOOJ; // 0x78
		::System::Single BPAIDCADMDO; // 0x84
		::System::Single PBKPHPBJJOC; // 0x88
		::UnityEngine::Quaternion CPBCEPJJNLK; // 0x8C
		::UnityEngine::Vector3 POJOCKIAHEG; // 0x9C
		::UnityEngine::Vector3 ECLDPECGDPB; // 0xA8
		::RPG::MVector3 PCIGOFEGMCN; // 0xB4
		::UnityEngine::Vector3 KOGCFJCMFLD; // 0xC0
		::UnityEngine::Quaternion GCGKBFJIDLO; // 0xCC
		::System::Single DJHEOFLMKHI; // 0xDC
		::System::Single IHOLJOBEOOO; // 0xE0
		::System::Void _ctor(::RPG::Client::CameraDataAndFlags* a1, ::RPG::Client::CloseupShotData* a2, ::System::Nullable_1<::UnityEngine::Vector3> a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CloseupShotData*, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + HPGLJFPJLMO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BCGKNFLGBPP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HPGLJFPJLMO_BCGKNFLGBPP_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGLJFPJLMO_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::System::Single a6, ::System::Nullable_1<::UnityEngine::Quaternion> a7, ::System::Nullable_1<::RPG::MVector3> a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::RPG::MVector3>))((::PBYTE)hIl2Cpp + HPGLJFPJLMO_JLANKNHFKCN_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void INMMBIONNKJ(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HPGLJFPJLMO_INMMBIONNKJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Single AMFEDJJJJKE(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HPGLJFPJLMO_AMFEDJJJJKE_OFFSET))(this, a1);
		}

		::System::Void DOKPBLIDAJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGLJFPJLMO_DOKPBLIDAJG_OFFSET))(this);
		}

		::System::Void INFFJPMGEMK(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HPGLJFPJLMO_INFFJPMGEMK_OFFSET))(this, a1, a2);
		}

		::System::Void GKBCPAGKFGF(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HPGLJFPJLMO_GKBCPAGKFGF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PCIFOCDJOJM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HPGLJFPJLMO_PCIFOCDJOJM_OFFSET))(this, a1);
		}

		::System::Void MPMDPABKBAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGLJFPJLMO_MPMDPABKBAO_OFFSET))(this);
		}

		::RPG::Client::CameraSomatoDynamicOffset* HHFMLACDHPL(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Single a2)
		{
			return ((::RPG::Client::CameraSomatoDynamicOffset*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Single))((::PBYTE)hIl2Cpp + HPGLJFPJLMO_HHFMLACDHPL_OFFSET))(this, a1, a2);
		}

		::System::Void JBJDCFOAJAF(::RPG::Client::CameraSomatoDynamicOffset* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraSomatoDynamicOffset*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HPGLJFPJLMO_JBJDCFOAJAF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CENEMEOMMOO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HPGLJFPJLMO_CENEMEOMMOO_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 PLDAJIKABKG(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + HPGLJFPJLMO_PLDAJIKABKG_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 GIAPNPFFBFC(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + HPGLJFPJLMO_GIAPNPFFBFC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JNHMEEKKCHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGLJFPJLMO_JNHMEEKKCHP_OFFSET))(this);
		}

		::System::Single HAEHAKPKOPP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGLJFPJLMO_HAEHAKPKOPP_OFFSET))(this);
		}

		::System::Single KJGACLMHNII()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGLJFPJLMO_KJGACLMHNII_OFFSET))(this);
		}

		::System::Boolean BKAGJGLFAKH(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HPGLJFPJLMO_BKAGJGLFAKH_OFFSET))(this, a1, a2, a3);
		}

	};
