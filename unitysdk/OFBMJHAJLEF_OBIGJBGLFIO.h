#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define OFBMJHAJLEF_OBIGJBGLFIO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xFD75640)
#define OFBMJHAJLEF_OBIGJBGLFIO_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFD75760)
#define OFBMJHAJLEF_OBIGJBGLFIO_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFD757C0)
#define OFBMJHAJLEF_OBIGJBGLFIO_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xFD75770)
#define OFBMJHAJLEF_OBIGJBGLFIO_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFD75630)
#define OFBMJHAJLEF_OBIGJBGLFIO__CTOR_OFFSET UNITYSDK_OFFSET(0xFD75620)

inline static constexpr unsigned int OFBMJHAJLEF_OBIGJBGLFIO_TypeDefinitionIndex = 56493;

class OFBMJHAJLEF_OBIGJBGLFIO : public ::System::Object
{
public:
	::System::Action* HKEBHFKHBCC; // 0x10
	::System::Single IDBEJJEKGDI; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x1C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFBMJHAJLEF_OBIGJBGLFIO__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBMJHAJLEF_OBIGJBGLFIO_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBMJHAJLEF_OBIGJBGLFIO_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBMJHAJLEF_OBIGJBGLFIO_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBMJHAJLEF_OBIGJBGLFIO_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBMJHAJLEF_OBIGJBGLFIO_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
