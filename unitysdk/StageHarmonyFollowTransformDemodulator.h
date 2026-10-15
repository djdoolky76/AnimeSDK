#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DemodulatorOutPutType.h"
#include "unitysdk/StageHarmonyFollowTransformDemodulator_FollowType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/JEMDGBKPCDK.h"
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define STAGEHARMONYFOLLOWTRANSFORMDEMODULATOR_APAEIKPAHFH_OFFSET UNITYSDK_OFFSET(0xE991BA0)
#define STAGEHARMONYFOLLOWTRANSFORMDEMODULATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE991BF0)
#define STAGEHARMONYFOLLOWTRANSFORMDEMODULATOR_FCDECODOKAK_OFFSET UNITYSDK_OFFSET(0xE9910A0)
#define STAGEHARMONYFOLLOWTRANSFORMDEMODULATOR_GET_ISCUSTOMTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE990FE0)
#define STAGEHARMONYFOLLOWTRANSFORMDEMODULATOR_GET_MAINCAMTRANS_OFFSET UNITYSDK_OFFSET(0xE990FF0)

inline static constexpr unsigned int StageHarmonyFollowTransformDemodulator_TypeDefinitionIndex = 47531;

	class StageHarmonyFollowTransformDemodulator
	{
	public:
		::UnityEngine::Vector3 OriginalPos; // 0x48
		::UnityEngine::Vector3 OriginalRotation; // 0x54
		::UnityEngine::Vector3 OriginalScale; // 0x60
		::UnityEngine::Vector3 Offset; // 0x6C
		::StageHarmonyFollowTransformDemodulator_FollowType followType; // 0x78
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* CustomTransform; // 0x80
		::System::Boolean SignalPause; // 0x88
		::System::Boolean SmoothSignal; // 0x89
		::System::Byte _padding1[0x2];
		::System::Single SmoothTime; // 0x8C
		::System::Single MaxSpeed; // 0x90
		::System::Boolean _LastSignalPause; // 0x94
		::System::Byte _padding2[0x3];
		::System::Single _Signal; // 0x98
		::System::Single _RecordSignalVelocity; // 0x9C
		::UnityEngine::Camera* _mainCam; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYFOLLOWTRANSFORMDEMODULATOR_CTOR_OFFSET))(this);
		}

		::System::Boolean get_isCustomTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYFOLLOWTRANSFORMDEMODULATOR_GET_ISCUSTOMTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Transform* get_mainCamTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYFOLLOWTRANSFORMDEMODULATOR_GET_MAINCAMTRANS_OFFSET))(this);
		}

		::JEMDGBKPCDK FCDECODOKAK(::System::Single a1)
		{
			return ((::JEMDGBKPCDK(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYFOLLOWTRANSFORMDEMODULATOR_FCDECODOKAK_OFFSET))(this, a1);
		}

		::DemodulatorOutPutType APAEIKPAHFH()
		{
			return ((::DemodulatorOutPutType(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYFOLLOWTRANSFORMDEMODULATOR_APAEIKPAHFH_OFFSET))(this);
		}

	};
