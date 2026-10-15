#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFGDEHAHLHC;
class OOIIMCDEJMM;
namespace UnityEngine { class GameObject; }

#define OOIIMCDEJMM___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBF88300)
#define OOIIMCDEJMM___C__DISPLAYCLASS9_0__LOADASSETASYNC_B__0_OFFSET UNITYSDK_OFFSET(0xBF88BD0)

inline static constexpr unsigned int OOIIMCDEJMM___c__DisplayClass9_0_TypeDefinitionIndex = 76551;

	class OOIIMCDEJMM___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::DFGDEHAHLHC* entity; // 0x10
		::OOIIMCDEJMM* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIIMCDEJMM___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Void _LoadAssetAsync_b__0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OOIIMCDEJMM___C__DISPLAYCLASS9_0__LOADASSETASYNC_B__0_OFFSET))(this, a1);
		}

	};
