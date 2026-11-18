#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define KKJKAKMOCJC_DMMDAJKPGAA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17915A40)
#define KKJKAKMOCJC_DMMDAJKPGAA_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17915D40)
#define KKJKAKMOCJC_DMMDAJKPGAA_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17915DA0)
#define KKJKAKMOCJC_DMMDAJKPGAA_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17915D50)
#define KKJKAKMOCJC_DMMDAJKPGAA_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17915A30)
#define KKJKAKMOCJC_DMMDAJKPGAA__CTOR_OFFSET UNITYSDK_OFFSET(0x17915A20)

inline static constexpr unsigned int KKJKAKMOCJC_DMMDAJKPGAA_TypeDefinitionIndex = 66230;

class KKJKAKMOCJC_DMMDAJKPGAA : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Object* IDBEJJEKGDI; // 0x18
	::System::Single HBFKHANEEND; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x24

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_DMMDAJKPGAA__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_DMMDAJKPGAA_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_DMMDAJKPGAA_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_DMMDAJKPGAA_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_DMMDAJKPGAA_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_DMMDAJKPGAA_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
