#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"
class AkCallbackInfo;
namespace UnityEngine { class GameObject; }

#define AKEVENTCALLBACKMSG_CTOR_OFFSET UNITYSDK_OFFSET(0x2083FDD0)

inline static constexpr unsigned int AkEventCallbackMsg_TypeDefinitionIndex = 45996;

	class AkEventCallbackMsg : public ::System::Object
	{
	public:
		::AkCallbackInfo* info; // 0x10
		::UnityEngine::GameObject* sender; // 0x18
		::AkCallbackType type; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENTCALLBACKMSG_CTOR_OFFSET))(this);
		}

	};
