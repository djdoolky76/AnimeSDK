#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBOHDKKBJKK;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define FBOHDKKBJKK_GDHHGKBGJGL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11CF4660)
#define FBOHDKKBJKK_GDHHGKBGJGL_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_INT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11CF49D0)
#define FBOHDKKBJKK_GDHHGKBGJGL_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_INT32__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11CF4920)
#define FBOHDKKBJKK_GDHHGKBGJGL_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11CF4A60)
#define FBOHDKKBJKK_GDHHGKBGJGL_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11CF4980)
#define FBOHDKKBJKK_GDHHGKBGJGL_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11CF4930)
#define FBOHDKKBJKK_GDHHGKBGJGL_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11CF4650)
#define FBOHDKKBJKK_GDHHGKBGJGL__CTOR_OFFSET UNITYSDK_OFFSET(0x11CF4630)

inline static constexpr unsigned int FBOHDKKBJKK_GDHHGKBGJGL_TypeDefinitionIndex = 73070;

class FBOHDKKBJKK_GDHHGKBGJGL : public ::System::Object
{
public:
	::FBOHDKKBJKK* KLHPEBKNIFB; // 0x10
	::System::Int32 ENDCOKIMKFM; // 0x18
	::System::Int32 BNJIKOEADCO; // 0x1C
	::System::Int32 IDBEJJEKGDI; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x24
	::System::Int32 KCGJLNHPDIE; // 0x28
	::System::Int32 IPPAEALJJIG; // 0x2C
	::System::Int32 BDEDDEGJFKL; // 0x30
	::System::Int32 CHIFPJGLFPK; // 0x34
	::System::Int32 EMAIAAIAGPP; // 0x38
	::System::Int32 PCEFKJHBDDF; // 0x3C
	::System::Int32 FPDDAGHMOJB; // 0x40
	::System::Int32 JCMDJLJMMEJ; // 0x44
	::System::Int32 AALJPNCKFLM; // 0x48
	::System::Int32 LOIHOHKCAHC; // 0x4C
	::System::Int32 LKECIIDFBBH; // 0x50
	::System::Int32 HLHKAKJNAHG; // 0x54

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_GDHHGKBGJGL__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_GDHHGKBGJGL_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_GDHHGKBGJGL_MOVENEXT_OFFSET))(this);
	}

	::System::Int32 System_Collections_Generic_IEnumerator_System_Int32__get_Current()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_GDHHGKBGJGL_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_INT32__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_GDHHGKBGJGL_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_GDHHGKBGJGL_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Int32>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_GDHHGKBGJGL_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_INT32__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_GDHHGKBGJGL_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
