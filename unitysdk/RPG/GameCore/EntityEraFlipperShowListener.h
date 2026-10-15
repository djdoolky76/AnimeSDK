#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EntityEraFlipperShowListener; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ENTITYERAFLIPPERSHOWLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D645D50)
#define RPG_GAMECORE_ENTITYERAFLIPPERSHOWLISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D645D60)
#define RPG_GAMECORE_ENTITYERAFLIPPERSHOWLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D645D10)

namespace RPG::GameCore
{
	class EntityEraFlipperShowListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnShowCallBack; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnHideCallBack; // 0x20
		::System::Boolean ListenCallbackLoop; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYERAFLIPPERSHOWLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityEraFlipperShowListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityEraFlipperShowListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYERAFLIPPERSHOWLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityEraFlipperShowListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityEraFlipperShowListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYERAFLIPPERSHOWLISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
