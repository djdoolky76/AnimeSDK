#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropDestructReset; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPDESTRUCTRESET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D949EB0)
#define RPG_GAMECORE_PROPDESTRUCTRESET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D949EE0)
#define RPG_GAMECORE_PROPDESTRUCTRESET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D949E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropDestructReset_TypeDefinitionIndex = 20179;

	class PropDestructReset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCTRESET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropDestructReset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropDestructReset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCTRESET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropDestructReset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropDestructReset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCTRESET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
