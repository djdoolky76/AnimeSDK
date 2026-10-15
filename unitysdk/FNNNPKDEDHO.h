#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/IDJCEFPNPMM.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PDPIHJEBAEC;
class PEEDLCHFAFL;
namespace UnityEngine { class Collider; }

#define FNNNPKDEDHO_AADGFBBGKCM_OFFSET UNITYSDK_OFFSET(0x1588F770)
#define FNNNPKDEDHO_ALNABGNIGNJ_OFFSET UNITYSDK_OFFSET(0x15887F10)
#define FNNNPKDEDHO_APMGAEMEKHO_OFFSET UNITYSDK_OFFSET(0x15887AC0)
#define FNNNPKDEDHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1588FDC0)
#define FNNNPKDEDHO_CTOR_OFFSET UNITYSDK_OFFSET(0x15887350)
#define FNNNPKDEDHO_DIGBFPNGEFD_OFFSET UNITYSDK_OFFSET(0x1588AC80)
#define FNNNPKDEDHO_EEJENMLIJFK_OFFSET UNITYSDK_OFFSET(0x1588D990)
#define FNNNPKDEDHO_ELHIAAEMOMC_OFFSET UNITYSDK_OFFSET(0x158890D0)
#define FNNNPKDEDHO_GKHDDKDIIBA_OFFSET UNITYSDK_OFFSET(0x1588EA50)
#define FNNNPKDEDHO_HCOGLMPLPFA_OFFSET UNITYSDK_OFFSET(0x1588B750)
#define FNNNPKDEDHO_IEKJCPEMNOF_OFFSET UNITYSDK_OFFSET(0x158878C0)
#define FNNNPKDEDHO_JGEKALFCDLP_OFFSET UNITYSDK_OFFSET(0x15889BD0)
#define FNNNPKDEDHO_JGLDOGFCNJC_OFFSET UNITYSDK_OFFSET(0x1588F970)
#define FNNNPKDEDHO_JIAPBPCNMKE_OFFSET UNITYSDK_OFFSET(0x1588DDD0)
#define FNNNPKDEDHO_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x15887360)
#define FNNNPKDEDHO_NCDAJCGLBLH_OFFSET UNITYSDK_OFFSET(0x15889D90)
#define FNNNPKDEDHO_NGGHLBDENKP_OFFSET UNITYSDK_OFFSET(0x158875B0)
#define FNNNPKDEDHO_NJMCFJAADPN_OFFSET UNITYSDK_OFFSET(0x1588D650)
#define FNNNPKDEDHO_OBBLHBLFLOK_OFFSET UNITYSDK_OFFSET(0x1588C880)
#define FNNNPKDEDHO_PDAEEOEFCDB_OFFSET UNITYSDK_OFFSET(0x15887970)
#define FNNNPKDEDHO_PIBOIOIAFIG_OFFSET UNITYSDK_OFFSET(0x15887A00)
#define FNNNPKDEDHO_PMHHJKEFDCK_OFFSET UNITYSDK_OFFSET(0x158881C0)

inline static constexpr unsigned int FNNNPKDEDHO_TypeDefinitionIndex = 76914;

	class FNNNPKDEDHO : public ::System::Object
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::System::Int32 CGMDPOOBMEJ; // 0x20
		::System::Boolean ABKMPGNDAHO; // 0x24
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_GFABCKDNIBJ()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)UnitySDK::FromName("", "FNNNPKDEDHO")->GetStaticField(0x591A0);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_KDDCBHBPJMF()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "FNNNPKDEDHO")->GetStaticField(0x591A8);
		}

		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + FNNNPKDEDHO_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNNNPKDEDHO_CCTOR_OFFSET))();
		}

		::System::Void LateExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNNPKDEDHO_LATEEXECUTE_OFFSET))(this);
		}

		::System::Void PDAEEOEFCDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNNPKDEDHO_PDAEEOEFCDB_OFFSET))(this);
		}

		::System::Void APMGAEMEKHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNNPKDEDHO_APMGAEMEKHO_OFFSET))(this);
		}

		::System::Void ALNABGNIGNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNNPKDEDHO_ALNABGNIGNJ_OFFSET))(this);
		}

		::System::Void PIBOIOIAFIG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FNNNPKDEDHO_PIBOIOIAFIG_OFFSET))(this, a1);
		}

		::System::Void JGEKALFCDLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNNPKDEDHO_JGEKALFCDLP_OFFSET))(this);
		}

		::System::Void DIGBFPNGEFD(::HIOEAKHGILF* a1, ::PDPIHJEBAEC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::PDPIHJEBAEC*))((::PBYTE)hIl2Cpp + FNNNPKDEDHO_DIGBFPNGEFD_OFFSET))(this, a1, a2);
		}

		::System::Void NJMCFJAADPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNNPKDEDHO_NJMCFJAADPN_OFFSET))(this);
		}

		::System::Void ELHIAAEMOMC(::HIOEAKHGILF* a1, ::PDPIHJEBAEC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::PDPIHJEBAEC*))((::PBYTE)hIl2Cpp + FNNNPKDEDHO_ELHIAAEMOMC_OFFSET))(this, a1, a2);
		}

		::System::Boolean HCOGLMPLPFA(::HIOEAKHGILF* a1, ::PDPIHJEBAEC* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::PDPIHJEBAEC*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FNNNPKDEDHO_HCOGLMPLPFA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void NCDAJCGLBLH(::HIOEAKHGILF* a1, ::PDPIHJEBAEC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::PDPIHJEBAEC*))((::PBYTE)hIl2Cpp + FNNNPKDEDHO_NCDAJCGLBLH_OFFSET))(this, a1, a2);
		}

		::System::Void PMHHJKEFDCK(::HIOEAKHGILF* a1, ::PDPIHJEBAEC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::PDPIHJEBAEC*))((::PBYTE)hIl2Cpp + FNNNPKDEDHO_PMHHJKEFDCK_OFFSET))(this, a1, a2);
		}

		::System::Boolean GKHDDKDIIBA(::HIOEAKHGILF* a1, ::PDPIHJEBAEC* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::PDPIHJEBAEC*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FNNNPKDEDHO_GKHDDKDIIBA_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::MVector2 AADGFBBGKCM(::IDJCEFPNPMM a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3, ::System::Boolean a4)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::IDJCEFPNPMM, ::RPG::MVector2, ::RPG::MVector2, ::System::Boolean))((::PBYTE)hIl2Cpp + FNNNPKDEDHO_AADGFBBGKCM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NGGHLBDENKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNNPKDEDHO_NGGHLBDENKP_OFFSET))(this);
		}

		::System::Boolean IEKJCPEMNOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNNPKDEDHO_IEKJCPEMNOF_OFFSET))(this);
		}

		::System::Boolean OBBLHBLFLOK(::PDPIHJEBAEC* a1, ::UnityEngine::Bounds a2, ::KLNKLOMDIIC a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Quaternion a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::PDPIHJEBAEC*, ::UnityEngine::Bounds, ::KLNKLOMDIIC, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FNNNPKDEDHO_OBBLHBLFLOK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean JGLDOGFCNJC(::UnityEngine::Vector3 a1, ::KLNKLOMDIIC a2, ::HIOEAKHGILF* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::KLNKLOMDIIC, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FNNNPKDEDHO_JGLDOGFCNJC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JIAPBPCNMKE(::KLNKLOMDIIC a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::KLNKLOMDIIC, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + FNNNPKDEDHO_JIAPBPCNMKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EEJENMLIJFK(::HGBCMFANCOE a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::System::Boolean))((::PBYTE)hIl2Cpp + FNNNPKDEDHO_EEJENMLIJFK_OFFSET))(this, a1, a2);
		}

	};
