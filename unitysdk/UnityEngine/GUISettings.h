#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

#define UNITYENGINE_GUISETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x4195A10)

namespace UnityEngine
{
	inline static constexpr unsigned int GUISettings_TypeDefinitionIndex = 20109;

	class GUISettings : public ::System::Object
	{
	public:
		::System::Boolean m_DoubleClickSelectsWord; // 0x10
		::System::Boolean m_TripleClickSelectsLine; // 0x11
		::System::Byte _padding0[0x2];
		::UnityEngine::E46B881AA2636190 m_CursorColor; // 0x14
		::System::Single m_CursorFlashSpeed; // 0x24
		::UnityEngine::E46B881AA2636190 m_SelectionColor; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISETTINGS__CTOR_OFFSET))(this);
		}
	};
}
