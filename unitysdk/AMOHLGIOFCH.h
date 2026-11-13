#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AFEPOFEOCDI;
class OCPOIDCNJDA;
class OMPCEECHGJK;
namespace Entitas { template <typename T> class IGroup_1; }

#define AMOHLGIOFCH_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0x197E39E0)
#define AMOHLGIOFCH_CDEBBIONEDG_OFFSET UNITYSDK_OFFSET(0x197E4500)
#define AMOHLGIOFCH_CFOLOHPFJKH_OFFSET UNITYSDK_OFFSET(0x197E6040)
#define AMOHLGIOFCH_CLEANUP_OFFSET UNITYSDK_OFFSET(0x197E3CA0)
#define AMOHLGIOFCH_CTOR_OFFSET UNITYSDK_OFFSET(0x197E3980)
#define AMOHLGIOFCH_DBEFIJCFPIF_OFFSET UNITYSDK_OFFSET(0x1A815DD0)
#define AMOHLGIOFCH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x197E5880)
#define AMOHLGIOFCH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x197E3A40)
#define AMOHLGIOFCH_LCIDOOKMBOL_OFFSET UNITYSDK_OFFSET(0x197E5930)
#define AMOHLGIOFCH_LLBFBLIGNDG_OFFSET UNITYSDK_OFFSET(0x1A816400)
#define AMOHLGIOFCH_NAKJMKKEHKC_OFFSET UNITYSDK_OFFSET(0x197E60E0)
#define AMOHLGIOFCH_NKLJBLOGLCA_OFFSET UNITYSDK_OFFSET(0x197E47A0)

inline static constexpr unsigned int AMOHLGIOFCH_TypeDefinitionIndex = 78988;

	class AMOHLGIOFCH : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::OCPOIDCNJDA*>* BBMGNAHAKGP; // 0x10
		::AFEPOFEOCDI* FKINCGODJEP; // 0x18
		::OMPCEECHGJK* PDENFEFCAGN; // 0x20
		::Il2CppArray<::UnityEngine::RaycastHit>* HIHPCNKNPNE; // 0x28
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
