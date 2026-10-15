#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PAPER_CTOR_OFFSET UNITYSDK_OFFSET(0xDA72520)

namespace RPG::Client
{
	class Paper : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Front; // 0x10
		::UnityEngine::GameObject* Back; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAPER_CTOR_OFFSET))(this);
		}

	};
}
