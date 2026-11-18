#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_GETTIMERVALUE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7BDF00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_GETTIMERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BE0A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHadal_GetTimerValue_TypeDefinitionIndex = 77512;

	class LDHadal_GetTimerValue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_GETTIMERVALUE__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::String* key)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_GETTIMERVALUE_INVOKE_OFFSET))(this, key);
		}
	};
}
