#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRigidbody; }

#define MOLEMOLE_UIRIGIDBODY_EMOLNPMBKHM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x166C8520)
#define MOLEMOLE_UIRIGIDBODY_EMOLNPMBKHM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x166C85B0)
#define MOLEMOLE_UIRIGIDBODY_EMOLNPMBKHM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x166C8610)
#define MOLEMOLE_UIRIGIDBODY_EMOLNPMBKHM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x166C85C0)
#define MOLEMOLE_UIRIGIDBODY_EMOLNPMBKHM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x166C8510)
#define MOLEMOLE_UIRIGIDBODY_EMOLNPMBKHM__CTOR_OFFSET UNITYSDK_OFFSET(0x166C8500)

namespace MoleMole
{
	inline static constexpr unsigned int UIRigidbody_EMOLNPMBKHM_TypeDefinitionIndex = 91375;

	class UIRigidbody_EMOLNPMBKHM : public ::System::Object
	{
	public:
		::System::Object* IDBEJJEKGDI; // 0x10
		::MoleMole::UIRigidbody* KLHPEBKNIFB; // 0x18
		::System::Int32 MDPILDGFNHN; // 0x20

		::System::Void _ctor(::System::Int32 MDPILDGFNHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_EMOLNPMBKHM__CTOR_OFFSET))(this, MDPILDGFNHN);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_EMOLNPMBKHM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_EMOLNPMBKHM_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_EMOLNPMBKHM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_EMOLNPMBKHM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_EMOLNPMBKHM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
