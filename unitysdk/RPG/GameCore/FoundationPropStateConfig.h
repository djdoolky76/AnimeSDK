#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FoundationPropStateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FOUNDATIONPROPSTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BEBA0)
#define RPG_GAMECORE_FOUNDATIONPROPSTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BEA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FoundationPropStateConfig_TypeDefinitionIndex = 17578;

	class FoundationPropStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PropState State; // 0x10
		::System::Single RotateAngle; // 0x14
		::System::String* BallStateName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOUNDATIONPROPSTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FoundationPropStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FoundationPropStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOUNDATIONPROPSTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
