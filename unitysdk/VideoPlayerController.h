#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace CriWare { class CriManaMovieControllerForUI; }
namespace CriWare { class CriManaVP9Initializer; }
namespace CriWare { class CriWareErrorHandler; }
namespace CriWare { class CriWareInitializer; }
namespace UnityEngine { class GameObject; }

#define VIDEOPLAYERCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xF50D960)
#define VIDEOPLAYERCONTROLLER_FHOLOBCHIKD_OFFSET UNITYSDK_OFFSET(0xF50D690)
#define VIDEOPLAYERCONTROLLER_FNDJMJNALHD_OFFSET UNITYSDK_OFFSET(0xF50D8A0)
#define VIDEOPLAYERCONTROLLER_JLGPKHNAMIP_OFFSET UNITYSDK_OFFSET(0xF50D790)
#define VIDEOPLAYERCONTROLLER_JOKIMPAOKNB_OFFSET UNITYSDK_OFFSET(0xF50D5E0)
#define VIDEOPLAYERCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF50D580)
#define VIDEOPLAYERCONTROLLER_STARTCOMPT_OFFSET UNITYSDK_OFFSET(0xF50D480)
#define VIDEOPLAYERCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xF50D410)
#define VIDEOPLAYERCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xF50D4E0)

inline static constexpr unsigned int VideoPlayerController_TypeDefinitionIndex = 48615;

	class VideoPlayerController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::CriWare::CriManaMovieControllerForUI* ANJJDLCNACO; // 0x18
		::System::Single GOJFPJNCPEK; // 0x20
		::System::Byte _padding0[0x4];
		::CriWare::CriWareInitializer* MMINIDBGNDM; // 0x28
		::CriWare::CriManaVP9Initializer* FNIDGGBFPPG; // 0x30
		::CriWare::CriWareErrorHandler* GEPONNBNGHF; // 0x38
		::UnityEngine::GameObject* EGNDAJLFBCM; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOPLAYERCONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOPLAYERCONTROLLER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOPLAYERCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOPLAYERCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void StartCompt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOPLAYERCONTROLLER_STARTCOMPT_OFFSET))(this);
		}

		::System::Void JOKIMPAOKNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOPLAYERCONTROLLER_JOKIMPAOKNB_OFFSET))(this);
		}

		::System::Void FNDJMJNALHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOPLAYERCONTROLLER_FNDJMJNALHD_OFFSET))(this);
		}

		::System::Void FHOLOBCHIKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOPLAYERCONTROLLER_FHOLOBCHIKD_OFFSET))(this);
		}

		::System::Void JLGPKHNAMIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOPLAYERCONTROLLER_JLGPKHNAMIP_OFFSET))(this);
		}

	};
