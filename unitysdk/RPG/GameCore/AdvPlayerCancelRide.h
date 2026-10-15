#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvPlayerCancelRide; }

#define RPG_GAMECORE_ADVPLAYERCANCELRIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AA910)
#define RPG_GAMECORE_ADVPLAYERCANCELRIDE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3AA920)
#define RPG_GAMECORE_ADVPLAYERCANCELRIDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3AA8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPlayerCancelRide_TypeDefinitionIndex = 21033;

	class AdvPlayerCancelRide : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::MVector3>* SelectOffsetList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERCANCELRIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPlayerCancelRide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPlayerCancelRide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERCANCELRIDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPlayerCancelRide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPlayerCancelRide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERCANCELRIDE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
