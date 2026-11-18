#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AOKFPNKJOON_FPDGBMNMEOM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13600B30)
#define AOKFPNKJOON_FPDGBMNMEOM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13600CC0)
#define AOKFPNKJOON_FPDGBMNMEOM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13600D20)
#define AOKFPNKJOON_FPDGBMNMEOM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x13600CD0)
#define AOKFPNKJOON_FPDGBMNMEOM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13600B20)
#define AOKFPNKJOON_FPDGBMNMEOM__CTOR_OFFSET UNITYSDK_OFFSET(0x13600B10)

inline static constexpr unsigned int AOKFPNKJOON_FPDGBMNMEOM_TypeDefinitionIndex = 51458;

class AOKFPNKJOON_FPDGBMNMEOM : public ::System::Object
{
public:
	::System::Object* IDBEJJEKGDI; // 0x10
	::System::Int32 MDPILDGFNHN; // 0x18
	::System::Single MLGLAFPHBGI; // 0x1C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AOKFPNKJOON_FPDGBMNMEOM__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_FPDGBMNMEOM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_FPDGBMNMEOM_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_FPDGBMNMEOM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_FPDGBMNMEOM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_FPDGBMNMEOM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
