#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/CrystalState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/HPKDNHLINPC.h"
#include "unitysdk/KJFIKOKBCCA.h"
#include "unitysdk/MGHOGONCDLM.h"
#include "unitysdk/UnityEngine/Bounds.h"
class FJBGKODCONC;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace UnityEngine { class Collider; }

#define FJBGKODCONC_AJIKHFBHCEA_OFFSET UNITYSDK_OFFSET(0x19817A90)
#define FJBGKODCONC_AKBIKOKKBFI_OFFSET UNITYSDK_OFFSET(0x19816E50)
#define FJBGKODCONC_BBDMFGMMANE_OFFSET UNITYSDK_OFFSET(0x19816690)
#define FJBGKODCONC_BNLPMEMODPH_OFFSET UNITYSDK_OFFSET(0x19816AD0)
#define FJBGKODCONC_BOFCLJCINIF_OFFSET UNITYSDK_OFFSET(0x19818F50)
#define FJBGKODCONC_BOHHBNHIIMG_OFFSET UNITYSDK_OFFSET(0x1981A880)
#define FJBGKODCONC_CKEHCNGGJEP_OFFSET UNITYSDK_OFFSET(0x19816430)
#define FJBGKODCONC_CKLKBJDCIFF_OFFSET UNITYSDK_OFFSET(0x1981A590)
#define FJBGKODCONC_CTOR_OFFSET UNITYSDK_OFFSET(0x19815EE0)
#define FJBGKODCONC_EJJLOCOMCPH_OFFSET UNITYSDK_OFFSET(0x19818A20)
#define FJBGKODCONC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x198163E0)
#define FJBGKODCONC_FGIAOGLAEDG_OFFSET UNITYSDK_OFFSET(0x1981A220)
#define FJBGKODCONC_GDOCPJBKAEB_OFFSET UNITYSDK_OFFSET(0x19818FC0)
#define FJBGKODCONC_GOIGAOEFMJF_OFFSET UNITYSDK_OFFSET(0x198191F0)
#define FJBGKODCONC_HACMIGCPHDH_OFFSET UNITYSDK_OFFSET(0x198168C0)
#define FJBGKODCONC_HBFGJDEDEEH_OFFSET UNITYSDK_OFFSET(0x198193A0)
#define FJBGKODCONC_INCBAHEDHLK_OFFSET UNITYSDK_OFFSET(0x19818CA0)
#define FJBGKODCONC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19816870)
#define FJBGKODCONC_JHGNHDKEMMD_OFFSET UNITYSDK_OFFSET(0x1981A760)
#define FJBGKODCONC_JJNGNHLACMC_OFFSET UNITYSDK_OFFSET(0x198173A0)
#define FJBGKODCONC_JPNGIMEOILN_OFFSET UNITYSDK_OFFSET(0x19819D10)
#define FJBGKODCONC_KBPECOMPAEF_OFFSET UNITYSDK_OFFSET(0x19817020)
#define FJBGKODCONC_KDJBIIBAMKP_OFFSET UNITYSDK_OFFSET(0x1981A130)
#define FJBGKODCONC_KJHFONIBPLN_OFFSET UNITYSDK_OFFSET(0x198170F0)
#define FJBGKODCONC_LCIELNDJIDB_OFFSET UNITYSDK_OFFSET(0x198187E0)
#define FJBGKODCONC_LOLMKBFJKEF_OFFSET UNITYSDK_OFFSET(0x1981A400)
#define FJBGKODCONC_MHPLGOAHLPJ_OFFSET UNITYSDK_OFFSET(0x19818530)
#define FJBGKODCONC_MKGNDJCCPCG_OFFSET UNITYSDK_OFFSET(0x1981A380)
#define FJBGKODCONC_NBDJAHAFKEN_OFFSET UNITYSDK_OFFSET(0x198182C0)
#define FJBGKODCONC_NHMIFAJLIOA_OFFSET UNITYSDK_OFFSET(0x19818640)
#define FJBGKODCONC_NJAAPOIMGPN_OFFSET UNITYSDK_OFFSET(0x19817440)
#define FJBGKODCONC_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x19816C90)
#define FJBGKODCONC__GET__ONPLAYERFALLCLOSURE_B__38_0_OFFSET UNITYSDK_OFFSET(0x1981A9D0)

inline static constexpr unsigned int FJBGKODCONC_TypeDefinitionIndex = 79409;

	class FJBGKODCONC : public ::System::Object
	{
	public:
		::Entitas::ICollector_1<::HIOEAKHGILF*>* OOKNMCLNMEH; // 0x10
		::Entitas::IGroup_1<::HIOEAKHGILF*>* BLOLGDECJEC; // 0x18
		::NDDFLGNNMDK* FKINCGODJEP; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* OIGFDPAFPDL; // 0x28
		::Entitas::IGroup_1<::HIOEAKHGILF*>* LGPADDBGBMB; // 0x30
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x38
		::System::Boolean JIMEMNGNMIH; // 0x40
		static ::System::Single* StaticGet_HPHPNOKEOND()
		{
			return (::System::Single*)UnitySDK::FromName("", "FJBGKODCONC")->GetStaticField(0x14200);
		}

		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + FJBGKODCONC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBGKODCONC_EXECUTE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBGKODCONC_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBGKODCONC_TEARDOWN_OFFSET))(this);
		}

		::System::Void BNLPMEMODPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBGKODCONC_BNLPMEMODPH_OFFSET))(this);
		}

		::System::Void AKBIKOKKBFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBGKODCONC_AKBIKOKKBFI_OFFSET))(this);
		}

		::System::Void CKEHCNGGJEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBGKODCONC_CKEHCNGGJEP_OFFSET))(this);
		}

		::System::Void HACMIGCPHDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBGKODCONC_HACMIGCPHDH_OFFSET))(this);
		}

		::System::Void KJHFONIBPLN(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FJBGKODCONC_KJHFONIBPLN_OFFSET))(this, a1);
		}

		::System::Void AJIKHFBHCEA(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FJBGKODCONC_AJIKHFBHCEA_OFFSET))(this, a1);
		}

		::System::Void NHMIFAJLIOA(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimTriggerShape* a2, ::HPKDNHLINPC a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimTriggerShape*, ::HPKDNHLINPC, ::System::Boolean))((::PBYTE)hIl2Cpp + FJBGKODCONC_NHMIFAJLIOA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LCIELNDJIDB(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + FJBGKODCONC_LCIELNDJIDB_OFFSET))(this, a1, a2);
		}

		::System::Void EJJLOCOMCPH(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + FJBGKODCONC_EJJLOCOMCPH_OFFSET))(this, a1, a2);
		}

		::System::Void INCBAHEDHLK(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + FJBGKODCONC_INCBAHEDHLK_OFFSET))(this, a1, a2);
		}

		::System::Void BOFCLJCINIF(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + FJBGKODCONC_BOFCLJCINIF_OFFSET))(this, a1, a2);
		}

		::System::Void BBDMFGMMANE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBGKODCONC_BBDMFGMMANE_OFFSET))(this);
		}

		::System::Void GDOCPJBKAEB(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FJBGKODCONC_GDOCPJBKAEB_OFFSET))(this, a1);
		}

		::System::Void GOIGAOEFMJF(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FJBGKODCONC_GOIGAOEFMJF_OFFSET))(this, a1);
		}

		::System::Void JPNGIMEOILN(::MGHOGONCDLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGHOGONCDLM))((::PBYTE)hIl2Cpp + FJBGKODCONC_JPNGIMEOILN_OFFSET))(this, a1);
		}

		::System::Void HBFGJDEDEEH(::HIOEAKHGILF* a1, ::MGHOGONCDLM a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::MGHOGONCDLM))((::PBYTE)hIl2Cpp + FJBGKODCONC_HBFGJDEDEEH_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Bounds KDJBIIBAMKP(::UnityEngine::Bounds a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Bounds, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FJBGKODCONC_KDJBIIBAMKP_OFFSET))(a1, a2);
		}

		::System::Void FGIAOGLAEDG(::MGHOGONCDLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGHOGONCDLM))((::PBYTE)hIl2Cpp + FJBGKODCONC_FGIAOGLAEDG_OFFSET))(this, a1);
		}

		::System::Void NJAAPOIMGPN(::HIOEAKHGILF* a1, ::RPG::Client::LittleGame::FiveDim::CrystalState a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::Client::LittleGame::FiveDim::CrystalState, ::System::Boolean))((::PBYTE)hIl2Cpp + FJBGKODCONC_NJAAPOIMGPN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MKGNDJCCPCG(::HIOEAKHGILF* a1, ::RPG::Client::LittleGame::FiveDim::CrystalState a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::Client::LittleGame::FiveDim::CrystalState, ::System::Boolean))((::PBYTE)hIl2Cpp + FJBGKODCONC_MKGNDJCCPCG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NBDJAHAFKEN(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FJBGKODCONC_NBDJAHAFKEN_OFFSET))(this, a1);
		}

		::System::Void MHPLGOAHLPJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FJBGKODCONC_MHPLGOAHLPJ_OFFSET))(this, a1);
		}

		::System::Void LOLMKBFJKEF(::Entitas::IGroup_1<::HIOEAKHGILF*>* a1, ::HIOEAKHGILF* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::HIOEAKHGILF*>*, ::HIOEAKHGILF*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + FJBGKODCONC_LOLMKBFJKEF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CKLKBJDCIFF(::HIOEAKHGILF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + FJBGKODCONC_CKLKBJDCIFF_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::FiveDim::CrystalState JJNGNHLACMC(::HIOEAKHGILF* a1)
		{
			return ((::RPG::Client::LittleGame::FiveDim::CrystalState(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FJBGKODCONC_JJNGNHLACMC_OFFSET))(this, a1);
		}

		::System::Void JHGNHDKEMMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBGKODCONC_JHGNHDKEMMD_OFFSET))(this);
		}

		::System::Void BOHHBNHIIMG(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FJBGKODCONC_BOHHBNHIIMG_OFFSET))(this, a1);
		}

		::KJFIKOKBCCA KBPECOMPAEF()
		{
			return ((::KJFIKOKBCCA(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBGKODCONC_KBPECOMPAEF_OFFSET))(this);
		}

		::System::Void _get__OnPlayerFallClosure_b__38_0(::FJBGKODCONC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJBGKODCONC*))((::PBYTE)hIl2Cpp + FJBGKODCONC__GET__ONPLAYERFALLCLOSURE_B__38_0_OFFSET))(this, a1);
		}

	};
