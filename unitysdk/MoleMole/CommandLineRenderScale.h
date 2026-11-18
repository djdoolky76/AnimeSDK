#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class RenderScaleProfileContext; }

#define MOLEMOLE_COMMANDLINERENDERSCALE_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0x19B03410)
#define MOLEMOLE_COMMANDLINERENDERSCALE_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0x19B03550)
#define MOLEMOLE_COMMANDLINERENDERSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B03510)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineRenderScale_TypeDefinitionIndex = 46976;

	class CommandLineRenderScale
	{
	public:
		::System::Nullable_1<::System::Single> RenderScaleValue; // 0x18
		::System::Nullable_1<::System::Single> RenderTargetFactor; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINERENDERSCALE__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineRenderScale* ALEKEEINDAO(::MoleMole::RenderScaleProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineRenderScale*(*)(::PVOID, ::MoleMole::RenderScaleProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINERENDERSCALE_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::RenderScaleProfileContext* PMKOMFHNKOE(::MoleMole::RenderScaleProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::RenderScaleProfileContext*(*)(::PVOID, ::MoleMole::RenderScaleProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINERENDERSCALE_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
