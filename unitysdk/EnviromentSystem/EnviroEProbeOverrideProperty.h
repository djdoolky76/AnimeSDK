#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroBoolProperty.h"
namespace EnviromentSystem { class EnviroBoolProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }

#define ENVIROMENTSYSTEM_ENVIROEPROBEOVERRIDEPROPERTY_CTOR_1_OFFSET UNITYSDK_OFFSET(0x155ED130)
#define ENVIROMENTSYSTEM_ENVIROEPROBEOVERRIDEPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x155ED080)
#define ENVIROMENTSYSTEM_ENVIROEPROBEOVERRIDEPROPERTY_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0x155ED210)

namespace EnviromentSystem
{
	class EnviroEProbeOverrideProperty : public ::EnviromentSystem::EnviroBoolProperty
	{
	public:
		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEPROBEOVERRIDEPROPERTY_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroBoolProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroBoolProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEPROBEOVERRIDEPROPERTY_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void IKOHLHDGFKH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEPROBEOVERRIDEPROPERTY_IKOHLHDGFKH_OFFSET))(this, a1);
		}

	};
}
