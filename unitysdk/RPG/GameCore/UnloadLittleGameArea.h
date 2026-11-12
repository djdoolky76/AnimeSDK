#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class UnloadLittleGameArea; }

#define RPG_GAMECORE_UNLOADLITTLEGAMEAREA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE8AD20)
#define RPG_GAMECORE_UNLOADLITTLEGAMEAREA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE8AD50)
#define RPG_GAMECORE_UNLOADLITTLEGAMEAREA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE8ACD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnloadLittleGameArea_TypeDefinitionIndex = 21334;

	class UnloadLittleGameArea : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADLITTLEGAMEAREA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnloadLittleGameArea* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnloadLittleGameArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADLITTLEGAMEAREA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnloadLittleGameArea* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnloadLittleGameArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADLITTLEGAMEAREA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
