#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowGridFightProgressToWhitebox; }

#define RPG_GAMECORE_SHOWGRIDFIGHTPROGRESSTOWHITEBOX_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAFF70)
#define RPG_GAMECORE_SHOWGRIDFIGHTPROGRESSTOWHITEBOX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAFF80)
#define RPG_GAMECORE_SHOWGRIDFIGHTPROGRESSTOWHITEBOX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAFF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowGridFightProgressToWhitebox_TypeDefinitionIndex = 23302;

	class ShowGridFightProgressToWhitebox : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsOpen; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGRIDFIGHTPROGRESSTOWHITEBOX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowGridFightProgressToWhitebox* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowGridFightProgressToWhitebox*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGRIDFIGHTPROGRESSTOWHITEBOX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowGridFightProgressToWhitebox* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowGridFightProgressToWhitebox*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGRIDFIGHTPROGRESSTOWHITEBOX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
