#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResMissionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_RESMISSIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95C150)
#define RPG_GAMECORE_RESMISSIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95C000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResMissionConfig_TypeDefinitionIndex = 19027;

	class ResMissionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ResName; // 0x10
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESMISSIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResMissionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResMissionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESMISSIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
