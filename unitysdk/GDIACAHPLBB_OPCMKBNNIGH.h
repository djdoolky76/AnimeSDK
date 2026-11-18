#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define GDIACAHPLBB_OPCMKBNNIGH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x189F4DD0)
#define GDIACAHPLBB_OPCMKBNNIGH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x189F4E70)
#define GDIACAHPLBB_OPCMKBNNIGH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x189F4ED0)
#define GDIACAHPLBB_OPCMKBNNIGH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x189F4E80)
#define GDIACAHPLBB_OPCMKBNNIGH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x189F4DC0)
#define GDIACAHPLBB_OPCMKBNNIGH__CTOR_OFFSET UNITYSDK_OFFSET(0x189F4DB0)

inline static constexpr unsigned int GDIACAHPLBB_OPCMKBNNIGH_TypeDefinitionIndex = 73276;

class GDIACAHPLBB_OPCMKBNNIGH : public ::System::Object
{
public:
	::System::Object* IDBEJJEKGDI; // 0x10
	::System::Action* DMPEOJCCCLO; // 0x18
	::System::Single AEDOPFKKLCO; // 0x20
	::System::Single FNIOPKPHDEH; // 0x24
	::System::Int32 MDPILDGFNHN; // 0x28

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GDIACAHPLBB_OPCMKBNNIGH__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_OPCMKBNNIGH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_OPCMKBNNIGH_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_OPCMKBNNIGH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_OPCMKBNNIGH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_OPCMKBNNIGH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
