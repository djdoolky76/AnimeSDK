#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/CameraClearFlags.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Camera; }

#define RPGTOOLS_SCREENRECORDER_AWAKE_OFFSET UNITYSDK_OFFSET(0xE8A7F00)
#define RPGTOOLS_SCREENRECORDER_BNEBAKJHCCH_OFFSET UNITYSDK_OFFSET(0xE8A8110)
#define RPGTOOLS_SCREENRECORDER_CKJCONOGIAC_OFFSET UNITYSDK_OFFSET(0xE8A8170)
#define RPGTOOLS_SCREENRECORDER_CTOR_OFFSET UNITYSDK_OFFSET(0xE8A8A30)
#define RPGTOOLS_SCREENRECORDER_ENDRECORD_OFFSET UNITYSDK_OFFSET(0xE8A82F0)
#define RPGTOOLS_SCREENRECORDER_IDCGICECPHO_OFFSET UNITYSDK_OFFSET(0xE8A8270)
#define RPGTOOLS_SCREENRECORDER_LBAEHMAOIGP_OFFSET UNITYSDK_OFFSET(0xE8A8960)
#define RPGTOOLS_SCREENRECORDER_MOBPPCMNOPK_OFFSET UNITYSDK_OFFSET(0xE8A83A0)
#define RPGTOOLS_SCREENRECORDER_STARTRECORD_OFFSET UNITYSDK_OFFSET(0xE8A8340)
#define RPGTOOLS_SCREENRECORDER_UPDATE_OFFSET UNITYSDK_OFFSET(0xE8A7F40)

namespace RPGTools
{
	inline static constexpr unsigned int ScreenRecorder_TypeDefinitionIndex = 47777;

	class ScreenRecorder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single sizeScale; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* outputPath; // 0x20
		::System::Single duration; // 0x28
		::System::Boolean characterOnly; // 0x2C
		::System::Byte _padding1[0x3];
		::UnityEngine::KeyCode startKey; // 0x30
		::UnityEngine::CameraClearFlags BGKOGNIBBOG; // 0x34
		::UnityEngine::LayerMask PMANBKLKBOM; // 0x38
		::System::Int32 frameRate; // 0x3C
		::System::Int32 decimateNumber; // 0x40
		::System::Single updateDeltaTime; // 0x44
		::UnityEngine::Camera* MBILBPGFINO; // 0x48
		::System::Single FBKJKEGOEPN; // 0x50
		::System::Int32 BOCKHIOIMBO; // 0x54
		::System::Int32 JJEMGOJPLFF; // 0x58
		::System::Int32 BBMCBAGNBIC; // 0x5C
		::System::Single KIKIMCMLLKN; // 0x60
		::System::Boolean _isRunning; // 0x64
		::System::Boolean BIPKNLCMINA; // 0x65
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER_UPDATE_OFFSET))(this);
		}

		::System::Void StartRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER_STARTRECORD_OFFSET))(this);
		}

		::System::Void EndRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER_ENDRECORD_OFFSET))(this);
		}

		::System::Void CKJCONOGIAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER_CKJCONOGIAC_OFFSET))(this);
		}

		::System::Boolean BNEBAKJHCCH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER_BNEBAKJHCCH_OFFSET))(this);
		}

		::System::Collections::IEnumerator* IDCGICECPHO()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER_IDCGICECPHO_OFFSET))(this);
		}

		::System::Void MOBPPCMNOPK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER_MOBPPCMNOPK_OFFSET))(this, a1);
		}

		::System::Void LBAEHMAOIGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER_LBAEHMAOIGP_OFFSET))(this);
		}

	};
}
