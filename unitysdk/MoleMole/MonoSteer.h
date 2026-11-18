#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class BBDCAGEKHAJ;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_MONOSTEER_GETSTEER_OFFSET UNITYSDK_OFFSET(0x12498840)
#define MOLEMOLE_MONOSTEER__CTOR_OFFSET UNITYSDK_OFFSET(0x12498C10)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSteer_TypeDefinitionIndex = 92102;

	class MonoSteer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single weight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTEER__CTOR_OFFSET))(this);
		}

		::BBDCAGEKHAJ* GetSteer(::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::BBDCAGEKHAJ*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTEER_GETSTEER_OFFSET))(this, KECKGDFIALJ);
		}
	};
}
