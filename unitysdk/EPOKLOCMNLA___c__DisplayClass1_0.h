#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LowLevel/PlayerLoopSystem.h"
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine::LowLevel { class PlayerLoopSystem_UpdateFunction; }

#define EPOKLOCMNLA___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC07520)
#define EPOKLOCMNLA___C__DISPLAYCLASS1_0__REMOVEINJECT_B__0_OFFSET UNITYSDK_OFFSET(0x1EC07820)
#define EPOKLOCMNLA___C__DISPLAYCLASS1_0__REMOVEINJECT_B__1_OFFSET UNITYSDK_OFFSET(0x1EC078E0)

	class EPOKLOCMNLA___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Type* type; // 0x10
		::System::String* mainSysName; // 0x18
		::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* updateDelg; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPOKLOCMNLA___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveInject_b__0(::UnityEngine::LowLevel::PlayerLoopSystem a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::LowLevel::PlayerLoopSystem))((::PBYTE)hIl2Cpp + EPOKLOCMNLA___C__DISPLAYCLASS1_0__REMOVEINJECT_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _RemoveInject_b__1(::UnityEngine::LowLevel::PlayerLoopSystem a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::LowLevel::PlayerLoopSystem))((::PBYTE)hIl2Cpp + EPOKLOCMNLA___C__DISPLAYCLASS1_0__REMOVEINJECT_B__1_OFFSET))(this, a1);
		}

	};
