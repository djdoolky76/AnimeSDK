#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvEndIsometric; }

#define RPG_GAMECORE_ADVENDISOMETRIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39D2B0)
#define RPG_GAMECORE_ADVENDISOMETRIC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39D2C0)
#define RPG_GAMECORE_ADVENDISOMETRIC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39D1F0)

namespace RPG::GameCore
{
	class AdvEndIsometric : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENDISOMETRIC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEndIsometric* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEndIsometric*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENDISOMETRIC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEndIsometric* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEndIsometric*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENDISOMETRIC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
