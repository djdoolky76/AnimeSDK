#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChangeCharacterConfigParam.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeCharacterConfigParamClientOnly; }

#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D564EA0)
#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D564F40)
#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D565710)

namespace RPG::GameCore
{
	class ChangeCharacterConfigParamClientOnly : public ::RPG::GameCore::ChangeCharacterConfigParam
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
