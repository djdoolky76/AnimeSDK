#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_EDITORIMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x17BC1B80)

namespace RPG::Client
{
	inline static constexpr unsigned int EditorImage_TypeDefinitionIndex = 74606;

	class EditorImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EDITORIMAGE_CTOR_OFFSET))(this);
		}

	};
}
