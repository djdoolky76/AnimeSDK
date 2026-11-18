#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MirrorReflectionQuality.h"

namespace MoleMole { class MirrorReflectionProfileContext; }

#define MOLEMOLE_COMMANDLINEMIRRORREFLECTION_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0xFAA0B90)
#define MOLEMOLE_COMMANDLINEMIRRORREFLECTION_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0xFAA0CE0)
#define MOLEMOLE_COMMANDLINEMIRRORREFLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xFAA0CA0)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineMirrorReflection_TypeDefinitionIndex = 74985;

	class CommandLineMirrorReflection
	{
	public:
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::MirrorReflectionQuality> MirrorReflectionSetting; // 0x18
		::System::Nullable_1<::System::Int32> SSRDownScale; // 0x20
		::System::Nullable_1<::System::Single> SSRMinSmoothness; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEMIRRORREFLECTION__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineMirrorReflection* ALEKEEINDAO(::MoleMole::MirrorReflectionProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineMirrorReflection*(*)(::PVOID, ::MoleMole::MirrorReflectionProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEMIRRORREFLECTION_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::MirrorReflectionProfileContext* PMKOMFHNKOE(::MoleMole::MirrorReflectionProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::MirrorReflectionProfileContext*(*)(::PVOID, ::MoleMole::MirrorReflectionProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEMIRRORREFLECTION_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
