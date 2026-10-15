#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroAssetProperty.h"
namespace EnviromentSystem { class EnviroPrefabProperty; }
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_AFHGEEMLPLC_OFFSET UNITYSDK_OFFSET(0x156177C0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_AHGNCDFAFBM_OFFSET UNITYSDK_OFFSET(0x15617800)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_AOHGNELBJOB_OFFSET UNITYSDK_OFFSET(0x15617580)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_CIDBPDMJMMJ_OFFSET UNITYSDK_OFFSET(0x15617720)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15616D60)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x15616CD0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_DCEDDCPIHPC_OFFSET UNITYSDK_OFFSET(0x15617210)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_EAIHBIMFKPE_OFFSET UNITYSDK_OFFSET(0x15617170)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_EEPIDFNPIPG_OFFSET UNITYSDK_OFFSET(0x156172B0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_FMDIMGPGIHD_OFFSET UNITYSDK_OFFSET(0x15617370)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0x15617300)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_KIJHKHCLJBL_OFFSET UNITYSDK_OFFSET(0x15617450)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_LGNNAOLPNIP_OFFSET UNITYSDK_OFFSET(0x15616E00)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x15617080)

namespace EnviromentSystem
{
	class EnviroPrefabProperty : public ::EnviromentSystem::EnviroAssetProperty
	{
	public:
		::UnityEngine::GameObject* m_Value; // 0x50
		::System::String* m_Path; // 0x58
		::UnityEngine::GameObject* m_Target_Value; // 0x60
		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroPrefabProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroPrefabProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void LGNNAOLPNIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_LGNNAOLPNIP_OFFSET))(this, a1);
		}

		::System::Void PPEGOIODAKI(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void EEPIDFNPIPG(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_EEPIDFNPIPG_OFFSET))(this, a1);
		}

		::System::Void IKOHLHDGFKH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_IKOHLHDGFKH_OFFSET))(this, a1);
		}

		::System::Boolean FMDIMGPGIHD(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_FMDIMGPGIHD_OFFSET))(this, a1);
		}

		::System::Void KIJHKHCLJBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_KIJHKHCLJBL_OFFSET))(this);
		}

		::System::Void AOHGNELBJOB(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_AOHGNELBJOB_OFFSET))(this, a1, a2);
		}

		::System::Void CIDBPDMJMMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_CIDBPDMJMMJ_OFFSET))(this);
		}

		::System::Void AFHGEEMLPLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_AFHGEEMLPLC_OFFSET))(this);
		}

		::System::Void AHGNCDFAFBM(::UnityEngine::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_AHGNCDFAFBM_OFFSET))(this, a1, a2);
		}

		::System::Void EAIHBIMFKPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_EAIHBIMFKPE_OFFSET))(this);
		}

		::System::Void DCEDDCPIHPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_DCEDDCPIHPC_OFFSET))(this);
		}

	};
}
