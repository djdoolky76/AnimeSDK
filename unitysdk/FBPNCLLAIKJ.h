#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
class CFNBLNHMHGO;
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { class StoryTestPhaseInitParams; }
namespace RPG::GameCore { class GameWorld; }

#define FBPNCLLAIKJ_AJKDKKDFHBD_OFFSET UNITYSDK_OFFSET(0x156A2450)
#define FBPNCLLAIKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x156A2210)
#define FBPNCLLAIKJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156A2220)
#define FBPNCLLAIKJ_EEMLHFMMKFD_OFFSET UNITYSDK_OFFSET(0x156A2A90)
#define FBPNCLLAIKJ_ENTER_OFFSET UNITYSDK_OFFSET(0x156A2300)
#define FBPNCLLAIKJ_GETENVIRONMENTSYSTEM_OFFSET UNITYSDK_OFFSET(0x156A2A50)
#define FBPNCLLAIKJ_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x156A2A00)
#define FBPNCLLAIKJ_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x156A28A0)
#define FBPNCLLAIKJ_LEAVE_OFFSET UNITYSDK_OFFSET(0x156A2910)
#define FBPNCLLAIKJ_LMKPLMOHAMC_OFFSET UNITYSDK_OFFSET(0x156A2AD0)
#define FBPNCLLAIKJ_TICK_OFFSET UNITYSDK_OFFSET(0x156A2830)

inline static constexpr unsigned int FBPNCLLAIKJ_TypeDefinitionIndex = 61208;

	class FBPNCLLAIKJ : public ::System::Object
	{
	public:
		::RPG::Client::EnvironmentSystem* NLKKPKJEAOO; // 0x10
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x18
		::RPG::Client::StoryTestPhaseInitParams* PMECLILMEDH; // 0x20
		::System::Void _ctor(::RPG::Client::StoryTestPhaseInitParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StoryTestPhaseInitParams*))((::PBYTE)hIl2Cpp + FBPNCLLAIKJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPNCLLAIKJ_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPNCLLAIKJ_ENTER_OFFSET))(this);
		}

		::System::Void AJKDKKDFHBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPNCLLAIKJ_AJKDKKDFHBD_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBPNCLLAIKJ_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBPNCLLAIKJ_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean Leave(::CFNBLNHMHGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFNBLNHMHGO*))((::PBYTE)hIl2Cpp + FBPNCLLAIKJ_LEAVE_OFFSET))(this, a1);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPNCLLAIKJ_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::RPG::Client::EnvironmentSystem* GetEnvironmentSystem()
		{
			return ((::RPG::Client::EnvironmentSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPNCLLAIKJ_GETENVIRONMENTSYSTEM_OFFSET))(this);
		}

		::RPG::GameCore::GameWorld* EEMLHFMMKFD()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPNCLLAIKJ_EEMLHFMMKFD_OFFSET))(this);
		}

		::RPG::Client::StoryTestPhaseInitParams* LMKPLMOHAMC()
		{
			return ((::RPG::Client::StoryTestPhaseInitParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPNCLLAIKJ_LMKPLMOHAMC_OFFSET))(this);
		}

	};
