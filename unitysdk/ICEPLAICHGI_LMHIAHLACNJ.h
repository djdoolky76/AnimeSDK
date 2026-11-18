#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ICEPLAICHGI;
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class CustomYieldInstruction; }

#define ICEPLAICHGI_LMHIAHLACNJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10130E10)
#define ICEPLAICHGI_LMHIAHLACNJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x101314F0)
#define ICEPLAICHGI_LMHIAHLACNJ_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10131550)
#define ICEPLAICHGI_LMHIAHLACNJ_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10131500)
#define ICEPLAICHGI_LMHIAHLACNJ_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10130E00)
#define ICEPLAICHGI_LMHIAHLACNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10130DF0)

inline static constexpr unsigned int ICEPLAICHGI_LMHIAHLACNJ_TypeDefinitionIndex = 79074;

class ICEPLAICHGI_LMHIAHLACNJ : public ::System::Object
{
public:
	::System::Object* IDBEJJEKGDI; // 0x10
	::UnityEngine::CustomYieldInstruction* IFFOOMCAKNB; // 0x18
	::ICEPLAICHGI* KLHPEBKNIFB; // 0x20
	::System::Collections::IEnumerator* LBDDOMFAJMK; // 0x28
	::System::Collections::IEnumerator* ODGELILOEPE; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICEPLAICHGI_LMHIAHLACNJ__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICEPLAICHGI_LMHIAHLACNJ_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICEPLAICHGI_LMHIAHLACNJ_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICEPLAICHGI_LMHIAHLACNJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICEPLAICHGI_LMHIAHLACNJ_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICEPLAICHGI_LMHIAHLACNJ_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
