#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"

namespace MoleMole { class AntiAliasProfileContext; }

#define MOLEMOLE_COMMANDLINEANTIALIAS_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0x163F44D0)
#define MOLEMOLE_COMMANDLINEANTIALIAS_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0x163F45E0)
#define MOLEMOLE_COMMANDLINEANTIALIAS__CTOR_OFFSET UNITYSDK_OFFSET(0x163F45A0)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineAntiAlias_TypeDefinitionIndex = 81577;

	class CommandLineAntiAlias
	{
	public:
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::AntialiasingMode> AntiAliasSetting; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEANTIALIAS__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineAntiAlias* ALEKEEINDAO(::MoleMole::AntiAliasProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineAntiAlias*(*)(::PVOID, ::MoleMole::AntiAliasProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEANTIALIAS_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::AntiAliasProfileContext* PMKOMFHNKOE(::MoleMole::AntiAliasProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::AntiAliasProfileContext*(*)(::PVOID, ::MoleMole::AntiAliasProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEANTIALIAS_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
