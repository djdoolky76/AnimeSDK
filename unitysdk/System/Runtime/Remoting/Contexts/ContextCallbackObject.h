#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ContextBoundObject.h"
namespace System::Runtime::Remoting::Contexts { class CrossContextDelegate; }

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTCALLBACKOBJECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2DC450)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTCALLBACKOBJECT_DOCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C2DC460)

namespace System::Runtime::Remoting::Contexts
{
	class ContextCallbackObject : public ::System::ContextBoundObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTCALLBACKOBJECT_CTOR_OFFSET))(this);
		}

		::System::Void DoCallBack(::System::Runtime::Remoting::Contexts::CrossContextDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Contexts::CrossContextDelegate*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTCALLBACKOBJECT_DOCALLBACK_OFFSET))(this, a1);
		}

	};
}
