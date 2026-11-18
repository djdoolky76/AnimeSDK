#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EHOFCIGBFBA;
class MonoUITableScrollV2;

#define EHOFCIGBFBA_ALMGPLLBGCG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xFE0C750)
#define EHOFCIGBFBA_ALMGPLLBGCG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFE0CC10)
#define EHOFCIGBFBA_ALMGPLLBGCG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFE0CC70)
#define EHOFCIGBFBA_ALMGPLLBGCG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xFE0CC20)
#define EHOFCIGBFBA_ALMGPLLBGCG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFE0C740)
#define EHOFCIGBFBA_ALMGPLLBGCG__CTOR_OFFSET UNITYSDK_OFFSET(0xFE0C730)

inline static constexpr unsigned int EHOFCIGBFBA_ALMGPLLBGCG_TypeDefinitionIndex = 52221;

class EHOFCIGBFBA_ALMGPLLBGCG : public ::System::Object
{
public:
	::EHOFCIGBFBA* KLHPEBKNIFB; // 0x10
	::MonoUITableScrollV2* PBBCLJKCAPP; // 0x18
	::System::Int32 LDKKHMEBPEH; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x24
	::System::Single IDBEJJEKGDI; // 0x28

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_ALMGPLLBGCG__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_ALMGPLLBGCG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_ALMGPLLBGCG_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_ALMGPLLBGCG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_ALMGPLLBGCG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_ALMGPLLBGCG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
