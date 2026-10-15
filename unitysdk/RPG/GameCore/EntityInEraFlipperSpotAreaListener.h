#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EntityInEraFlipperSpotAreaListener; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ENTITYINERAFLIPPERSPOTAREALISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D618510)
#define RPG_GAMECORE_ENTITYINERAFLIPPERSPOTAREALISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D618520)
#define RPG_GAMECORE_ENTITYINERAFLIPPERSPOTAREALISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6184D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityInEraFlipperSpotAreaListener_TypeDefinitionIndex = 22349;

	class EntityInEraFlipperSpotAreaListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCallBack; // 0x18
		::System::Boolean ListenCallbackLoop; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYINERAFLIPPERSPOTAREALISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityInEraFlipperSpotAreaListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityInEraFlipperSpotAreaListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYINERAFLIPPERSPOTAREALISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityInEraFlipperSpotAreaListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityInEraFlipperSpotAreaListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYINERAFLIPPERSPOTAREALISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
