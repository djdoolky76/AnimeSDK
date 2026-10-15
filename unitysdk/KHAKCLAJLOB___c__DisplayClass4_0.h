#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }

#define KHAKCLAJLOB___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB3F58A0)
#define KHAKCLAJLOB___C__DISPLAYCLASS4_0__ONPREFABCHANGED_B__0_OFFSET UNITYSDK_OFFSET(0xB3F58D0)

inline static constexpr unsigned int KHAKCLAJLOB___c__DisplayClass4_0_TypeDefinitionIndex = 49354;

	class KHAKCLAJLOB___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* holder; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHAKCLAJLOB___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnPrefabChanged_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHAKCLAJLOB___C__DISPLAYCLASS4_0__ONPREFABCHANGED_B__0_OFFSET))(this);
		}

	};
