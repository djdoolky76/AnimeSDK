#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NNHBCNLBCFF_LMBLHGKFCGE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE1AB340)
#define NNHBCNLBCFF_LMBLHGKFCGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE1AB4A0)
#define NNHBCNLBCFF_LMBLHGKFCGE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE1AB500)
#define NNHBCNLBCFF_LMBLHGKFCGE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xE1AB4B0)
#define NNHBCNLBCFF_LMBLHGKFCGE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE1AB330)
#define NNHBCNLBCFF_LMBLHGKFCGE__CTOR_OFFSET UNITYSDK_OFFSET(0xE1AB320)

inline static constexpr unsigned int NNHBCNLBCFF_LMBLHGKFCGE_TypeDefinitionIndex = 85184;

class NNHBCNLBCFF_LMBLHGKFCGE : public ::System::Object
{
public:
	::System::Object* IDBEJJEKGDI; // 0x10
	::System::Int32 MDPILDGFNHN; // 0x18

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NNHBCNLBCFF_LMBLHGKFCGE__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHBCNLBCFF_LMBLHGKFCGE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHBCNLBCFF_LMBLHGKFCGE_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHBCNLBCFF_LMBLHGKFCGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHBCNLBCFF_LMBLHGKFCGE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHBCNLBCFF_LMBLHGKFCGE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
