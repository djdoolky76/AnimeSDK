#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NOKIMDGBFKI_HOHKMOBLJPC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13774F20)
#define NOKIMDGBFKI_HOHKMOBLJPC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13775220)
#define NOKIMDGBFKI_HOHKMOBLJPC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13775280)
#define NOKIMDGBFKI_HOHKMOBLJPC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x13775230)
#define NOKIMDGBFKI_HOHKMOBLJPC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13774F10)
#define NOKIMDGBFKI_HOHKMOBLJPC__CTOR_OFFSET UNITYSDK_OFFSET(0x13774F00)

inline static constexpr unsigned int NOKIMDGBFKI_HOHKMOBLJPC_TypeDefinitionIndex = 60994;

class NOKIMDGBFKI_HOHKMOBLJPC : public ::System::Object
{
public:
	::System::Int32 MDPILDGFNHN; // 0x10
	::System::Single IDBEJJEKGDI; // 0x14

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NOKIMDGBFKI_HOHKMOBLJPC__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKIMDGBFKI_HOHKMOBLJPC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKIMDGBFKI_HOHKMOBLJPC_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKIMDGBFKI_HOHKMOBLJPC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKIMDGBFKI_HOHKMOBLJPC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKIMDGBFKI_HOHKMOBLJPC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
