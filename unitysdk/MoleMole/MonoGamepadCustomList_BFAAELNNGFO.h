#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOGAMEPADCUSTOMLIST_BFAAELNNGFO_OIHOHEPNIMK_OFFSET UNITYSDK_OFFSET(0x130F0730)
#define MOLEMOLE_MONOGAMEPADCUSTOMLIST_BFAAELNNGFO__CTOR_OFFSET UNITYSDK_OFFSET(0x130F0720)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadCustomList_BFAAELNNGFO_TypeDefinitionIndex = 66217;

	class MonoGamepadCustomList_BFAAELNNGFO : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* EIFONLCJOPG; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADCUSTOMLIST_BFAAELNNGFO__CTOR_OFFSET))(this);
		}

		::System::Boolean OIHOHEPNIMK(::UnityEngine::GameObject* HAAEBCOBKFF)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADCUSTOMLIST_BFAAELNNGFO_OIHOHEPNIMK_OFFSET))(this, HAAEBCOBKFF);
		}
	};
}
