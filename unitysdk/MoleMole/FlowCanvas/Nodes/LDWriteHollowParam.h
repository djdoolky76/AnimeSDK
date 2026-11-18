#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWRITEHOLLOWPARAM_INVOKE_OFFSET UNITYSDK_OFFSET(0x135771F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWRITEHOLLOWPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x135773C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWriteHollowParam_TypeDefinitionIndex = 52909;

	class LDWriteHollowParam
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWRITEHOLLOWPARAM__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::String* paramName, ::System::Object* paramValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWRITEHOLLOWPARAM_INVOKE_OFFSET))(this, paramName, paramValue);
		}
	};
}
