#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class LoadLittleGameArea; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_LOADLITTLEGAMEAREA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BC840)
#define RPG_GAMECORE_LOADLITTLEGAMEAREA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7BC870)
#define RPG_GAMECORE_LOADLITTLEGAMEAREA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7BC7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadLittleGameArea_TypeDefinitionIndex = 20995;

	class LoadLittleGameArea : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* Area; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADLITTLEGAMEAREA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoadLittleGameArea* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoadLittleGameArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADLITTLEGAMEAREA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoadLittleGameArea* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoadLittleGameArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADLITTLEGAMEAREA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
