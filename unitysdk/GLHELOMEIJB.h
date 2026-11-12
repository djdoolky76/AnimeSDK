#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraGameStage.h"
#include "unitysdk/RPG/GameCore/ChimeraTurnBasedStage.h"
#include "unitysdk/System/Object.h"

#define GLHELOMEIJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC75600)

inline static constexpr unsigned int GLHELOMEIJB_TypeDefinitionIndex = 42963;

	class GLHELOMEIJB : public ::System::Object
	{
	public:
		::System::UInt32 CIMFODMONBA; // 0x10
		::System::UInt32 EPHPAPDAOKL; // 0x14
		::RPG::Client::LittleGame::ChimeraGameStage BHONOFBJAAH; // 0x18
		::System::UInt32 HAHEOMFPOLG; // 0x1C
		::RPG::GameCore::ChimeraTurnBasedStage MCKJHOGHMHO; // 0x20
		::System::UInt32 HCDNKBJBNLL; // 0x24
		::System::Boolean IJCDEINGADN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHELOMEIJB_CTOR_OFFSET))(this);
		}

	};
