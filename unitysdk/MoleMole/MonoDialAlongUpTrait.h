#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoPartySceneObject.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class DialAlongUpTrait; }
namespace UnityEngine { class Rigidbody; }

#define MOLEMOLE_MONODIALALONGUPTRAIT_EGNLNKOEJJH_OFFSET UNITYSDK_OFFSET(0x10432160)
#define MOLEMOLE_MONODIALALONGUPTRAIT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10431970)
#define MOLEMOLE_MONODIALALONGUPTRAIT_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0x10431CA0)
#define MOLEMOLE_MONODIALALONGUPTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x10432000)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDialAlongUpTrait_TypeDefinitionIndex = 39048;

	class MonoDialAlongUpTrait : public ::MoleMole::MonoPartySceneObject
	{
	public:
		::System::Single KDMAPIKGLJM; // 0x40
		::System::Single KAMKLEHFPMD; // 0x44
		::UnityEngine::Vector3 JLOIJBBFCNJ; // 0x48
		::UnityEngine::Quaternion PDONILCBKGC; // 0x54
		::System::Byte _padding0[0x4];
		::UnityEngine::Rigidbody* CFCDGNIJMNL; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIALALONGUPTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::MoleMole::Config::DialAlongUpTrait* DLNHBAFBNIA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DialAlongUpTrait*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIALALONGUPTRAIT_INITIALIZE_OFFSET))(this, DLNHBAFBNIA);
		}

		::System::Void OnDoUpdate(::System::UInt32 BNNCKJIALIO)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIALALONGUPTRAIT_ONDOUPDATE_OFFSET))(this, BNNCKJIALIO);
		}

		::System::Void EGNLNKOEJJH(::System::UInt32 MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIALALONGUPTRAIT_EGNLNKOEJJH_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
