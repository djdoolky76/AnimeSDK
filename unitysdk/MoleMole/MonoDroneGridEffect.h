#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class MeshRenderer; }

#define MOLEMOLE_MONODRONEGRIDEFFECT_SYNCCHARACTERPOS_OFFSET UNITYSDK_OFFSET(0x130EC810)
#define MOLEMOLE_MONODRONEGRIDEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x130EC910)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDroneGridEffect_TypeDefinitionIndex = 65199;

	class MonoDroneGridEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 NOBPIJJPPNP; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::MeshRenderer* MeshRenderer; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRONEGRIDEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void SyncCharacterPos(::UnityEngine::Vector3 NLGEIGOEOLA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRONEGRIDEFFECT_SYNCCHARACTERPOS_OFFSET))(this, NLGEIGOEOLA);
		}
	};
}
