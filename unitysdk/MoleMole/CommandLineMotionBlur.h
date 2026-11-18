#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class MotionBlurProfileContext; }

#define MOLEMOLE_COMMANDLINEMOTIONBLUR_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0x174E9E10)
#define MOLEMOLE_COMMANDLINEMOTIONBLUR_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0x174E9F20)
#define MOLEMOLE_COMMANDLINEMOTIONBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x174E9EE0)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineMotionBlur_TypeDefinitionIndex = 90407;

	class CommandLineMotionBlur
	{
	public:
		::System::Nullable_1<::System::Boolean> enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEMOTIONBLUR__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineMotionBlur* ALEKEEINDAO(::MoleMole::MotionBlurProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineMotionBlur*(*)(::PVOID, ::MoleMole::MotionBlurProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEMOTIONBLUR_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::MotionBlurProfileContext* PMKOMFHNKOE(::MoleMole::MotionBlurProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::MotionBlurProfileContext*(*)(::PVOID, ::MoleMole::MotionBlurProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEMOTIONBLUR_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
