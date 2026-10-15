#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AFEPOFEOCDI;
class OCPOIDCNJDA;
class OMPCEECHGJK;
namespace Entitas { template <typename T> class IGroup_1; }

#define DGODIIEJKBA_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0xE859060)
#define DGODIIEJKBA_CLEANUP_OFFSET UNITYSDK_OFFSET(0xE859E00)
#define DGODIIEJKBA_CTOR_OFFSET UNITYSDK_OFFSET(0xE859050)
#define DGODIIEJKBA_EGCKIDNCIEO_OFFSET UNITYSDK_OFFSET(0xE859570)
#define DGODIIEJKBA_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE8593B0)
#define DGODIIEJKBA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE8590C0)
#define DGODIIEJKBA_JEBPCPGEKLG_OFFSET UNITYSDK_OFFSET(0xE8599E0)
#define DGODIIEJKBA_LLBFBLIGNDG_OFFSET UNITYSDK_OFFSET(0xE859C10)
#define DGODIIEJKBA_NFAPABMBPIC_OFFSET UNITYSDK_OFFSET(0xE85AB80)
#define DGODIIEJKBA_PPHCJICFGMH_OFFSET UNITYSDK_OFFSET(0xE859FA0)

inline static constexpr unsigned int DGODIIEJKBA_TypeDefinitionIndex = 76662;

	class DGODIIEJKBA : public ::System::Object
	{
	public:
		::OMPCEECHGJK* PDENFEFCAGN; // 0x10
		::Entitas::IGroup_1<::OCPOIDCNJDA*>* NLIGANPHLKN; // 0x18
		::AFEPOFEOCDI* FKINCGODJEP; // 0x20
		::Entitas::IGroup_1<::OCPOIDCNJDA*>* OKKAJODPEAA; // 0x28
		::System::Void _ctor(::AFEPOFEOCDI* a1, ::OMPCEECHGJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AFEPOFEOCDI*, ::OMPCEECHGJK*))((::PBYTE)hIl2Cpp + DGODIIEJKBA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGODIIEJKBA_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGODIIEJKBA_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGODIIEJKBA_EXECUTE_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGODIIEJKBA_CLEANUP_OFFSET))(this);
		}

		::System::Void EGCKIDNCIEO(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + DGODIIEJKBA_EGCKIDNCIEO_OFFSET))(this, a1);
		}

		::System::Void JEBPCPGEKLG(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + DGODIIEJKBA_JEBPCPGEKLG_OFFSET))(this, a1);
		}

		::System::Void LLBFBLIGNDG(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + DGODIIEJKBA_LLBFBLIGNDG_OFFSET))(this, a1);
		}

		::System::Void PPHCJICFGMH(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + DGODIIEJKBA_PPHCJICFGMH_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NFAPABMBPIC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DGODIIEJKBA_NFAPABMBPIC_OFFSET))(this, a1, a2, a3, a4);
		}

	};
