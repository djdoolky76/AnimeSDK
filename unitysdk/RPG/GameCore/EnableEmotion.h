#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableEmotion; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENABLEEMOTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D63EB00)
#define RPG_GAMECORE_ENABLEEMOTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D63EB10)
#define RPG_GAMECORE_ENABLEEMOTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D63EAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableEmotion_TypeDefinitionIndex = 22410;

	class EnableEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single TransitOutTime; // 0x24
		::System::Single TransitInTime; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEEMOTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEEMOTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEEMOTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
