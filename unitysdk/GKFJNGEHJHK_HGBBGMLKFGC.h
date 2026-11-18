#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

class GKFJNGEHJHK;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GKFJNGEHJHK_HGBBGMLKFGC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x179F5120)
#define GKFJNGEHJHK_HGBBGMLKFGC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x179F53C0)
#define GKFJNGEHJHK_HGBBGMLKFGC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x179F5420)
#define GKFJNGEHJHK_HGBBGMLKFGC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x179F53D0)
#define GKFJNGEHJHK_HGBBGMLKFGC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179F5110)
#define GKFJNGEHJHK_HGBBGMLKFGC__CTOR_OFFSET UNITYSDK_OFFSET(0x179F5100)

inline static constexpr unsigned int GKFJNGEHJHK_HGBBGMLKFGC_TypeDefinitionIndex = 51631;

class GKFJNGEHJHK_HGBBGMLKFGC : public ::System::Object
{
public:
	::FlowCanvas::Nodes::Random* MFEPCLGOHPI; // 0x10
	::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>* JPOODFCPNCB; // 0x18
	::GKFJNGEHJHK* KLHPEBKNIFB; // 0x20
	::FlowCanvas::Flow DACDAPIGBCB; // 0x28
	::System::Object* IDBEJJEKGDI; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x58
	::System::Boolean GPBPACLNEJP; // 0x5C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GKFJNGEHJHK_HGBBGMLKFGC__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFJNGEHJHK_HGBBGMLKFGC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFJNGEHJHK_HGBBGMLKFGC_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFJNGEHJHK_HGBBGMLKFGC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFJNGEHJHK_HGBBGMLKFGC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFJNGEHJHK_HGBBGMLKFGC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
