#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetLevel; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETLEVEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA89FF0)
#define RPG_GAMECORE_SETLEVEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8A030)
#define RPG_GAMECORE_SETLEVEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA89F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLevel_TypeDefinitionIndex = 23665;

	class SetLevel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean ByStageLevel; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLEVEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLEVEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLEVEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
