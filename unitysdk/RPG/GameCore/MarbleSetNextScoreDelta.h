#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSetNextScoreDelta; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLESETNEXTSCOREDELTA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81AC50)
#define RPG_GAMECORE_MARBLESETNEXTSCOREDELTA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D81AC60)
#define RPG_GAMECORE_MARBLESETNEXTSCOREDELTA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D81AC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSetNextScoreDelta_TypeDefinitionIndex = 16861;

	class MarbleSetNextScoreDelta : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Int32 Score; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* ScoreDynamic; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETNEXTSCOREDELTA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSetNextScoreDelta* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSetNextScoreDelta*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETNEXTSCOREDELTA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSetNextScoreDelta* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSetNextScoreDelta*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETNEXTSCOREDELTA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
