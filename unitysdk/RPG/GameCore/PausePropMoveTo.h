#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PausePropMoveTo; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PAUSEPROPMOVETO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C5820)
#define RPG_GAMECORE_PAUSEPROPMOVETO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8C5850)
#define RPG_GAMECORE_PAUSEPROPMOVETO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C57D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PausePropMoveTo_TypeDefinitionIndex = 21963;

	class PausePropMoveTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Pause; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEPROPMOVETO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PausePropMoveTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PausePropMoveTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEPROPMOVETO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PausePropMoveTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PausePropMoveTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEPROPMOVETO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
