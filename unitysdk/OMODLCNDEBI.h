#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace RPG::GameCore { class TriggerValidGuestConfig; }

#define OMODLCNDEBI_CTOR_OFFSET UNITYSDK_OFFSET(0xBF3D390)

inline static constexpr unsigned int OMODLCNDEBI_TypeDefinitionIndex = 57510;

	class OMODLCNDEBI : public ::System::Object
	{
	public:
		::RPG::GameCore::TriggerValidGuestConfig* OCPMCMIAOFM; // 0x10
		::RPG::GameCore::LevelTriggerInfo* DCAPKFBJFDM; // 0x18
		::System::Boolean KBIHIOOINBD; // 0x20
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 FJBGGCPCFHO; // 0x24
		::System::Single IMAKHPOEMIP; // 0x30
		::UnityEngine::Vector3 DJOPKBFLMII; // 0x34
		::UnityEngine::Quaternion KBOGCGPBOFH; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMODLCNDEBI_CTOR_OFFSET))(this);
		}

	};
