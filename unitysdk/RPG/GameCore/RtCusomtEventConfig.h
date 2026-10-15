#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class RtCusomtEventConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RTCUSOMTEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2CA70)
#define RPG_GAMECORE_RTCUSOMTEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2C8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtCusomtEventConfig_TypeDefinitionIndex = 24197;

	class RtCusomtEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::JsonEnum* Event; // 0x10
		::System::Int32 Priority; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCUSOMTEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtCusomtEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtCusomtEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCUSOMTEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
