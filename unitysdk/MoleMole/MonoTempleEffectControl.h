#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_MONOTEMPLEEFFECTCONTROL_AJEEBNCNHMN_OFFSET UNITYSDK_OFFSET(0x162E8EE0)
#define MOLEMOLE_MONOTEMPLEEFFECTCONTROL_DLIDBNKMKCO_OFFSET UNITYSDK_OFFSET(0x162E8400)
#define MOLEMOLE_MONOTEMPLEEFFECTCONTROL_INITTEMPLEPARTICLE_OFFSET UNITYSDK_OFFSET(0x162E86B0)
#define MOLEMOLE_MONOTEMPLEEFFECTCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x162E8340)
#define MOLEMOLE_MONOTEMPLEEFFECTCONTROL_START_OFFSET UNITYSDK_OFFSET(0x162E8670)
#define MOLEMOLE_MONOTEMPLEEFFECTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x162E8E90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTempleEffectControl_TypeDefinitionIndex = 61050;

	class MonoTempleEffectControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::MeshFilter* Mesh; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* Particles; // 0x20
		::UnityEngine::MeshFilter* LNHGBEKOCBM; // 0x28
		::UnityEngine::MeshRenderer* KEJJBOFBGOG; // 0x30
		::System::Boolean HPINBCPMHJE; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEMPLEEFFECTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEMPLEEFFECTCONTROL_ONDISABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEMPLEEFFECTCONTROL_START_OFFSET))(this);
		}

		::System::Void InitTempleParticle(::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEMPLEEFFECTCONTROL_INITTEMPLEPARTICLE_OFFSET))(this, KECKGDFIALJ);
		}

		::System::Void DLIDBNKMKCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEMPLEEFFECTCONTROL_DLIDBNKMKCO_OFFSET))(this);
		}

		::System::Void AJEEBNCNHMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEMPLEEFFECTCONTROL_AJEEBNCNHMN_OFFSET))(this);
		}
	};
}
