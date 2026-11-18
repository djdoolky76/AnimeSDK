#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_ADKHCHNANGF_OFFSET UNITYSDK_OFFSET(0x10444A20)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_BIOCIPIBENI_OFFSET UNITYSDK_OFFSET(0x10443F60)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_JPGNOLEBIIG_OFFSET UNITYSDK_OFFSET(0x10444420)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_NGNNGCCILPH_OFFSET UNITYSDK_OFFSET(0x10443D30)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10443CE0)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_PINLJAOFBMJ_OFFSET UNITYSDK_OFFSET(0x10444260)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x10444A70)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_SETENTITY_OFFSET UNITYSDK_OFFSET(0x10443DE0)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x104441A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIOcclusionChecker_TypeDefinitionIndex = 76069;

	class MonoUIOcclusionChecker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 BLFJILPNDGF; // 0x18
		::System::Single KNMLJNNPILD; // 0x1C
		::UnityEngine::Transform* AFGPKFGNEJD; // 0x20
		::Foundation::Coroutine::CoroutineHandle BELKCKIINHL; // 0x28
		::System::Boolean JIGHAOFDJKM; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Single IBHKAJCEEEC; // 0x30
		::System::Byte _padding1[0x4];
		::Il2CppArray<::UnityEngine::RaycastHit>* BLCCNIODEKM; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetEntity(::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_SETENTITY_OFFSET))(this, KECKGDFIALJ);
		}

		::System::Boolean PINLJAOFBMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_PINLJAOFBMJ_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* ADKHCHNANGF()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_ADKHCHNANGF_OFFSET))(this);
		}

		::System::Void NGNNGCCILPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_NGNNGCCILPH_OFFSET))(this);
		}

		::System::Void PLPONJAKNEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_PLPONJAKNEB_OFFSET))(this);
		}

		::System::Boolean JPGNOLEBIIG(::UnityEngine::Vector3 CKPGOKHECCH)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_JPGNOLEBIIG_OFFSET))(this, CKPGOKHECCH);
		}

		::System::Void BIOCIPIBENI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_BIOCIPIBENI_OFFSET))(this);
		}
	};
}
