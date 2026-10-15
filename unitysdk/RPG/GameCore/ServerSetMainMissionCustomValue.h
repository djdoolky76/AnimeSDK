#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ServerSetMainMissionCustomValue; }

#define RPG_GAMECORE_SERVERSETMAINMISSIONCUSTOMVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA91EC0)
#define RPG_GAMECORE_SERVERSETMAINMISSIONCUSTOMVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA91ED0)
#define RPG_GAMECORE_SERVERSETMAINMISSIONCUSTOMVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA91E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServerSetMainMissionCustomValue_TypeDefinitionIndex = 20440;

	class ServerSetMainMissionCustomValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERSETMAINMISSIONCUSTOMVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ServerSetMainMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ServerSetMainMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERSETMAINMISSIONCUSTOMVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ServerSetMainMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ServerSetMainMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERSETMAINMISSIONCUSTOMVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
