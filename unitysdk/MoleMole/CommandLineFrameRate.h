#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class FrameRateProfileContext; }

#define MOLEMOLE_COMMANDLINEFRAMERATE_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0x192252E0)
#define MOLEMOLE_COMMANDLINEFRAMERATE_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0x192253F0)
#define MOLEMOLE_COMMANDLINEFRAMERATE__CTOR_OFFSET UNITYSDK_OFFSET(0x192253B0)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineFrameRate_TypeDefinitionIndex = 56230;

	class CommandLineFrameRate
	{
	public:
		::System::Nullable_1<::System::Int32> FrameRate; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEFRAMERATE__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineFrameRate* ALEKEEINDAO(::MoleMole::FrameRateProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineFrameRate*(*)(::PVOID, ::MoleMole::FrameRateProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEFRAMERATE_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::FrameRateProfileContext* PMKOMFHNKOE(::MoleMole::FrameRateProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::FrameRateProfileContext*(*)(::PVOID, ::MoleMole::FrameRateProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEFRAMERATE_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
