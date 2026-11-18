#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PNJDGHBEMLK_OGFPPNDGNJG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D1F5850)
#define PNJDGHBEMLK_OGFPPNDGNJG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D1F58E0)
#define PNJDGHBEMLK_OGFPPNDGNJG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D1F5940)
#define PNJDGHBEMLK_OGFPPNDGNJG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D1F58F0)
#define PNJDGHBEMLK_OGFPPNDGNJG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D1F5840)
#define PNJDGHBEMLK_OGFPPNDGNJG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F5830)

inline static constexpr unsigned int PNJDGHBEMLK_OGFPPNDGNJG_TypeDefinitionIndex = 64965;

class PNJDGHBEMLK_OGFPPNDGNJG : public ::System::Object
{
public:
	::System::Object* IDBEJJEKGDI; // 0x10
	::System::Action* GJBHEJGENMI; // 0x18
	::System::Single JOFGIANGHMK; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x24

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_OGFPPNDGNJG__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_OGFPPNDGNJG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_OGFPPNDGNJG_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_OGFPPNDGNJG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_OGFPPNDGNJG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_OGFPPNDGNJG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
