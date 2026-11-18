#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAFPCPPDJOJ;
class IPFEGINHIGG;
namespace System { class Action; }

#define CAFPCPPDJOJ_CMEMAPLBLHC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1141A050)
#define CAFPCPPDJOJ_CMEMAPLBLHC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1141A1D0)
#define CAFPCPPDJOJ_CMEMAPLBLHC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1141A230)
#define CAFPCPPDJOJ_CMEMAPLBLHC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1141A1E0)
#define CAFPCPPDJOJ_CMEMAPLBLHC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1141A040)
#define CAFPCPPDJOJ_CMEMAPLBLHC__CTOR_OFFSET UNITYSDK_OFFSET(0x1141A030)

inline static constexpr unsigned int CAFPCPPDJOJ_CMEMAPLBLHC_TypeDefinitionIndex = 53821;

class CAFPCPPDJOJ_CMEMAPLBLHC : public ::System::Object
{
public:
	::CAFPCPPDJOJ* KLHPEBKNIFB; // 0x10
	::System::Action* GCIBHLCBGBN; // 0x18
	::IPFEGINHIGG* OGMKFPIJHKM; // 0x20
	::System::Single IDBEJJEKGDI; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x2C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CAFPCPPDJOJ_CMEMAPLBLHC__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFPCPPDJOJ_CMEMAPLBLHC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFPCPPDJOJ_CMEMAPLBLHC_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFPCPPDJOJ_CMEMAPLBLHC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFPCPPDJOJ_CMEMAPLBLHC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFPCPPDJOJ_CMEMAPLBLHC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
