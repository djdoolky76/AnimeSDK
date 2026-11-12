#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGCamera/CameraStateData.h"
#include "unitysdk/System/Object.h"
namespace RPGCamera { class CameraStateBlenderConfig; }
namespace RPGCamera { class ICameraState; }
namespace RPGCamera { class ICameraStateRunner; }
namespace System { class String; }

#define RPGCAMERA_BASECAMERASTATE_COLLECT_OFFSET UNITYSDK_OFFSET(0xB6D9290)
#define RPGCAMERA_BASECAMERASTATE_CTOR_OFFSET UNITYSDK_OFFSET(0xB6D93C0)
#define RPGCAMERA_BASECAMERASTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6D92C0)
#define RPGCAMERA_BASECAMERASTATE_GET_BLENDCFG_OFFSET UNITYSDK_OFFSET(0xB6D9240)
#define RPGCAMERA_BASECAMERASTATE_GET_DATA_OFFSET UNITYSDK_OFFSET(0xB6D9180)
#define RPGCAMERA_BASECAMERASTATE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xB6D8FF0)
#define RPGCAMERA_BASECAMERASTATE_GET_ID_OFFSET UNITYSDK_OFFSET(0xB6D8FB0)
#define RPGCAMERA_BASECAMERASTATE_GET_ISBACKGROUND_OFFSET UNITYSDK_OFFSET(0xB6D9220)
#define RPGCAMERA_BASECAMERASTATE_GET_ISSPAWNED_OFFSET UNITYSDK_OFFSET(0xB6D9030)
#define RPGCAMERA_BASECAMERASTATE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB6D8FE0)
#define RPGCAMERA_BASECAMERASTATE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB6D8FD0)
#define RPGCAMERA_BASECAMERASTATE_GET_RUNNER_OFFSET UNITYSDK_OFFSET(0xB6D9250)
#define RPGCAMERA_BASECAMERASTATE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB6D8FC0)
#define RPGCAMERA_BASECAMERASTATE_INITSTATE_OFFSET UNITYSDK_OFFSET(0xB6D9000)
#define RPGCAMERA_BASECAMERASTATE_ONBLENDFROMFINISHED_OFFSET UNITYSDK_OFFSET(0xB6D92B0)
#define RPGCAMERA_BASECAMERASTATE_ONBLENDTOFINISHED_OFFSET UNITYSDK_OFFSET(0xB6D92A0)
#define RPGCAMERA_BASECAMERASTATE_ONSPAWN_OFFSET UNITYSDK_OFFSET(0xB6D90D0)
#define RPGCAMERA_BASECAMERASTATE_ONUNSPAWN_OFFSET UNITYSDK_OFFSET(0xB6D9170)
#define RPGCAMERA_BASECAMERASTATE_REGISTERRUNNER_OFFSET UNITYSDK_OFFSET(0xB6D9260)
#define RPGCAMERA_BASECAMERASTATE_SPAWN_OFFSET UNITYSDK_OFFSET(0xB6D9040)
#define RPGCAMERA_BASECAMERASTATE_SWITCHBACKGROUND_OFFSET UNITYSDK_OFFSET(0xB6D9230)
#define RPGCAMERA_BASECAMERASTATE_UNSPAWN_OFFSET UNITYSDK_OFFSET(0xB6D90E0)
#define RPGCAMERA_BASECAMERASTATE_UPDATEBYBLENDSRC_OFFSET UNITYSDK_OFFSET(0xB6D9280)
#define RPGCAMERA_BASECAMERASTATE_UPDATEBYSTATE_OFFSET UNITYSDK_OFFSET(0xB6D9270)
#define RPGCAMERA_BASECAMERASTATE_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0xB6D91D0)

namespace RPGCamera
{
	inline static constexpr unsigned int BaseCameraState_TypeDefinitionIndex = 46972;

	class BaseCameraState : public ::System::Object
	{
	public:
		::System::String* _description; // 0x10
		::System::String* _name; // 0x18
		::RPGCamera::ICameraStateRunner* _runner; // 0x20
		::System::Int32 _priority; // 0x28
		::System::Int32 _id; // 0x2C
		::RPGCamera::CameraStateData _data; // 0x30
		::System::Boolean _isBackground; // 0x9C
		::System::Boolean _isSpawned; // 0x9D
		::System::Byte _padding0[0x2];
		::System::Int32 _type; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_CTOR_OFFSET))(this);
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_ID_OFFSET))(this);
		}

		::System::Int32 get_Type()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_TYPE_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_PRIORITY_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void InitState(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_INITSTATE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean get_IsSpawned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_ISSPAWNED_OFFSET))(this);
		}

		::System::Void Spawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_SPAWN_OFFSET))(this);
		}

		::System::Void OnSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_ONSPAWN_OFFSET))(this);
		}

		::System::Void UnSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_UNSPAWN_OFFSET))(this);
		}

		::System::Void OnUnSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_ONUNSPAWN_OFFSET))(this);
		}

		::RPGCamera::CameraStateData get_Data()
		{
			return ((::RPGCamera::CameraStateData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_DATA_OFFSET))(this);
		}

		::System::Void UpdateData(::RPGCamera::CameraStateData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::CameraStateData))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_UPDATEDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBackground()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_ISBACKGROUND_OFFSET))(this);
		}

		::System::Void SwitchBackground(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_SWITCHBACKGROUND_OFFSET))(this, a1);
		}

		::RPGCamera::CameraStateBlenderConfig* get_BlendCfg()
		{
			return ((::RPGCamera::CameraStateBlenderConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_BLENDCFG_OFFSET))(this);
		}

		::RPGCamera::ICameraStateRunner* get_Runner()
		{
			return ((::RPGCamera::ICameraStateRunner*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_RUNNER_OFFSET))(this);
		}

		::System::Void RegisterRunner(::RPGCamera::ICameraStateRunner* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraStateRunner*))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_REGISTERRUNNER_OFFSET))(this, a1);
		}

		::System::Void UpdateByState(::RPGCamera::ICameraState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_UPDATEBYSTATE_OFFSET))(this, a1);
		}

		::System::Void UpdateByBlendSrc(::RPGCamera::ICameraState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_UPDATEBYBLENDSRC_OFFSET))(this, a1);
		}

		::System::Void Collect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_COLLECT_OFFSET))(this);
		}

		::System::Void OnBlendToFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_ONBLENDTOFINISHED_OFFSET))(this);
		}

		::System::Void OnBlendFromFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_ONBLENDFROMFINISHED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_DISPOSE_OFFSET))(this);
		}

	};
}
