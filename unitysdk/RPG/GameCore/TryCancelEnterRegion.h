#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TryCancelEnterRegion; }

#define RPG_GAMECORE_TRYCANCELENTERREGION_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE736F0)
#define RPG_GAMECORE_TRYCANCELENTERREGION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE73700)
#define RPG_GAMECORE_TRYCANCELENTERREGION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE73630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TryCancelEnterRegion_TypeDefinitionIndex = 21096;

	class TryCancelEnterRegion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYCANCELENTERREGION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TryCancelEnterRegion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TryCancelEnterRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYCANCELENTERREGION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TryCancelEnterRegion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TryCancelEnterRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYCANCELENTERREGION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
