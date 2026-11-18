#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREADHOLLOWPARAM_INVOKE_OFFSET UNITYSDK_OFFSET(0x16238B60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADHOLLOWPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x16238CB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDReadHollowParam_TypeDefinitionIndex = 53496;

	class LDReadHollowParam
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADHOLLOWPARAM__CTOR_OFFSET))(this);
		}

		::System::Object* Invoke(::System::String* paramName)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADHOLLOWPARAM_INVOKE_OFFSET))(this, paramName);
		}
	};
}
