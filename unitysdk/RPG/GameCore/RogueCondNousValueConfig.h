#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCondNousValueConfig; }

#define RPG_GAMECORE_ROGUECONDNOUSVALUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D984A70)
#define RPG_GAMECORE_ROGUECONDNOUSVALUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D984A80)
#define RPG_GAMECORE_ROGUECONDNOUSVALUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D984A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondNousValueConfig_TypeDefinitionIndex = 19803;

	class RogueCondNousValueConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDNOUSVALUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondNousValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondNousValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDNOUSVALUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondNousValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondNousValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDNOUSVALUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
