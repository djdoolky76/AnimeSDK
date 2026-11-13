#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLOBJGBDCOD_FocusTimingType.h"
#include "unitysdk/RPG/Client/PauseGameMode.h"
#include "unitysdk/RPG/Client/UIController_TransitionStyle.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JLOBJGBDCOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1A099F50)

inline static constexpr unsigned int JLOBJGBDCOD_TypeDefinitionIndex = 50760;

	class JLOBJGBDCOD : public ::System::Object
	{
	public:
		::System::String* BDACPPLKLGL; // 0x10
		::System::String* GNLBEIHINPI; // 0x18
		::RPG::Client::UILayer OCKDGDBMPOM; // 0x20
		::System::Boolean BCOKPOLAFCG; // 0x24
		::System::Boolean OAHAEALJFAB; // 0x25
		::System::Byte _padding0[0x2];
		::JLOBJGBDCOD_FocusTimingType LLABLFFNOFE; // 0x28
		::RPG::Client::UIController_TransitionStyle HHPLFNBGLEK; // 0x2C
		::RPG::Client::PauseGameMode LJDFIKJENMG; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOBJGBDCOD_CTOR_OFFSET))(this);
		}

	};
