#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RegisterPropServerStateRotation; }

#define RPG_GAMECORE_REGISTERPROPSERVERSTATEROTATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9774F0)
#define RPG_GAMECORE_REGISTERPROPSERVERSTATEROTATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D977500)
#define RPG_GAMECORE_REGISTERPROPSERVERSTATEROTATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9774B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RegisterPropServerStateRotation_TypeDefinitionIndex = 20351;

	class RegisterPropServerStateRotation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGISTERPROPSERVERSTATEROTATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RegisterPropServerStateRotation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RegisterPropServerStateRotation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGISTERPROPSERVERSTATEROTATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RegisterPropServerStateRotation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RegisterPropServerStateRotation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGISTERPROPSERVERSTATEROTATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
