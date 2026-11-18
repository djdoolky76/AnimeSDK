#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class DistortionProfileContext; }

#define MOLEMOLE_COMMANDLINEDISTORTION_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0x1908B820)
#define MOLEMOLE_COMMANDLINEDISTORTION_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0x1908B930)
#define MOLEMOLE_COMMANDLINEDISTORTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1908B8F0)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineDistortion_TypeDefinitionIndex = 75454;

	class CommandLineDistortion
	{
	public:
		::System::Nullable_1<::System::Boolean> enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEDISTORTION__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineDistortion* ALEKEEINDAO(::MoleMole::DistortionProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineDistortion*(*)(::PVOID, ::MoleMole::DistortionProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEDISTORTION_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::DistortionProfileContext* PMKOMFHNKOE(::MoleMole::DistortionProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::DistortionProfileContext*(*)(::PVOID, ::MoleMole::DistortionProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEDISTORTION_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
