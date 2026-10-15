#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLEFGGIHGMI;
class LPBNBKGHOGA;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGDensityMapGrassBlockData; }

#define KLEFGGIHGMI___C__DISPLAYCLASS499_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB523C60)
#define KLEFGGIHGMI___C__DISPLAYCLASS499_0___ONDENSITYMAPGRASSDATALOADED_B__0_OFFSET UNITYSDK_OFFSET(0xB5246D0)

	class KLEFGGIHGMI___c__DisplayClass499_0 : public ::System::Object
	{
	public:
		::LPBNBKGHOGA* block; // 0x10
		::UnityEngine::GameObject* grassNode; // 0x18
		::KLEFGGIHGMI* __4__this; // 0x20
		::UnityEngine::RPGDensityMapGrassBlockData* grassData; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEFGGIHGMI___C__DISPLAYCLASS499_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnDensityMapGrassDataLoaded_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEFGGIHGMI___C__DISPLAYCLASS499_0___ONDENSITYMAPGRASSDATALOADED_B__0_OFFSET))(this);
		}

	};
