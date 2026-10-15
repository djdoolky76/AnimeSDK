#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroAssetProperty.h"
namespace EnviromentSystem { class EnviroPostProcessVolumeProperty; }
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class VolumeProfile; }

#define ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_AFHGEEMLPLC_OFFSET UNITYSDK_OFFSET(0x15616C90)
#define ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_AOHGNELBJOB_OFFSET UNITYSDK_OFFSET(0x156163E0)
#define ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_CIDBPDMJMMJ_OFFSET UNITYSDK_OFFSET(0x156161E0)
#define ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15615CF0)
#define ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1560DB80)
#define ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_DCEDDCPIHPC_OFFSET UNITYSDK_OFFSET(0x15616620)
#define ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x15615F00)
#define ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_EAIHBIMFKPE_OFFSET UNITYSDK_OFFSET(0x15616580)
#define ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_EEPIDFNPIPG_OFFSET UNITYSDK_OFFSET(0x15616B50)
#define ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_EHNEFKHJALP_OFFSET UNITYSDK_OFFSET(0x15616150)
#define ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_FMDIMGPGIHD_OFFSET UNITYSDK_OFFSET(0x15616100)
#define ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_GOHOOFAPHKP_OFFSET UNITYSDK_OFFSET(0x15616C40)
#define ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_KIJHKHCLJBL_OFFSET UNITYSDK_OFFSET(0x156162B0)
#define ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_LGNNAOLPNIP_OFFSET UNITYSDK_OFFSET(0x156166D0)
#define ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_OCNADHMAJGP_OFFSET UNITYSDK_OFFSET(0x15616BB0)
#define ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x15615DD0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroPostProcessVolumeProperty_TypeDefinitionIndex = 49611;

	class EnviroPostProcessVolumeProperty : public ::EnviromentSystem::EnviroAssetProperty
	{
	public:
		::System::String* m_Path; // 0x50
		::UnityEngine::Rendering::VolumeProfile* _Volume; // 0x58
		::System::Single _Transtion; // 0x60
		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroPostProcessVolumeProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroPostProcessVolumeProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void PPEGOIODAKI(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Boolean FMDIMGPGIHD(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_FMDIMGPGIHD_OFFSET))(this, a1);
		}

		::System::Void EHNEFKHJALP(::UnityEngine::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_EHNEFKHJALP_OFFSET))(this, a1, a2);
		}

		::System::Void CIDBPDMJMMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_CIDBPDMJMMJ_OFFSET))(this);
		}

		::System::Void KIJHKHCLJBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_KIJHKHCLJBL_OFFSET))(this);
		}

		::System::Void AOHGNELBJOB(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_AOHGNELBJOB_OFFSET))(this, a1, a2);
		}

		::System::Void EAIHBIMFKPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_EAIHBIMFKPE_OFFSET))(this);
		}

		::System::Void DCEDDCPIHPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_DCEDDCPIHPC_OFFSET))(this);
		}

		::System::Void LGNNAOLPNIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_LGNNAOLPNIP_OFFSET))(this, a1);
		}

		::System::Void EEPIDFNPIPG(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_EEPIDFNPIPG_OFFSET))(this, a1);
		}

		::System::Void OCNADHMAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_OCNADHMAJGP_OFFSET))(this);
		}

		::System::Void GOHOOFAPHKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_GOHOOFAPHKP_OFFSET))(this);
		}

		::System::Void AFHGEEMLPLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPOSTPROCESSVOLUMEPROPERTY_AFHGEEMLPLC_OFFSET))(this);
		}

	};
}
