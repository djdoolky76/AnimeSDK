#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CameraNamedDynamicOffset; }
namespace RPG::GameCore { class GameEntity; }

#define EKKGJHMHIIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1550CD50)
#define EKKGJHMHIIB_GLLOCAIDDLJ_OFFSET UNITYSDK_OFFSET(0x1550CC20)

inline static constexpr unsigned int EKKGJHMHIIB_TypeDefinitionIndex = 69570;

	class EKKGJHMHIIB : public ::System::Object
	{
	public:
		::RPG::Client::CameraNamedDynamicOffset* EABKOHGCHFP; // 0x10
		::RPG::GameCore::GameEntity* NELOEEMKHND; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKKGJHMHIIB_CTOR_OFFSET))(this);
		}

		::System::Boolean GLLOCAIDDLJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EKKGJHMHIIB_GLLOCAIDDLJ_OFFSET))(this, a1);
		}

	};
