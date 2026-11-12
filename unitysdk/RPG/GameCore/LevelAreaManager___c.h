#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate; }
namespace System { class Object; }

#define RPG_GAMECORE_LEVELAREAMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xF1E2DF0)
#define RPG_GAMECORE_LEVELAREAMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xF1E2E20)
#define RPG_GAMECORE_LEVELAREAMANAGER___C__ACTIVEVIRTUALCAMERA_B__23_0_OFFSET UNITYSDK_OFFSET(0xF1E2E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAreaManager___c_TypeDefinitionIndex = 59078;

	class LevelAreaManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x71030);
		}

		static ::Cinemachine::CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate** StaticGet___9__23_0()
		{
			return (::Cinemachine::CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x71038);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Void _ActiveVirtualCamera_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER___C__ACTIVEVIRTUALCAMERA_B__23_0_OFFSET))(this);
		}

	};
}
