#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTargetTypeNotifyConfig; }

#define RPG_GAMECORE_SETTARGETTYPENOTIFYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA98EA0)
#define RPG_GAMECORE_SETTARGETTYPENOTIFYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA98DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetTypeNotifyConfig_TypeDefinitionIndex = 16965;

	class SetTargetTypeNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Hp; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETTYPENOTIFYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetTypeNotifyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetTypeNotifyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETTYPENOTIFYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
