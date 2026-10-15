#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicToastConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DYNAMICTOASTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FC5D0)
#define RPG_GAMECORE_DYNAMICTOASTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FC460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicToastConfig_TypeDefinitionIndex = 23839;

	class DynamicToastConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID Content; // 0x10
		::RPG::GameCore::TargetEvaluator* DisplayTarget; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICTOASTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicToastConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicToastConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICTOASTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
