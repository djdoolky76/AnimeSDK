#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialVisionType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvAddVisionUseCount; }

#define RPG_GAMECORE_ADVADDVISIONUSECOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D360830)
#define RPG_GAMECORE_ADVADDVISIONUSECOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D360840)
#define RPG_GAMECORE_ADVADDVISIONUSECOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3607F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvAddVisionUseCount_TypeDefinitionIndex = 21101;

	class AdvAddVisionUseCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SpecialVisionType VisionType; // 0x18
		::System::Int32 Count; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDVISIONUSECOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvAddVisionUseCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvAddVisionUseCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDVISIONUSECOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvAddVisionUseCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvAddVisionUseCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDVISIONUSECOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
