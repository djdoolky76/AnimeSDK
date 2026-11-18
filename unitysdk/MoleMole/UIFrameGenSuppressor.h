#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_UIFRAMEGENSUPPRESSOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18932060)
#define MOLEMOLE_UIFRAMEGENSUPPRESSOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18931FB0)
#define MOLEMOLE_UIFRAMEGENSUPPRESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18932110)

namespace MoleMole
{
	inline static constexpr unsigned int UIFrameGenSuppressor_TypeDefinitionIndex = 43890;

	class UIFrameGenSuppressor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRAMEGENSUPPRESSOR__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRAMEGENSUPPRESSOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRAMEGENSUPPRESSOR_ONDISABLE_OFFSET))(this);
		}
	};
}
