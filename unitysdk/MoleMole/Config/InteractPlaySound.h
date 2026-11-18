#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowInteractEffectImpBase.h"

class PJGJHHPJEKD;

#define MOLEMOLE_CONFIG_INTERACTPLAYSOUND_ONINTERACTINTERNAL_OFFSET UNITYSDK_OFFSET(0x19B24620)
#define MOLEMOLE_CONFIG_INTERACTPLAYSOUND_ONSTOP_OFFSET UNITYSDK_OFFSET(0x19B245D0)
#define MOLEMOLE_CONFIG_INTERACTPLAYSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x19B247A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractPlaySound_TypeDefinitionIndex = 53014;

	class InteractPlaySound : public ::MoleMole::Config::HollowInteractEffectImpBase
	{
	public:
		::System::Int32 SoundID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTPLAYSOUND__CTOR_OFFSET))(this);
		}

		::System::Void OnStop(::PJGJHHPJEKD* context)
		{
			return ((::System::Void(*)(::PVOID, ::PJGJHHPJEKD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTPLAYSOUND_ONSTOP_OFFSET))(this, context);
		}

		::System::Void OnInteractInternal(::PJGJHHPJEKD* context)
		{
			return ((::System::Void(*)(::PVOID, ::PJGJHHPJEKD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTPLAYSOUND_ONINTERACTINTERNAL_OFFSET))(this, context);
		}
	};
}
