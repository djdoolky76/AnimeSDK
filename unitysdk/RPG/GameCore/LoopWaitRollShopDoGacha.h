#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopWaitRollShopDoGacha; }

#define RPG_GAMECORE_LOOPWAITROLLSHOPDOGACHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C8EF0)
#define RPG_GAMECORE_LOOPWAITROLLSHOPDOGACHA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7C8F00)
#define RPG_GAMECORE_LOOPWAITROLLSHOPDOGACHA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C8EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitRollShopDoGacha_TypeDefinitionIndex = 21214;

	class LoopWaitRollShopDoGacha : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROLLSHOPDOGACHA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitRollShopDoGacha* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitRollShopDoGacha*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROLLSHOPDOGACHA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitRollShopDoGacha* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitRollShopDoGacha*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROLLSHOPDOGACHA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
