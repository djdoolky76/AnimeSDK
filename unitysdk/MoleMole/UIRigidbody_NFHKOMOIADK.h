#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRigidbody; }

#define MOLEMOLE_UIRIGIDBODY_NFHKOMOIADK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16785320)
#define MOLEMOLE_UIRIGIDBODY_NFHKOMOIADK_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x167853C0)
#define MOLEMOLE_UIRIGIDBODY_NFHKOMOIADK_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16785420)
#define MOLEMOLE_UIRIGIDBODY_NFHKOMOIADK_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x167853D0)
#define MOLEMOLE_UIRIGIDBODY_NFHKOMOIADK_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16785310)
#define MOLEMOLE_UIRIGIDBODY_NFHKOMOIADK__CTOR_OFFSET UNITYSDK_OFFSET(0x16785300)

namespace MoleMole
{
	inline static constexpr unsigned int UIRigidbody_NFHKOMOIADK_TypeDefinitionIndex = 91373;

	class UIRigidbody_NFHKOMOIADK : public ::System::Object
	{
	public:
		::MoleMole::UIRigidbody* KLHPEBKNIFB; // 0x10
		::System::Object* IDBEJJEKGDI; // 0x18
		::System::Single KMKBJKOEBMF; // 0x20
		::System::Int32 MDPILDGFNHN; // 0x24

		::System::Void _ctor(::System::Int32 MDPILDGFNHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_NFHKOMOIADK__CTOR_OFFSET))(this, MDPILDGFNHN);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_NFHKOMOIADK_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_NFHKOMOIADK_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_NFHKOMOIADK_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_NFHKOMOIADK_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_NFHKOMOIADK_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
