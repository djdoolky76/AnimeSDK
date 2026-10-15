#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConvinceSplitLine; }

#define RPG_GAMECORE_CONVINCESPLITLINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DF990)
#define RPG_GAMECORE_CONVINCESPLITLINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5DF9A0)
#define RPG_GAMECORE_CONVINCESPLITLINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5DF960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceSplitLine_TypeDefinitionIndex = 21833;

	class ConvinceSplitLine : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Pos; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCESPLITLINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceSplitLine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceSplitLine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCESPLITLINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceSplitLine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceSplitLine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCESPLITLINE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
