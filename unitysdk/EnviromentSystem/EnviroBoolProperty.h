#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
namespace EnviromentSystem { class EnviroBoolProperty; }
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_CTOR_1_OFFSET UNITYSDK_OFFSET(0x155EC920)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x155EC870)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_EAIHBIMFKPE_OFFSET UNITYSDK_OFFSET(0x155ECD60)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_EEPIDFNPIPG_OFFSET UNITYSDK_OFFSET(0x155ECF60)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_LGNNAOLPNIP_OFFSET UNITYSDK_OFFSET(0x155ECAF0)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_POKFMJBKALE_OFFSET UNITYSDK_OFFSET(0x155EC9D0)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x155ECE00)

namespace EnviromentSystem
{
	class EnviroBoolProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::System::Boolean m_Value; // 0x48
		::System::Byte _padding0[0x7];
		::System::String* m_KeyWord; // 0x50
		::System::Boolean m_DisableWhenTransitionDifferent; // 0x58
		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroBoolProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroBoolProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_CTOR_1_OFFSET))(this, a1);
		}

		::System::Boolean POKFMJBKALE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_POKFMJBKALE_OFFSET))(this);
		}

		::System::Void LGNNAOLPNIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_LGNNAOLPNIP_OFFSET))(this, a1);
		}

		::System::Void PPEGOIODAKI(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void EEPIDFNPIPG(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_EEPIDFNPIPG_OFFSET))(this, a1);
		}

		::System::Void EAIHBIMFKPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_EAIHBIMFKPE_OFFSET))(this);
		}

	};
}
