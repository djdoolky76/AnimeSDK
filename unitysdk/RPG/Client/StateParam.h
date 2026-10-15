#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EStateParamModifyTime.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xE124AC0)
#define RPG_CLIENT_STATEPARAM_NGCABGCHICG_OFFSET UNITYSDK_OFFSET(0xE124890)

namespace RPG::Client
{
	inline static constexpr unsigned int StateParam_TypeDefinitionIndex = 68834;

	class StateParam : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::RPG::GameCore::AnimatorParameterType type; // 0x18
		::System::Boolean SetRandom; // 0x1C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 RandomRange; // 0x20
		::System::Single floatValue; // 0x28
		::System::Int32 intValue; // 0x2C
		::System::Boolean boolValue; // 0x30
		::System::Boolean triggerValue; // 0x31
		::System::Byte _padding1[0x2];
		::RPG::Client::EStateParamModifyTime modifyTime; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAM_CTOR_OFFSET))(this);
		}

		::System::Void NGCABGCHICG(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAM_NGCABGCHICG_OFFSET))(this, a1);
		}

	};
}
