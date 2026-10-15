#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
namespace EnviromentSystem { class EnviroFloatProperty; }
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_CTOR_1_OFFSET UNITYSDK_OFFSET(0x155EE030)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_CTOR_2_OFFSET UNITYSDK_OFFSET(0x155EE0E0)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x155EDFA0)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_EAIHBIMFKPE_OFFSET UNITYSDK_OFFSET(0x155EE3E0)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_EEPIDFNPIPG_OFFSET UNITYSDK_OFFSET(0x155EE5E0)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0x155EE570)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_LGNNAOLPNIP_OFFSET UNITYSDK_OFFSET(0x155EE170)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x155EE480)

namespace EnviromentSystem
{
	class EnviroFloatProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::System::Single m_Value; // 0x48
		::System::Single m_Min; // 0x4C
		::System::Single m_Max; // 0x50
		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_2(::EnviromentSystem::EnviroFloatProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroFloatProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_CTOR_2_OFFSET))(this, a1);
		}

		::System::Void LGNNAOLPNIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_LGNNAOLPNIP_OFFSET))(this, a1);
		}

		::System::Void PPEGOIODAKI(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void IKOHLHDGFKH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_IKOHLHDGFKH_OFFSET))(this, a1);
		}

		::System::Void EEPIDFNPIPG(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_EEPIDFNPIPG_OFFSET))(this, a1);
		}

		::System::Void EAIHBIMFKPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_EAIHBIMFKPE_OFFSET))(this);
		}

	};
}
