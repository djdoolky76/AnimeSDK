#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGDensityMapGrassBlockData; }

#define KLEFGGIHGMI___C__DISPLAYCLASS498_2_CTOR_OFFSET UNITYSDK_OFFSET(0xB523850)
#define KLEFGGIHGMI___C__DISPLAYCLASS498_2___SETUPGRASSDATA_B__1_OFFSET UNITYSDK_OFFSET(0xB524690)

	template <typename T1, typename T2>
	class KLEFGGIHGMI___c__DisplayClass498_2 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* grassNode; // 0x10
		::System::Object* CS___8__locals2; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEFGGIHGMI___C__DISPLAYCLASS498_2_CTOR_OFFSET))(this);
		}

		::System::Void __SetupGrassData_b__1(::UnityEngine::RPGDensityMapGrassBlockData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RPGDensityMapGrassBlockData*))((::PBYTE)hIl2Cpp + KLEFGGIHGMI___C__DISPLAYCLASS498_2___SETUPGRASSDATA_B__1_OFFSET))(this, a1);
		}

	};
