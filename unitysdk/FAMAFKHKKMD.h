#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AFEPOFEOCDI;
class OCPOIDCNJDA;
class OMPCEECHGJK;
namespace Entitas { class IGroup; }

#define FAMAFKHKKMD_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0x15684380)
#define FAMAFKHKKMD_CDEBBIONEDG_OFFSET UNITYSDK_OFFSET(0x15685130)
#define FAMAFKHKKMD_CFOLOHPFJKH_OFFSET UNITYSDK_OFFSET(0x156863E0)
#define FAMAFKHKKMD_CTOR_OFFSET UNITYSDK_OFFSET(0x15684320)
#define FAMAFKHKKMD_DFPJFCCKFFF_OFFSET UNITYSDK_OFFSET(0x156849D0)
#define FAMAFKHKKMD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x156846D0)
#define FAMAFKHKKMD_IEFOANAHNOB_OFFSET UNITYSDK_OFFSET(0x15685350)
#define FAMAFKHKKMD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x156843E0)
#define FAMAFKHKKMD_LIADMBLPIFA_OFFSET UNITYSDK_OFFSET(0x15685EF0)
#define FAMAFKHKKMD_LLBFBLIGNDG_OFFSET UNITYSDK_OFFSET(0x15685960)
#define FAMAFKHKKMD_NAKJMKKEHKC_OFFSET UNITYSDK_OFFSET(0x15686480)
#define FAMAFKHKKMD_PFNNEEJNBHN_OFFSET UNITYSDK_OFFSET(0x15686050)
#define FAMAFKHKKMD_PHPEAEAIDCJ_OFFSET UNITYSDK_OFFSET(0x15685B50)
#define FAMAFKHKKMD_PJDJLFFOFDH_OFFSET UNITYSDK_OFFSET(0x15685820)

inline static constexpr unsigned int FAMAFKHKKMD_TypeDefinitionIndex = 76667;

	class FAMAFKHKKMD : public ::System::Object
	{
	public:
		::Entitas::IGroup* GOHKBDPGAOA; // 0x10
		::OMPCEECHGJK* PDENFEFCAGN; // 0x18
		::AFEPOFEOCDI* FKINCGODJEP; // 0x20
		::Entitas::IGroup* BICIKNNLHCI; // 0x28
		::Il2CppArray<::UnityEngine::RaycastHit>* HIHPCNKNPNE; // 0x30
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
