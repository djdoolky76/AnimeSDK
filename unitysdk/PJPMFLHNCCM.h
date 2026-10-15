#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AFEPOFEOCDI;
class OCPOIDCNJDA;
class OMPCEECHGJK;
namespace Entitas { template <typename T> class IGroup_1; }

#define PJPMFLHNCCM_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0xC29EAD0)
#define PJPMFLHNCCM_CDEBBIONEDG_OFFSET UNITYSDK_OFFSET(0xC29EFD0)
#define PJPMFLHNCCM_CTOR_OFFSET UNITYSDK_OFFSET(0xC29EA70)
#define PJPMFLHNCCM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC29ED90)
#define PJPMFLHNCCM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC29EB30)
#define PJPMFLHNCCM_LLBFBLIGNDG_OFFSET UNITYSDK_OFFSET(0xC29F810)
#define PJPMFLHNCCM_PHPEAEAIDCJ_OFFSET UNITYSDK_OFFSET(0xC29F150)
#define PJPMFLHNCCM_PJDJLFFOFDH_OFFSET UNITYSDK_OFFSET(0xC29F6D0)
#define PJPMFLHNCCM_PPBCKOFNNCE_OFFSET UNITYSDK_OFFSET(0xC29F9D0)

inline static constexpr unsigned int PJPMFLHNCCM_TypeDefinitionIndex = 76661;

	class PJPMFLHNCCM : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::RaycastHit>* HIHPCNKNPNE; // 0x10
		::OMPCEECHGJK* PDENFEFCAGN; // 0x18
		::AFEPOFEOCDI* FKINCGODJEP; // 0x20
		::Entitas::IGroup_1<::OCPOIDCNJDA*>* APIDBDLOLAL; // 0x28
		::System::Int32 KHCOAACBFEB; // 0x30
		::System::Void _ctor(::AFEPOFEOCDI* a1, ::OMPCEECHGJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AFEPOFEOCDI*, ::OMPCEECHGJK*))((::PBYTE)hIl2Cpp + PJPMFLHNCCM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPMFLHNCCM_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPMFLHNCCM_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPMFLHNCCM_EXECUTE_OFFSET))(this);
		}

		::System::Void CDEBBIONEDG(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + PJPMFLHNCCM_CDEBBIONEDG_OFFSET))(this, a1);
		}

		::System::Void PHPEAEAIDCJ(::OCPOIDCNJDA* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PJPMFLHNCCM_PHPEAEAIDCJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean PPBCKOFNNCE(::OCPOIDCNJDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + PJPMFLHNCCM_PPBCKOFNNCE_OFFSET))(this, a1);
		}

		::System::Void PJDJLFFOFDH(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + PJPMFLHNCCM_PJDJLFFOFDH_OFFSET))(this, a1);
		}

		::System::Void LLBFBLIGNDG(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + PJPMFLHNCCM_LLBFBLIGNDG_OFFSET))(this, a1);
		}

	};
