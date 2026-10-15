#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::Motions { class MonoTextMotion; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_ASIDEDIALOG_ISVALID_OFFSET UNITYSDK_OFFSET(0xEC550)

namespace RPG::Client
{
	struct alignas(8) MonoSpineStoryController_AsideDialog
	{
		::UnityEngine::GameObject* root; // 0x10
		::RPG::Client::LocalizedText* name; // 0x18
		::RPG::Client::Motions::MonoTextMotion* text; // 0x20
		::UnityEngine::Animation* wait; // 0x28
		::UnityEngine::Animation* next; // 0x30
		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_ASIDEDIALOG_ISVALID_OFFSET))(this);
		}

	};
}
