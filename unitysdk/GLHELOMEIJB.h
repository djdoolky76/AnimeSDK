#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraGameStage.h"
#include "unitysdk/RPG/GameCore/ChimeraTurnBasedStage.h"
#include "unitysdk/System/Object.h"

#define GLHELOMEIJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA837F0)

inline static constexpr unsigned int GLHELOMEIJB_TypeDefinitionIndex = 41988;

	class GLHELOMEIJB : public ::System::Object
	{
	public:
		::System::UInt32 EPHPAPDAOKL; // 0x10
		::System::Boolean IJCDEINGADN; // 0x14
		::System::Byte _padding0[0x3];
		::System::UInt32 CIMFODMONBA; // 0x18
		::RPG::GameCore::ChimeraTurnBasedStage MCKJHOGHMHO; // 0x1C
		::System::UInt32 HAHEOMFPOLG; // 0x20
		::System::UInt32 HCDNKBJBNLL; // 0x24
		::RPG::Client::LittleGame::ChimeraGameStage BHONOFBJAAH; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHELOMEIJB_CTOR_OFFSET))(this);
		}

	};
