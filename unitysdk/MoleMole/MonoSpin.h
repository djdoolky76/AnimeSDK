#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOSPIN_FHDAIJENGCB_OFFSET UNITYSDK_OFFSET(0x10440640)
#define MOLEMOLE_MONOSPIN_OFOIHOINMJG_OFFSET UNITYSDK_OFFSET(0x10440450)
#define MOLEMOLE_MONOSPIN_UPDATE_OFFSET UNITYSDK_OFFSET(0x10440400)
#define MOLEMOLE_MONOSPIN__CTOR_OFFSET UNITYSDK_OFFSET(0x104405F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSpin_TypeDefinitionIndex = 79216;

	class MonoSpin : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* target; // 0x18
		::UnityEngine::Vector3 mousePos; // 0x20
		::System::Boolean COOOBMPPCNP; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPIN__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPIN_UPDATE_OFFSET))(this);
		}

		::System::Void OFOIHOINMJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPIN_OFOIHOINMJG_OFFSET))(this);
		}

		::System::Boolean FHDAIJENGCB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPIN_FHDAIJENGCB_OFFSET))(this);
		}
	};
}
