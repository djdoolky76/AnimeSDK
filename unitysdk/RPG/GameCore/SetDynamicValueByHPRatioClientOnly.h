#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueByHPRatio.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByHPRatioClientOnly; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIOCLIENTONLY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA78750)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIOCLIENTONLY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA78760)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIOCLIENTONLY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA78920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByHPRatioClientOnly_TypeDefinitionIndex = 23581;

	class SetDynamicValueByHPRatioClientOnly : public ::RPG::GameCore::SetDynamicValueByHPRatio
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIOCLIENTONLY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByHPRatioClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByHPRatioClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIOCLIENTONLY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByHPRatioClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByHPRatioClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIOCLIENTONLY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
