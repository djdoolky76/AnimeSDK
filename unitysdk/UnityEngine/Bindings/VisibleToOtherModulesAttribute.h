#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define UNITYENGINE_BINDINGS_VISIBLETOOTHERMODULESATTRIBUTE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F49D2B0)
#define UNITYENGINE_BINDINGS_VISIBLETOOTHERMODULESATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F49D2A0)

namespace UnityEngine::Bindings
{
	class VisibleToOtherModulesAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_VISIBLETOOTHERMODULESATTRIBUTE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_VISIBLETOOTHERMODULESATTRIBUTE_CTOR_1_OFFSET))(this, a1);
		}

	};
}
