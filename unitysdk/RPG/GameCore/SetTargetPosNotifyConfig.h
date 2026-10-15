#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTargetPosNotifyConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SETTARGETPOSNOTIFYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA986E0)
#define RPG_GAMECORE_SETTARGETPOSNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA98610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetPosNotifyConfig_TypeDefinitionIndex = 16966;

	class SetTargetPosNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PointName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETPOSNOTIFYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetPosNotifyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetPosNotifyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETPOSNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
