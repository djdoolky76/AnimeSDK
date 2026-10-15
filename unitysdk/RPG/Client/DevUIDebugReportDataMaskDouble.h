#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_DEVUIDEBUGREPORTDATAMASKDOUBLE_CTOR_OFFSET UNITYSDK_OFFSET(0xCBF1A50)

namespace RPG::Client
{
	class DevUIDebugReportDataMaskDouble : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* target; // 0x10
		::UnityEngine::GameObject* parent; // 0x18
		::System::Void _ctor(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVUIDEBUGREPORTDATAMASKDOUBLE_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
