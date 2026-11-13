#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DDBHMHFPFJC;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_WATERWHEEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC89970)
#define RPG_CLIENT_WATERWHEEL_DEBUGINIT_OFFSET UNITYSDK_OFFSET(0x1BC896C0)
#define RPG_CLIENT_WATERWHEEL_DEBUG_STARTBUTTONTO_OFFSET UNITYSDK_OFFSET(0x1BC897B0)
#define RPG_CLIENT_WATERWHEEL_DEBUG_STARTBUTTON_OFFSET UNITYSDK_OFFSET(0x1BC89740)
#define RPG_CLIENT_WATERWHEEL_DEBUG_STOPBUTTON_OFFSET UNITYSDK_OFFSET(0x1BC89820)
#define RPG_CLIENT_WATERWHEEL_ONARTLOAD_OFFSET UNITYSDK_OFFSET(0x1BC89880)
#define RPG_CLIENT_WATERWHEEL_ONARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x1BC898D0)
#define RPG_CLIENT_WATERWHEEL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BC89920)

namespace RPG::Client
{
	inline static constexpr unsigned int WaterWheel_TypeDefinitionIndex = 70762;

	class WaterWheel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single RotateZ; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* DockPoints; // 0x20
		::System::Collections::Generic::List_1<::System::Single>* DockPointsRotateDegree; // 0x28
		::System::Collections::Generic::List_1<::System::Single>* StopPointsRotateDegree; // 0x30
		::UnityEngine::GameObject* RotateRootPoint; // 0x38
		::System::Single RotateSpeed; // 0x40
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* StartRotateAcc; // 0x48
		::UnityEngine::AnimationCurve* StopRotateAcc; // 0x50
		::UnityEngine::Vector3 RotateDirection; // 0x58
		::System::Byte _padding2[0x4];
		::DDBHMHFPFJC* EIGCKKONNIO; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WATERWHEEL_CTOR_OFFSET))(this);
		}

		::System::Void DebugInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WATERWHEEL_DEBUGINIT_OFFSET))(this);
		}

		::System::Void Debug_StartButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WATERWHEEL_DEBUG_STARTBUTTON_OFFSET))(this);
		}

		::System::Void Debug_StartButtonTo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WATERWHEEL_DEBUG_STARTBUTTONTO_OFFSET))(this);
		}

		::System::Void Debug_StopButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WATERWHEEL_DEBUG_STOPBUTTON_OFFSET))(this);
		}

		::System::Void OnArtLoad(::DDBHMHFPFJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDBHMHFPFJC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WATERWHEEL_ONARTLOAD_OFFSET))(this, a1);
		}

		::System::Void OnArtUnload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WATERWHEEL_ONARTUNLOAD_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WATERWHEEL_ONDESTROY_OFFSET))(this);
		}

	};
}
