#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace RPG::GameCore { class TriggerValidGuestConfig; }

#define OMODLCNDEBI_CTOR_OFFSET UNITYSDK_OFFSET(0x17D6BED0)

inline static constexpr unsigned int OMODLCNDEBI_TypeDefinitionIndex = 58738;

	class OMODLCNDEBI : public ::System::Object
	{
	public:
		::RPG::GameCore::TriggerValidGuestConfig* OCPMCMIAOFM; // 0x10
		::RPG::GameCore::LevelTriggerInfo* DCAPKFBJFDM; // 0x18
		::UnityEngine::Vector3 DJOPKBFLMII; // 0x20
		::UnityEngine::Quaternion KBOGCGPBOFH; // 0x2C
		::System::Single IMAKHPOEMIP; // 0x3C
		::System::Boolean KBIHIOOINBD; // 0x40
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 FJBGGCPCFHO; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMODLCNDEBI_CTOR_OFFSET))(this);
		}

	};
