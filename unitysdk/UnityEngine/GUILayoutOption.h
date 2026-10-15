#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GUILayoutOption_Type.h"
namespace System { class Object; }

#define UNITYENGINE_GUILAYOUTOPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F456B40)

namespace UnityEngine
{
	class GUILayoutOption : public ::System::Object
	{
	public:
		::UnityEngine::GUILayoutOption_Type type; // 0x10
		::System::Byte _padding0[0x4];
		::System::Object* value; // 0x18
		::System::Void _ctor(::UnityEngine::GUILayoutOption_Type a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUILayoutOption_Type, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTOPTION_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
