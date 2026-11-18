#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NJADBOGPHMC;
namespace MoleMole { class BezierCurve; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MGEPLIGPONN_AJNOLALPAPM_OFFSET UNITYSDK_OFFSET(0x17D24690)
#define MGEPLIGPONN_ALHGMCENFKB_OFFSET UNITYSDK_OFFSET(0x17D24D10)
#define MGEPLIGPONN_EJILJLDGLPO_OFFSET UNITYSDK_OFFSET(0x17D24A30)
#define MGEPLIGPONN_GFGNHLNMNGG_OFFSET UNITYSDK_OFFSET(0x17D25600)
#define MGEPLIGPONN_JIAGAAGJJCA_OFFSET UNITYSDK_OFFSET(0x17D24C70)
#define MGEPLIGPONN_NDOHNBPEHCJ_OFFSET UNITYSDK_OFFSET(0x17D25440)
#define MGEPLIGPONN_NJKEOMGODJH_OFFSET UNITYSDK_OFFSET(0x17D249B0)
#define MGEPLIGPONN__CTOR_OFFSET UNITYSDK_OFFSET(0x17D24460)

inline static constexpr unsigned int MGEPLIGPONN_TypeDefinitionIndex = 74862;

class MGEPLIGPONN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::NJADBOGPHMC*>* LIJNOAPJPEA; // 0x10
	::UnityEngine::Vector3 OOPLCPKCDJA; // 0x18

	::System::Void _ctor(::MoleMole::BezierCurve* MLCFHAPJECI, ::UnityEngine::Vector3 AKAGDEFAGJA, ::UnityEngine::Vector3 PIBHDJBFAAJ, ::UnityEngine::Vector3 KPLGFGLGLPD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::BezierCurve*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MGEPLIGPONN__CTOR_OFFSET))(this, MLCFHAPJECI, AKAGDEFAGJA, PIBHDJBFAAJ, KPLGFGLGLPD);
	}

	::UnityEngine::Vector3 NJKEOMGODJH(::System::Single COGBBKLMOML)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MGEPLIGPONN_NJKEOMGODJH_OFFSET))(this, COGBBKLMOML);
	}

	static ::System::Single JIAGAAGJJCA(::System::Collections::Generic::List_1<::NJADBOGPHMC*>* CELGKCKLPJC)
	{
		return ((::System::Single(*)(::System::Collections::Generic::List_1<::NJADBOGPHMC*>*))((::PBYTE)hIl2Cpp + MGEPLIGPONN_JIAGAAGJJCA_OFFSET))(CELGKCKLPJC);
	}

	static ::System::Void ALHGMCENFKB(::System::Int32 ABHBKFJKINO, ::System::Collections::Generic::List_1<::NJADBOGPHMC*>* CELGKCKLPJC)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::NJADBOGPHMC*>*))((::PBYTE)hIl2Cpp + MGEPLIGPONN_ALHGMCENFKB_OFFSET))(ABHBKFJKINO, CELGKCKLPJC);
	}

	static ::UnityEngine::Vector3 EJILJLDGLPO(::System::Single COGBBKLMOML, ::System::Collections::Generic::List_1<::NJADBOGPHMC*>* CELGKCKLPJC)
	{
		return ((::UnityEngine::Vector3(*)(::System::Single, ::System::Collections::Generic::List_1<::NJADBOGPHMC*>*))((::PBYTE)hIl2Cpp + MGEPLIGPONN_EJILJLDGLPO_OFFSET))(COGBBKLMOML, CELGKCKLPJC);
	}

	::System::Collections::Generic::List_1<::NJADBOGPHMC*>* GFGNHLNMNGG()
	{
		return ((::System::Collections::Generic::List_1<::NJADBOGPHMC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEPLIGPONN_GFGNHLNMNGG_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 NDOHNBPEHCJ(::UnityEngine::Vector3 AKAGDEFAGJA, ::UnityEngine::Vector3 KPLGFGLGLPD, ::UnityEngine::Vector3 JFIBBPDJHFJ, ::UnityEngine::Vector3 AKJKDPHMJFP, ::System::Single IMLLDOHDCNC)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MGEPLIGPONN_NDOHNBPEHCJ_OFFSET))(AKAGDEFAGJA, KPLGFGLGLPD, JFIBBPDJHFJ, AKJKDPHMJFP, IMLLDOHDCNC);
	}

	static ::System::Void AJNOLALPAPM(::System::Collections::Generic::List_1<::NJADBOGPHMC*>* CELGKCKLPJC, ::UnityEngine::Vector3 PIBHDJBFAAJ)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::NJADBOGPHMC*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MGEPLIGPONN_AJNOLALPAPM_OFFSET))(CELGKCKLPJC, PIBHDJBFAAJ);
	}
};
