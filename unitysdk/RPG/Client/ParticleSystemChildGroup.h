#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class ParticleSystemGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystemRenderer; }

#define RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0xDA8F990)
#define RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xDA8F130)
#define RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_NBECJPONNCD_OFFSET UNITYSDK_OFFSET(0xDA8F5D0)
#define RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDA8F660)
#define RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_ONPARENTGROUPALPHACHANGE_OFFSET UNITYSDK_OFFSET(0xDA8ECF0)
#define RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_START_OFFSET UNITYSDK_OFFSET(0xDA8F0E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParticleSystemChildGroup_TypeDefinitionIndex = 69010;

	class ParticleSystemChildGroup : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ParticleSystemGroup*>* MAOLIHGPIBE; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemRenderer*>* JKPMONKOGMC; // 0x20
		::RPG::Client::ParticleSystemGroup* NGHFFBMAABI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_CTOR_OFFSET))(this);
		}

		::System::Void OnParentGroupAlphaChange(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_ONPARENTGROUPALPHACHANGE_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_ONDESTROY_OFFSET))(this);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void NBECJPONNCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_NBECJPONNCD_OFFSET))(this);
		}

	};
}
