#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UIAdaptiveDeviceType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class UIOperation; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define MONOUIADAPTCONFIGITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA4FA40)
#define MONOUIADAPTCONFIGITEM_EPGFADIBHKP_OFFSET UNITYSDK_OFFSET(0xBA4F530)

inline static constexpr unsigned int MonoUIAdaptConfigItem_TypeDefinitionIndex = 47584;

	class MonoUIAdaptConfigItem : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* Targets; // 0x10
		::RPG::GameCore::UIOperation* Operation; // 0x18
		::RPG::GameCore::UIAdaptiveDeviceType DeviceType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIADAPTCONFIGITEM_CTOR_OFFSET))(this);
		}

		::System::Void EPGFADIBHKP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONOUIADAPTCONFIGITEM_EPGFADIBHKP_OFFSET))(this, a1);
		}

	};
