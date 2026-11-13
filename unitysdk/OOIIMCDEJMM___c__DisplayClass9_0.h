#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFGDEHAHLHC;
class OOIIMCDEJMM;
namespace UnityEngine { class GameObject; }

#define OOIIMCDEJMM___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0x196A7E00)
#define OOIIMCDEJMM___C__DISPLAYCLASS9_0__LOADASSETASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x196A86D0)

inline static constexpr unsigned int OOIIMCDEJMM___c__DisplayClass9_0_TypeDefinitionIndex = 78881;

	class OOIIMCDEJMM___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::OOIIMCDEJMM* __4__this; // 0x10
		::DFGDEHAHLHC* entity; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIIMCDEJMM___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Void _LoadAssetAsync_b__0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OOIIMCDEJMM___C__DISPLAYCLASS9_0__LOADASSETASYNC_B__0_OFFSET))(this, a1);
		}

	};
