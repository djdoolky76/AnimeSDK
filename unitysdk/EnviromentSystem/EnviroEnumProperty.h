#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
namespace EnviromentSystem { class EnviroEnumProperty; }
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_CTOR_1_OFFSET UNITYSDK_OFFSET(0x155E1FE0)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x155E1F40)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_EAIHBIMFKPE_OFFSET UNITYSDK_OFFSET(0x155E22B0)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_EEPIDFNPIPG_OFFSET UNITYSDK_OFFSET(0x155E2440)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0x155E24B0)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_LGNNAOLPNIP_OFFSET UNITYSDK_OFFSET(0x155E2070)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x155E2350)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroEnumProperty_TypeDefinitionIndex = 49598;

	class EnviroEnumProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::System::Int32 m_Value; // 0x48
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::String*>* m_Words; // 0x50
		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::System::Int32 a3, ::Il2CppArray<::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroEnumProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroEnumProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void LGNNAOLPNIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_LGNNAOLPNIP_OFFSET))(this, a1);
		}

		::System::Void PPEGOIODAKI(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void EEPIDFNPIPG(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_EEPIDFNPIPG_OFFSET))(this, a1);
		}

		::System::Void IKOHLHDGFKH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_IKOHLHDGFKH_OFFSET))(this, a1);
		}

		::System::Void EAIHBIMFKPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_EAIHBIMFKPE_OFFSET))(this);
		}

	};
}
