#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class PureReflectedExtractorNode; }
namespace System::Reflection { class MethodInfo; }

#define FLOWCANVAS_NODES_PUREREFLECTEDEXTRACTORNODE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF87DE0)
#define FLOWCANVAS_NODES_PUREREFLECTEDEXTRACTORNODE___C__DISPLAYCLASS4_0__GETPORTHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0x1EF87DF0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int PureReflectedExtractorNode___c__DisplayClass4_0_TypeDefinitionIndex = 29451;

	class PureReflectedExtractorNode___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* info; // 0x10
		::FlowCanvas::Nodes::PureReflectedExtractorNode* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDEXTRACTORNODE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Object* _GetPortHandler_b__0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDEXTRACTORNODE___C__DISPLAYCLASS4_0__GETPORTHANDLER_B__0_OFFSET))(this);
		}
	};
}
