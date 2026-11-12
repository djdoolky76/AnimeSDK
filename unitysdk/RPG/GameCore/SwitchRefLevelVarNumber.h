#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SwitchRefLevelVarNumber; }

#define RPG_GAMECORE_SWITCHREFLEVELVARNUMBER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EDF5A80)
#define RPG_GAMECORE_SWITCHREFLEVELVARNUMBER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EDF5A90)
#define RPG_GAMECORE_SWITCHREFLEVELVARNUMBER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EDF6150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefLevelVarNumber_TypeDefinitionIndex = 17700;

	class SwitchRefLevelVarNumber : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::RPG::GameCore::DynamicFloat* Value; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFLEVELVARNUMBER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefLevelVarNumber* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefLevelVarNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFLEVELVARNUMBER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefLevelVarNumber* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefLevelVarNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFLEVELVARNUMBER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
