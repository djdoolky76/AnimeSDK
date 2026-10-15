#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class CreatePropInTargetFront; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define OMBGGOLIHPP_CTOR_OFFSET UNITYSDK_OFFSET(0xBF18AB0)
#define OMBGGOLIHPP_NNDEDGOMIBE_OFFSET UNITYSDK_OFFSET(0xBF19310)
#define OMBGGOLIHPP_OMFCCPNDDLB_OFFSET UNITYSDK_OFFSET(0xBF18B30)
#define OMBGGOLIHPP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF18AE0)

	class OMBGGOLIHPP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreatePropInTargetFront* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreatePropInTargetFront*))((::PBYTE)hIl2Cpp + OMBGGOLIHPP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBGGOLIHPP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OMFCCPNDDLB(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + OMBGGOLIHPP_OMFCCPNDDLB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NNDEDGOMIBE(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OMBGGOLIHPP_NNDEDGOMIBE_OFFSET))(this, a1, a2, a3);
		}

	};
