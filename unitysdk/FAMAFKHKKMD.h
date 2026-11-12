#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AFEPOFEOCDI;
class OCPOIDCNJDA;
class OMPCEECHGJK;
namespace Entitas { template <typename T> class IGroup_1; }

#define FAMAFKHKKMD_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0x16598660)
#define FAMAFKHKKMD_CDEBBIONEDG_OFFSET UNITYSDK_OFFSET(0x16599410)
#define FAMAFKHKKMD_CFOLOHPFJKH_OFFSET UNITYSDK_OFFSET(0x1659A6C0)
#define FAMAFKHKKMD_CTOR_OFFSET UNITYSDK_OFFSET(0x16598600)
#define FAMAFKHKKMD_DFPJFCCKFFF_OFFSET UNITYSDK_OFFSET(0x16598CB0)
#define FAMAFKHKKMD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x165989B0)
#define FAMAFKHKKMD_IEFOANAHNOB_OFFSET UNITYSDK_OFFSET(0x16599630)
#define FAMAFKHKKMD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x165986C0)
#define FAMAFKHKKMD_LIADMBLPIFA_OFFSET UNITYSDK_OFFSET(0x1659A1D0)
#define FAMAFKHKKMD_LLBFBLIGNDG_OFFSET UNITYSDK_OFFSET(0x16599C40)
#define FAMAFKHKKMD_NAKJMKKEHKC_OFFSET UNITYSDK_OFFSET(0x1659A760)
#define FAMAFKHKKMD_PFNNEEJNBHN_OFFSET UNITYSDK_OFFSET(0x1659A330)
#define FAMAFKHKKMD_PHPEAEAIDCJ_OFFSET UNITYSDK_OFFSET(0x16599E30)
#define FAMAFKHKKMD_PJDJLFFOFDH_OFFSET UNITYSDK_OFFSET(0x16599B00)

inline static constexpr unsigned int FAMAFKHKKMD_TypeDefinitionIndex = 78998;

	class FAMAFKHKKMD : public ::System::Object
	{
	public:
		::OMPCEECHGJK* PDENFEFCAGN; // 0x10
		::Il2CppArray<::UnityEngine::RaycastHit>* HIHPCNKNPNE; // 0x18
		::Entitas::IGroup_1<::OCPOIDCNJDA*>* BICIKNNLHCI; // 0x20
		::Entitas::IGroup_1<::OCPOIDCNJDA*>* GOHKBDPGAOA; // 0x28
		::AFEPOFEOCDI* FKINCGODJEP; // 0x30
		::System::Int32 KHCOAACBFEB; // 0x38
		::System::Void _ctor(::AFEPOFEOCDI* a1, ::OMPCEECHGJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AFEPOFEOCDI*, ::OMPCEECHGJK*))((::PBYTE)hIl2Cpp + FAMAFKHKKMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMAFKHKKMD_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMAFKHKKMD_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMAFKHKKMD_EXECUTE_OFFSET))(this);
		}

		::System::Void DFPJFCCKFFF(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + FAMAFKHKKMD_DFPJFCCKFFF_OFFSET))(this, a1);
		}

		::OCPOIDCNJDA* PFNNEEJNBHN(::UnityEngine::Vector3 a1)
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FAMAFKHKKMD_PFNNEEJNBHN_OFFSET))(this, a1);
		}

		::System::Void CDEBBIONEDG(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + FAMAFKHKKMD_CDEBBIONEDG_OFFSET))(this, a1);
		}

		::System::Void IEFOANAHNOB(::OCPOIDCNJDA* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FAMAFKHKKMD_IEFOANAHNOB_OFFSET))(this, a1, a2);
		}

		::System::Boolean CFOLOHPFJKH(::OCPOIDCNJDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + FAMAFKHKKMD_CFOLOHPFJKH_OFFSET))(this, a1);
		}

		::System::Boolean PHPEAEAIDCJ(::OCPOIDCNJDA* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCPOIDCNJDA*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FAMAFKHKKMD_PHPEAEAIDCJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean NAKJMKKEHKC(::OCPOIDCNJDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + FAMAFKHKKMD_NAKJMKKEHKC_OFFSET))(this, a1);
		}

		::System::Void LIADMBLPIFA(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + FAMAFKHKKMD_LIADMBLPIFA_OFFSET))(this, a1);
		}

		::System::Void PJDJLFFOFDH(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + FAMAFKHKKMD_PJDJLFFOFDH_OFFSET))(this, a1);
		}

		::System::Void LLBFBLIGNDG(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + FAMAFKHKKMD_LLBFBLIGNDG_OFFSET))(this, a1);
		}

	};
