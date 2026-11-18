#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoHintArrow; }

#define MOLEMOLE_MONOHINTARROW_NEKGCMFJEMJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A7095F0)
#define MOLEMOLE_MONOHINTARROW_NEKGCMFJEMJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A709840)
#define MOLEMOLE_MONOHINTARROW_NEKGCMFJEMJ_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A7098A0)
#define MOLEMOLE_MONOHINTARROW_NEKGCMFJEMJ_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A709850)
#define MOLEMOLE_MONOHINTARROW_NEKGCMFJEMJ_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7095E0)
#define MOLEMOLE_MONOHINTARROW_NEKGCMFJEMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7095D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoHintArrow_NEKGCMFJEMJ_TypeDefinitionIndex = 38616;

	class MonoHintArrow_NEKGCMFJEMJ : public ::System::Object
	{
	public:
		::MoleMole::MonoHintArrow* KLHPEBKNIFB; // 0x10
		::System::Object* IDBEJJEKGDI; // 0x18
		::System::Int32 MDPILDGFNHN; // 0x20
		::System::Boolean MBJDMKCGOCK; // 0x24

		::System::Void _ctor(::System::Int32 MDPILDGFNHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_NEKGCMFJEMJ__CTOR_OFFSET))(this, MDPILDGFNHN);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_NEKGCMFJEMJ_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_NEKGCMFJEMJ_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_NEKGCMFJEMJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_NEKGCMFJEMJ_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_NEKGCMFJEMJ_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
