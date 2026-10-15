#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowMiniGameFuncBtnEffect; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWMINIGAMEFUNCBTNEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE1B10)
#define RPG_GAMECORE_SHOWMINIGAMEFUNCBTNEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE1B20)
#define RPG_GAMECORE_SHOWMINIGAMEFUNCBTNEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE1AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowMiniGameFuncBtnEffect_TypeDefinitionIndex = 20499;

	class ShowMiniGameFuncBtnEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* CustomFuncBtnName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMINIGAMEFUNCBTNEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowMiniGameFuncBtnEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowMiniGameFuncBtnEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMINIGAMEFUNCBTNEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowMiniGameFuncBtnEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowMiniGameFuncBtnEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMINIGAMEFUNCBTNEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
