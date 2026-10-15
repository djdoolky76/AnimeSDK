#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResidentEffectConfig; }
namespace RPG::GameCore { class ResidentEffectConfigItem; }
namespace System { class String; }

#define RPG_GAMECORE_RESIDENTEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D98C9E0)
#define RPG_GAMECORE_RESIDENTEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D98C850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResidentEffectConfig_TypeDefinitionIndex = 16536;

	class ResidentEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* IgnorePrefixList; // 0x10
		::Il2CppArray<::System::String*>* IgnoreSuffixList; // 0x18
		::Il2CppArray<::RPG::GameCore::ResidentEffectConfigItem*>* ConfigList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESIDENTEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResidentEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResidentEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESIDENTEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
