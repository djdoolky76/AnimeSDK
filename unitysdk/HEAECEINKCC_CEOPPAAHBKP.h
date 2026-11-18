#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define HEAECEINKCC_CEOPPAAHBKP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x100FB4D0)
#define HEAECEINKCC_CEOPPAAHBKP_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x100FB550)
#define HEAECEINKCC_CEOPPAAHBKP_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x100FB5B0)
#define HEAECEINKCC_CEOPPAAHBKP_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x100FB560)
#define HEAECEINKCC_CEOPPAAHBKP_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x100FB4C0)
#define HEAECEINKCC_CEOPPAAHBKP__CTOR_OFFSET UNITYSDK_OFFSET(0x100FB4B0)

inline static constexpr unsigned int HEAECEINKCC_CEOPPAAHBKP_TypeDefinitionIndex = 64568;

class HEAECEINKCC_CEOPPAAHBKP : public ::System::Object
{
public:
	::System::Func_1<::System::Boolean>* KANJODNFFOI; // 0x10
	::System::Object* IDBEJJEKGDI; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x20

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEAECEINKCC_CEOPPAAHBKP__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_CEOPPAAHBKP_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_CEOPPAAHBKP_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_CEOPPAAHBKP_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_CEOPPAAHBKP_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_CEOPPAAHBKP_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
