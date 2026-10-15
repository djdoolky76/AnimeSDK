#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
namespace EnviromentSystem { class EnviroPointLightProperty; }
namespace EnviromentSystem { class EnviromentProfile; }

#define ENVIROMENTSYSTEM_ENVIROPOINTLIGHTPROPERTY_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15615C60)
#define ENVIROMENTSYSTEM_ENVIROPOINTLIGHTPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1560DCD0)

namespace EnviromentSystem
{
	class EnviroPointLightProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPOINTLIGHTPROPERTY_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroPointLightProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroPointLightProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPOINTLIGHTPROPERTY_CTOR_1_OFFSET))(this, a1);
		}

	};
}
