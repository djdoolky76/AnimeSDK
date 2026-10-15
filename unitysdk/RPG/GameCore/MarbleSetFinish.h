#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSetFinish; }

#define RPG_GAMECORE_MARBLESETFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81AA30)
#define RPG_GAMECORE_MARBLESETFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D81AA40)
#define RPG_GAMECORE_MARBLESETFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D81A9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSetFinish_TypeDefinitionIndex = 16845;

	class MarbleSetFinish : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSetFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSetFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSetFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSetFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
