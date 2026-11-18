#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

class GKFJNGEHJHK;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class SwitchBool; }

#define GKFJNGEHJHK_GIFJOHLFLEH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17A0E740)
#define GKFJNGEHJHK_GIFJOHLFLEH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17A0E960)
#define GKFJNGEHJHK_GIFJOHLFLEH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17A0E9C0)
#define GKFJNGEHJHK_GIFJOHLFLEH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17A0E970)
#define GKFJNGEHJHK_GIFJOHLFLEH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A0E730)
#define GKFJNGEHJHK_GIFJOHLFLEH__CTOR_OFFSET UNITYSDK_OFFSET(0x17A0E720)

inline static constexpr unsigned int GKFJNGEHJHK_GIFJOHLFLEH_TypeDefinitionIndex = 51633;

class GKFJNGEHJHK_GIFJOHLFLEH : public ::System::Object
{
public:
	::FlowCanvas::Nodes::SwitchBool* HBAAOGGBMPG; // 0x10
	::FlowCanvas::FlowOutput* AJMCCOEAIFE; // 0x18
	::FlowCanvas::Flow DACDAPIGBCB; // 0x20
	::System::Object* IDBEJJEKGDI; // 0x48
	::GKFJNGEHJHK* KLHPEBKNIFB; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x58
	::System::Boolean GPBPACLNEJP; // 0x5C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GKFJNGEHJHK_GIFJOHLFLEH__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFJNGEHJHK_GIFJOHLFLEH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFJNGEHJHK_GIFJOHLFLEH_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFJNGEHJHK_GIFJOHLFLEH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFJNGEHJHK_GIFJOHLFLEH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFJNGEHJHK_GIFJOHLFLEH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
