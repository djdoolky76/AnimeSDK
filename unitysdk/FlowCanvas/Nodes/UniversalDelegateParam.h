#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ParamDef.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class UniversalDelegate; }

#define FLOWCANVAS_NODES_UNIVERSALDELEGATEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBADEA0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int UniversalDelegateParam_TypeDefinitionIndex = 29679;

	class UniversalDelegateParam : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::UniversalDelegate* referencedDelegate; // 0x10
		::FlowCanvas::Nodes::ParamDef paramDef; // 0x18
		::Il2CppArray<::FlowCanvas::Nodes::UniversalDelegateParam*>* referencedParams; // 0x50
		::System::Int32 paramsArrayCount; // 0x58
		::System::Boolean paramsArrayNeeded; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNIVERSALDELEGATEPARAM__CTOR_OFFSET))(this);
		}
	};
}
