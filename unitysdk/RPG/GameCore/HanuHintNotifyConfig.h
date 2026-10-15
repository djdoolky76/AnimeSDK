#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HanuHintNotifyConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HANUHINTNOTIFYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D726C80)
#define RPG_GAMECORE_HANUHINTNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D726BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HanuHintNotifyConfig_TypeDefinitionIndex = 16968;

	class HanuHintNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AttachPoint; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HANUHINTNOTIFYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HanuHintNotifyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HanuHintNotifyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HANUHINTNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
