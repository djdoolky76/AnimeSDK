#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JDFOLIHPKIC;
namespace System { class Action; }

#define JDFOLIHPKIC_JDGLBEMENOG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17B1FAD0)
#define JDFOLIHPKIC_JDGLBEMENOG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17B1FB80)
#define JDFOLIHPKIC_JDGLBEMENOG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17B1FBE0)
#define JDFOLIHPKIC_JDGLBEMENOG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17B1FB90)
#define JDFOLIHPKIC_JDGLBEMENOG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B1FAC0)
#define JDFOLIHPKIC_JDGLBEMENOG__CTOR_OFFSET UNITYSDK_OFFSET(0x17B1FAB0)

inline static constexpr unsigned int JDFOLIHPKIC_JDGLBEMENOG_TypeDefinitionIndex = 68219;

class JDFOLIHPKIC_JDGLBEMENOG : public ::System::Object
{
public:
	::System::Object* IDBEJJEKGDI; // 0x10
	::System::Action* HKEBHFKHBCC; // 0x18
	::JDFOLIHPKIC* KLHPEBKNIFB; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x28

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JDFOLIHPKIC_JDGLBEMENOG__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFOLIHPKIC_JDGLBEMENOG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFOLIHPKIC_JDGLBEMENOG_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFOLIHPKIC_JDGLBEMENOG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFOLIHPKIC_JDGLBEMENOG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFOLIHPKIC_JDGLBEMENOG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
