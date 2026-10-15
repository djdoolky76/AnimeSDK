#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ConsoleVariableProperty.h"
namespace System { class Action; }
namespace System { class String; }

#define UNITYENGINE_CONSOLEVARIABLEFLOATPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x3C6DB40)
#define UNITYENGINE_CONSOLEVARIABLEFLOATPROPERTY_GET_FLOATVALUE_OFFSET UNITYSDK_OFFSET(0x3C6DB80)
#define UNITYENGINE_CONSOLEVARIABLEFLOATPROPERTY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F3DC790)

namespace UnityEngine
{
	struct alignas(4) ConsoleVariableFloatProperty
	{
		::UnityEngine::ConsoleVariableProperty property; // 0x10
		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEFLOATPROPERTY_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single get_FloatValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEFLOATPROPERTY_GET_FLOATVALUE_OFFSET))(this);
		}

		/*
		static ::System::Single op_Implicit(::UnityEngine::ConsoleVariableFloatProperty a1)
		{
			return ((::System::Single(*)(::UnityEngine::ConsoleVariableFloatProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEFLOATPROPERTY_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

	};
}
