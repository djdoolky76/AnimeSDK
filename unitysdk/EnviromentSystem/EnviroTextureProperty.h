#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroAssetProperty.h"
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviroTextureProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_AFHGEEMLPLC_OFFSET UNITYSDK_OFFSET(0x15621840)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_AOHGNELBJOB_OFFSET UNITYSDK_OFFSET(0x156215E0)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_CIDBPDMJMMJ_OFFSET UNITYSDK_OFFSET(0x15621780)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15620990)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x155F4BA0)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_DCEDDCPIHPC_OFFSET UNITYSDK_OFFSET(0x15620E40)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_EAIHBIMFKPE_OFFSET UNITYSDK_OFFSET(0x15620DA0)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_EEPIDFNPIPG_OFFSET UNITYSDK_OFFSET(0x15620EE0)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_FMDIMGPGIHD_OFFSET UNITYSDK_OFFSET(0x156213D0)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_GOHOOFAPHKP_OFFSET UNITYSDK_OFFSET(0x15621880)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0x15621360)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_KIJHKHCLJBL_OFFSET UNITYSDK_OFFSET(0x156214B0)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_LGNNAOLPNIP_OFFSET UNITYSDK_OFFSET(0x15620A30)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x15620CB0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroTextureProperty_TypeDefinitionIndex = 49626;

	class EnviroTextureProperty : public ::EnviromentSystem::EnviroAssetProperty
	{
	public:
		::UnityEngine::Texture* m_Value; // 0x50
		::System::String* m_Path; // 0x58
		::System::Boolean m_isCube; // 0x60
		::System::Byte _padding0[0x7];
		::UnityEngine::Texture* m_Target_Tex; // 0x68
		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroTextureProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroTextureProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void LGNNAOLPNIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_LGNNAOLPNIP_OFFSET))(this, a1);
		}

		::System::Void PPEGOIODAKI(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void EEPIDFNPIPG(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_EEPIDFNPIPG_OFFSET))(this, a1);
		}

		::System::Void IKOHLHDGFKH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_IKOHLHDGFKH_OFFSET))(this, a1);
		}

		::System::Boolean FMDIMGPGIHD(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_FMDIMGPGIHD_OFFSET))(this, a1);
		}

		::System::Void KIJHKHCLJBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_KIJHKHCLJBL_OFFSET))(this);
		}

		::System::Void AOHGNELBJOB(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_AOHGNELBJOB_OFFSET))(this, a1, a2);
		}

		::System::Void CIDBPDMJMMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_CIDBPDMJMMJ_OFFSET))(this);
		}

		::System::Void AFHGEEMLPLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_AFHGEEMLPLC_OFFSET))(this);
		}

		::System::Void GOHOOFAPHKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_GOHOOFAPHKP_OFFSET))(this);
		}

		::System::Void EAIHBIMFKPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_EAIHBIMFKPE_OFFSET))(this);
		}

		::System::Void DCEDDCPIHPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_DCEDDCPIHPC_OFFSET))(this);
		}

	};
}
