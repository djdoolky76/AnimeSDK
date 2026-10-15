#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AliasConfig; }
namespace RPG::GameCore { class RuntimeStageCaptureAliasData; }

#define RPG_GAMECORE_ALIASCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B19E0)
#define RPG_GAMECORE_ALIASCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B18F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AliasConfig_TypeDefinitionIndex = 19168;

	class AliasConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RuntimeStageCaptureAliasData*>* IndexToAlias; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALIASCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AliasConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AliasConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALIASCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
