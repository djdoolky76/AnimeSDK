#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DIMBOKENEMI;
class LDJDLNCAOBC_MPIPDAINIPC;
namespace MoleMole::Battle { class Entity; }

#define LDJDLNCAOBC_PLGENMBNIBI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1580FA50)
#define LDJDLNCAOBC_PLGENMBNIBI_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15810160)
#define LDJDLNCAOBC_PLGENMBNIBI_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x158101C0)
#define LDJDLNCAOBC_PLGENMBNIBI_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15810170)
#define LDJDLNCAOBC_PLGENMBNIBI_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1580FA40)
#define LDJDLNCAOBC_PLGENMBNIBI__CTOR_OFFSET UNITYSDK_OFFSET(0x1580FA30)

inline static constexpr unsigned int LDJDLNCAOBC_PLGENMBNIBI_TypeDefinitionIndex = 60085;

class LDJDLNCAOBC_PLGENMBNIBI : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10
	::DIMBOKENEMI* LJPIIPLIJEO; // 0x18
	::LDJDLNCAOBC_MPIPDAINIPC* PGDOJBDJBOL; // 0x20
	::System::Single IDBEJJEKGDI; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x2C
	::System::Boolean BFDIIEPICLF; // 0x30
	::System::Byte _padding0[0x3];
	::System::Single APBNGHKCCJF; // 0x34

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDJDLNCAOBC_PLGENMBNIBI__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJDLNCAOBC_PLGENMBNIBI_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJDLNCAOBC_PLGENMBNIBI_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJDLNCAOBC_PLGENMBNIBI_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJDLNCAOBC_PLGENMBNIBI_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJDLNCAOBC_PLGENMBNIBI_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
