#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OLMNKHKIJKL;

#define OMINJHFFAJI_GPIFDGDKPIF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1294DEB0)
#define OMINJHFFAJI_GPIFDGDKPIF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1294E280)
#define OMINJHFFAJI_GPIFDGDKPIF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1294E2E0)
#define OMINJHFFAJI_GPIFDGDKPIF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1294E290)
#define OMINJHFFAJI_GPIFDGDKPIF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1294DEA0)
#define OMINJHFFAJI_GPIFDGDKPIF__CTOR_OFFSET UNITYSDK_OFFSET(0x1294DE90)

inline static constexpr unsigned int OMINJHFFAJI_GPIFDGDKPIF_TypeDefinitionIndex = 56957;

class OMINJHFFAJI_GPIFDGDKPIF : public ::System::Object
{
public:
	::OLMNKHKIJKL* JPKIIGOAAMB; // 0x10
	::System::Single ECKOKKHCMOI; // 0x18
	::System::Boolean FBILHHBPEHD; // 0x1C
	::System::Byte _padding0[0x3];
	::System::Single DIEHHNCKDPI; // 0x20
	::System::Single FFHIDGOAAOG; // 0x24
	::System::Single PNJGDLODNAF; // 0x28
	::System::Single MMNFHKBFJNP; // 0x2C
	::System::Single IDBEJJEKGDI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x34

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OMINJHFFAJI_GPIFDGDKPIF__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINJHFFAJI_GPIFDGDKPIF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINJHFFAJI_GPIFDGDKPIF_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINJHFFAJI_GPIFDGDKPIF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINJHFFAJI_GPIFDGDKPIF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINJHFFAJI_GPIFDGDKPIF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
