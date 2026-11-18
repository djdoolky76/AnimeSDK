#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class CBHALHKAKLC;
class EKABGIOPGGF;
namespace System { class String; }

#define CBHALHKAKLC_HCMNLJLDMEB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1152E370)
#define CBHALHKAKLC_HCMNLJLDMEB_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1152F2E0)
#define CBHALHKAKLC_HCMNLJLDMEB_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1152F340)
#define CBHALHKAKLC_HCMNLJLDMEB_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1152F2F0)
#define CBHALHKAKLC_HCMNLJLDMEB_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1152E360)
#define CBHALHKAKLC_HCMNLJLDMEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1152E350)

inline static constexpr unsigned int CBHALHKAKLC_HCMNLJLDMEB_TypeDefinitionIndex = 55873;

class CBHALHKAKLC_HCMNLJLDMEB : public ::System::Object
{
public:
	::CBHALHKAKLC* KLHPEBKNIFB; // 0x10
	::EKABGIOPGGF* DDKICDNCJCF; // 0x18
	::Foundation::AssetRequestHandle BKPHFEFCHEK; // 0x20
	::System::String* KDGJBEHOEAC; // 0x40
	::System::String* KJOLCGIENCJ; // 0x48
	::Foundation::AssetRequestHandle DBAEHFAKDOF; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x70
	::System::Single IDBEJJEKGDI; // 0x74

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CBHALHKAKLC_HCMNLJLDMEB__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_HCMNLJLDMEB_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_HCMNLJLDMEB_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_HCMNLJLDMEB_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_HCMNLJLDMEB_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_HCMNLJLDMEB_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
