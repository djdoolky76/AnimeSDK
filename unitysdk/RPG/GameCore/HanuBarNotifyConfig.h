#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HanuBarNotifyConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HANUBARNOTIFYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D726BA0)
#define RPG_GAMECORE_HANUBARNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D726A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HanuBarNotifyConfig_TypeDefinitionIndex = 16969;

	class HanuBarNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AttachPoint; // 0x10
		::System::Single Duration; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HANUBARNOTIFYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HanuBarNotifyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HanuBarNotifyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HANUBARNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
