#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"
class JBDGMDEOBIO;
namespace RPG::Client { class CameraNormalConfigData; }
namespace RPG::GameCore { class VCameraConfig; }
namespace RPG::GameCore { class VCameraNoiseChange; }

#define JBDGMDEOBIO_CTOR_OFFSET UNITYSDK_OFFSET(0x16567A90)
#define JBDGMDEOBIO_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x165679E0)

inline static constexpr unsigned int JBDGMDEOBIO_TypeDefinitionIndex = 69562;

	class JBDGMDEOBIO : public ::System::Object
	{
	public:
		::RPG::Client::CameraNormalConfigData* GKBIFKOLEJF; // 0x10
		::RPG::GameCore::VCameraNoiseChange* LBGILPDAFBN; // 0x18
		::RPG::GameCore::VCameraConfig* FABCCDICDLO; // 0x20
		::System::Boolean EDNMLBJKFEA; // 0x28
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TurnState FFNOGLPGGIO; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDGMDEOBIO_CTOR_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::JBDGMDEOBIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBDGMDEOBIO*))((::PBYTE)hIl2Cpp + JBDGMDEOBIO_PPEGOIODAKI_OFFSET))(this, a1);
		}

	};
