#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }

#define RPG_CLIENT_LINERENDERERCONTROLMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xD3F8A20)
#define RPG_CLIENT_LINERENDERERCONTROLMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xD3F89D0)

namespace RPG::Client
{
	inline static constexpr unsigned int LineRendererControlMonoPlugin_TypeDefinitionIndex = 70645;

	class LineRendererControlMonoPlugin
	{
	public:
		::UnityEngine::LineRenderer* Line; // 0x30
		::UnityEngine::GameObject* SourceObj; // 0x38
		::UnityEngine::GameObject* TargetObj; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINERENDERERCONTROLMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINERENDERERCONTROLMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
