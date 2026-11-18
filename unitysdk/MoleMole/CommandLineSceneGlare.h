#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class SceneGlareProfileContext; }

#define MOLEMOLE_COMMANDLINESCENEGLARE_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0x192838A0)
#define MOLEMOLE_COMMANDLINESCENEGLARE_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0x192839B0)
#define MOLEMOLE_COMMANDLINESCENEGLARE__CTOR_OFFSET UNITYSDK_OFFSET(0x19283970)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineSceneGlare_TypeDefinitionIndex = 81347;

	class CommandLineSceneGlare
	{
	public:
		::System::Nullable_1<::System::Boolean> IsSceneGlareOn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESCENEGLARE__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineSceneGlare* ALEKEEINDAO(::MoleMole::SceneGlareProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineSceneGlare*(*)(::PVOID, ::MoleMole::SceneGlareProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESCENEGLARE_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::SceneGlareProfileContext* PMKOMFHNKOE(::MoleMole::SceneGlareProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::SceneGlareProfileContext*(*)(::PVOID, ::MoleMole::SceneGlareProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESCENEGLARE_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
