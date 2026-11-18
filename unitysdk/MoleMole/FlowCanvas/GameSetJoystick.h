#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define MOLEMOLE_FLOWCANVAS_GAMESETJOYSTICK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8E1850)
#define MOLEMOLE_FLOWCANVAS_GAMESETJOYSTICK_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A8E1D80)
#define MOLEMOLE_FLOWCANVAS_GAMESETJOYSTICK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E2160)
#define MOLEMOLE_FLOWCANVAS_GAMESETJOYSTICK___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A8E2180)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int GameSetJoystick_TypeDefinitionIndex = 70877;

	class GameSetJoystick
	{
	public:
		static ::System::Nullable_1<::UnityEngine::Vector4>* StaticGet__savedSafeZone()
		{
			return (::System::Nullable_1<::UnityEngine::Vector4>*)Il2CppClass::FromTypeDefinitionIndex(GameSetJoystick_TypeDefinitionIndex)->GetStaticField(0x12920);
		}
		static ::System::Nullable_1<::System::Single>* StaticGet__savedKeepTime()
		{
			return (::System::Nullable_1<::System::Single>*)Il2CppClass::FromTypeDefinitionIndex(GameSetJoystick_TypeDefinitionIndex)->GetStaticField(0x12934);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_GAMESETJOYSTICK__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::UnityEngine::Vector4 a, ::System::Single b)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_GAMESETJOYSTICK_INVOKE_OFFSET))(this, a, b);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_GAMESETJOYSTICK_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_GAMESETJOYSTICK___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
