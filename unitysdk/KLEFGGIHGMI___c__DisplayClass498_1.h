#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGPointCloudGrassBlockData; }

#define KLEFGGIHGMI___C__DISPLAYCLASS498_1_CTOR_OFFSET UNITYSDK_OFFSET(0xB51C570)
#define KLEFGGIHGMI___C__DISPLAYCLASS498_1___SETUPGRASSDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB51DCF0)

inline static constexpr unsigned int KLEFGGIHGMI___c__DisplayClass498_1_TypeDefinitionIndex = 73911;

	template <typename T>
	class KLEFGGIHGMI___c__DisplayClass498_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::UnityEngine::GameObject* grassNode; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEFGGIHGMI___C__DISPLAYCLASS498_1_CTOR_OFFSET))(this);
		}

		::System::Void __SetupGrassData_b__0(::UnityEngine::RPGPointCloudGrassBlockData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RPGPointCloudGrassBlockData*))((::PBYTE)hIl2Cpp + KLEFGGIHGMI___C__DISPLAYCLASS498_1___SETUPGRASSDATA_B__0_OFFSET))(this, a1);
		}

	};
