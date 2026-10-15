#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitSimpleTalkFinish; }

#define RPG_GAMECORE_WAITSIMPLETALKFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA1B40)
#define RPG_GAMECORE_WAITSIMPLETALKFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA1B50)
#define RPG_GAMECORE_WAITSIMPLETALKFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA1A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitSimpleTalkFinish_TypeDefinitionIndex = 20845;

	class WaitSimpleTalkFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSIMPLETALKFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitSimpleTalkFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitSimpleTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSIMPLETALKFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitSimpleTalkFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitSimpleTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSIMPLETALKFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
