#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBOHDKKBJKK;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define FBOHDKKBJKK_AKGHBHPBJED_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0x10F5A3F0)
#define FBOHDKKBJKK_AKGHBHPBJED_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10F5A4D0)
#define FBOHDKKBJKK_AKGHBHPBJED_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_INT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x10F5A970)
#define FBOHDKKBJKK_AKGHBHPBJED_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_INT32__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10F5A8C0)
#define FBOHDKKBJKK_AKGHBHPBJED_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x10F5AA10)
#define FBOHDKKBJKK_AKGHBHPBJED_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10F5A920)
#define FBOHDKKBJKK_AKGHBHPBJED_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10F5A8D0)
#define FBOHDKKBJKK_AKGHBHPBJED_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10F5A300)
#define FBOHDKKBJKK_AKGHBHPBJED__CTOR_OFFSET UNITYSDK_OFFSET(0x10F5A2E0)

inline static constexpr unsigned int FBOHDKKBJKK_AKGHBHPBJED_TypeDefinitionIndex = 73068;

class FBOHDKKBJKK_AKGHBHPBJED : public ::System::Object
{
public:
	::FBOHDKKBJKK* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::IEnumerator_1<::System::Int32>* CNCDBBAMLPL; // 0x18
	::System::Int32 AALJPNCKFLM; // 0x20
	::System::Int32 IPPAEALJJIG; // 0x24
	::System::Int32 HFDNIDBIDON; // 0x28
	::System::Int32 FPDDAGHMOJB; // 0x2C
	::System::Int32 BDEDDEGJFKL; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x34
	::System::Int32 HLHKAKJNAHG; // 0x38
	::System::Int32 PCEFKJHBDDF; // 0x3C
	::System::Int32 CHIFPJGLFPK; // 0x40
	::System::Int32 IDBEJJEKGDI; // 0x44
	::System::Int32 JCMDJLJMMEJ; // 0x48
	::System::Int32 BNJIKOEADCO; // 0x4C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_AKGHBHPBJED__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_AKGHBHPBJED_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_AKGHBHPBJED_MOVENEXT_OFFSET))(this);
	}

	::System::Int32 System_Collections_Generic_IEnumerator_System_Int32__get_Current()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_AKGHBHPBJED_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_INT32__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_AKGHBHPBJED_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_AKGHBHPBJED_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Int32>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_AKGHBHPBJED_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_INT32__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_AKGHBHPBJED_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void JPCPBBAMDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOHDKKBJKK_AKGHBHPBJED_JPCPBBAMDGJ_OFFSET))(this);
	}
};
