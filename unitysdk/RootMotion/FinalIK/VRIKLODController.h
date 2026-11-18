#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RootMotion::FinalIK { class VRIK; }
namespace UnityEngine { class Renderer; }

#define ROOTMOTION_FINALIK_VRIKLODCONTROLLER_GETLODLEVEL_OFFSET UNITYSDK_OFFSET(0x1F9503E0)
#define ROOTMOTION_FINALIK_VRIKLODCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x1F950310)
#define ROOTMOTION_FINALIK_VRIKLODCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F9503A0)
#define ROOTMOTION_FINALIK_VRIKLODCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F950650)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int VRIKLODController_TypeDefinitionIndex = 36943;

	class VRIKLODController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* LODRenderer; // 0x18
		::System::Single LODDistance; // 0x20
		::System::Boolean allowCulled; // 0x24
		::System::Byte _padding0[0x3];
		::RootMotion::FinalIK::VRIK* ik; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKLODCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKLODCONTROLLER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKLODCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Int32 GetLODLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIKLODCONTROLLER_GETLODLEVEL_OFFSET))(this);
		}
	};
}
