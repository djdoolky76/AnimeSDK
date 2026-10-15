#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AFEPOFEOCDI;
class OCPOIDCNJDA;
class OMPCEECHGJK;
namespace Entitas { template <typename T> class IGroup_1; }

#define AMOHLGIOFCH_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0x1557DB20)
#define AMOHLGIOFCH_CDEBBIONEDG_OFFSET UNITYSDK_OFFSET(0x1557E640)
#define AMOHLGIOFCH_CFOLOHPFJKH_OFFSET UNITYSDK_OFFSET(0x155809A0)
#define AMOHLGIOFCH_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1557DDE0)
#define AMOHLGIOFCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1557DAC0)
#define AMOHLGIOFCH_DBEFIJCFPIF_OFFSET UNITYSDK_OFFSET(0x1557FBB0)
#define AMOHLGIOFCH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x155801E0)
#define AMOHLGIOFCH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1557DB80)
#define AMOHLGIOFCH_LCIDOOKMBOL_OFFSET UNITYSDK_OFFSET(0x15580290)
#define AMOHLGIOFCH_LLBFBLIGNDG_OFFSET UNITYSDK_OFFSET(0x1557E8E0)
#define AMOHLGIOFCH_NAKJMKKEHKC_OFFSET UNITYSDK_OFFSET(0x15580A40)
#define AMOHLGIOFCH_NKLJBLOGLCA_OFFSET UNITYSDK_OFFSET(0x1557EAD0)

inline static constexpr unsigned int AMOHLGIOFCH_TypeDefinitionIndex = 76657;

	class AMOHLGIOFCH : public ::System::Object
	{
	public:
		::OMPCEECHGJK* PDENFEFCAGN; // 0x10
		::Il2CppArray<::UnityEngine::RaycastHit>* HIHPCNKNPNE; // 0x18
		::AFEPOFEOCDI* FKINCGODJEP; // 0x20
		::Entitas::IGroup_1<::OCPOIDCNJDA*>* BBMGNAHAKGP; // 0x28
		::System::Int32 KHCOAACBFEB; // 0x30
		::System::Void _ctor(::AFEPOFEOCDI* a1, ::OMPCEECHGJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AFEPOFEOCDI*, ::OMPCEECHGJK*))((::PBYTE)hIl2Cpp + AMOHLGIOFCH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOHLGIOFCH_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOHLGIOFCH_INITIALIZE_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOHLGIOFCH_CLEANUP_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOHLGIOFCH_EXECUTE_OFFSET))(this);
		}

		::System::Void LCIDOOKMBOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOHLGIOFCH_LCIDOOKMBOL_OFFSET))(this);
		}

		::System::Void CDEBBIONEDG(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + AMOHLGIOFCH_CDEBBIONEDG_OFFSET))(this, a1);
		}

		::System::Boolean NKLJBLOGLCA(::OCPOIDCNJDA* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCPOIDCNJDA*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMOHLGIOFCH_NKLJBLOGLCA_OFFSET))(this, a1, a2);
		}

		::System::Boolean CFOLOHPFJKH(::OCPOIDCNJDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + AMOHLGIOFCH_CFOLOHPFJKH_OFFSET))(this, a1);
		}

		::System::Boolean NAKJMKKEHKC(::OCPOIDCNJDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + AMOHLGIOFCH_NAKJMKKEHKC_OFFSET))(this, a1);
		}

		::System::Void DBEFIJCFPIF(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + AMOHLGIOFCH_DBEFIJCFPIF_OFFSET))(this, a1);
		}

		::System::Void LLBFBLIGNDG(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + AMOHLGIOFCH_LLBFBLIGNDG_OFFSET))(this, a1);
		}

	};
