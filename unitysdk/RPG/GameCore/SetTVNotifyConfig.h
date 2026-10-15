#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTVNotifyConfig; }

#define RPG_GAMECORE_SETTVNOTIFYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA96A20)
#define RPG_GAMECORE_SETTVNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA96940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTVNotifyConfig_TypeDefinitionIndex = 16967;

	class SetTVNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 State; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTVNOTIFYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTVNotifyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTVNotifyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTVNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
