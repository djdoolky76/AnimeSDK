#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropCurveMoveStartMode; }

#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9480F0)
#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D948090)
#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D947950)

namespace RPG::GameCore
{
	class PropCurveMoveStartMode : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropCurveMoveStartMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropCurveMoveStartMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropCurveMoveStartMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropCurveMoveStartMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
