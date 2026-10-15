#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PreloadStateTransitionType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PreloadStateTransitionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PRELOADSTATETRANSITIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D912C60)
#define RPG_GAMECORE_PRELOADSTATETRANSITIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D912AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadStateTransitionConfig_TypeDefinitionIndex = 16353;

	class PreloadStateTransitionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PreloadStateTransitionType Type; // 0x10
		::System::Int32 ToStateIndex; // 0x14
		::System::String* SkillName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADSTATETRANSITIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PreloadStateTransitionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PreloadStateTransitionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADSTATETRANSITIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
