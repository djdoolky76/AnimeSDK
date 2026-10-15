#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdventureCameraLookAt; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraVector3ChangeParam; }
namespace UnityEngine { class GameObject; }

#define JPIOEBIPJPC_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C2BE0)
#define JPIOEBIPJPC_EODGLAPLNAD_OFFSET UNITYSDK_OFFSET(0xB2C3E00)
#define JPIOEBIPJPC_JEDCFHMIELE_OFFSET UNITYSDK_OFFSET(0xB2C3B40)
#define JPIOEBIPJPC_LINMJBKNEIH_OFFSET UNITYSDK_OFFSET(0xB2C4190)
#define JPIOEBIPJPC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2C2C30)

	class JPIOEBIPJPC
	{
	public:
		::RPG::GameCore::VCameraVector3ChangeParam* NPIMOBAHJED; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureCameraLookAt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureCameraLookAt*))((::PBYTE)hIl2Cpp + JPIOEBIPJPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIOEBIPJPC_ONTASKBEGIN_OFFSET))(this);
		}

		static ::UnityEngine::GameObject* JEDCFHMIELE(::RPG::GameCore::AdventureCameraLookAt* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::RPG::GameCore::AdventureCameraLookAt*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + JPIOEBIPJPC_JEDCFHMIELE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 LINMJBKNEIH(::RPG::GameCore::AdventureCameraLookAt* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::GameCore::AdventureCameraLookAt*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JPIOEBIPJPC_LINMJBKNEIH_OFFSET))(a1, a2);
		}

		::System::Boolean EODGLAPLNAD(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + JPIOEBIPJPC_EODGLAPLNAD_OFFSET))(this, a1, a2);
		}

	};
