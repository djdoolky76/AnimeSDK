#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GAHPNAEGACM;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define DABJFMFKAKN_BLHLHDNGJOM_OFFSET UNITYSDK_OFFSET(0xDFBAD90)
#define DABJFMFKAKN_CTOR_OFFSET UNITYSDK_OFFSET(0xDFBAF70)
#define DABJFMFKAKN_DEJEIKJJHCE_OFFSET UNITYSDK_OFFSET(0xDFBAE60)
#define DABJFMFKAKN_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xDFBAEB0)

inline static constexpr unsigned int DABJFMFKAKN_TypeDefinitionIndex = 71384;

	class DABJFMFKAKN : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::ParticleSystem* ENDFGNLJKGB; // 0x60
		::UnityEngine::Transform* POICFHABNMJ; // 0x68
		::UnityEngine::ParticleSystem* AINFBDIJDEN; // 0x70
		::UnityEngine::Vector3 LIJJDMDKLLF; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABJFMFKAKN_CTOR_OFFSET))(this);
		}

		::System::Void BLHLHDNGJOM(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DABJFMFKAKN_BLHLHDNGJOM_OFFSET))(this, a1);
		}

		::System::Void DEJEIKJJHCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABJFMFKAKN_DEJEIKJJHCE_OFFSET))(this);
		}

		::System::Void PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + DABJFMFKAKN_PEGNJCBFPFB_OFFSET))(this, a1);
		}

	};
