#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOOAKOOHCKM.h"
#include "unitysdk/JDJFBGCAEOI.h"
#include "unitysdk/MoleMole/IMonoModelShapeElement.h"
#include "unitysdk/MEAKCNLKBEJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOMODELSINGLEBONECAPSULE_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x1043B410)
#define MOLEMOLE_MONOMODELSINGLEBONECAPSULE_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1043B420)
#define MOLEMOLE_MONOMODELSINGLEBONECAPSULE_MCKOKDOBPDN_OFFSET UNITYSDK_OFFSET(0x1043BA30)
#define MOLEMOLE_MONOMODELSINGLEBONECAPSULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1043BA20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoModelSingleBoneCapsule_TypeDefinitionIndex = 66525;

	class MonoModelSingleBoneCapsule : public ::MoleMole::IMonoModelShapeElement
	{
	public:
		::UnityEngine::Transform* bone; // 0x10
		::GOOAKOOHCKM direction; // 0x18
		::System::Single boneOffset; // 0x1C
		::System::Single height; // 0x20
		::System::Single radius; // 0x24
		::JDJFBGCAEOI flag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELSINGLEBONECAPSULE__CTOR_OFFSET))(this);
		}

		::JDJFBGCAEOI get_Flag()
		{
			return ((::JDJFBGCAEOI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELSINGLEBONECAPSULE_GET_FLAG_OFFSET))(this);
		}

		::MEAKCNLKBEJ get_Shape()
		{
			return ((::MEAKCNLKBEJ(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELSINGLEBONECAPSULE_GET_SHAPE_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 MCKOKDOBPDN(::UnityEngine::Transform* OHJOMJCNNMC, ::GOOAKOOHCKM JBCNPOHMGPE)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::GOOAKOOHCKM))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELSINGLEBONECAPSULE_MCKOKDOBPDN_OFFSET))(OHJOMJCNNMC, JBCNPOHMGPE);
		}
	};
}
