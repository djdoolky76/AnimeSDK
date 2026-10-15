#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLEFGGIHGMI;
class LPBNBKGHOGA;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGPointCloudGrassBlockData; }

#define KLEFGGIHGMI___C__DISPLAYCLASS501_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB524070)
#define KLEFGGIHGMI___C__DISPLAYCLASS501_0___ONPOINTCLOUDGRASSDATALOADED_B__0_OFFSET UNITYSDK_OFFSET(0xB524980)

inline static constexpr unsigned int KLEFGGIHGMI___c__DisplayClass501_0_TypeDefinitionIndex = 73915;

	class KLEFGGIHGMI___c__DisplayClass501_0 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* grassNode; // 0x10
		::UnityEngine::RPGPointCloudGrassBlockData* grassData; // 0x18
		::LPBNBKGHOGA* block; // 0x20
		::KLEFGGIHGMI* __4__this; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEFGGIHGMI___C__DISPLAYCLASS501_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnPointCloudGrassDataLoaded_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEFGGIHGMI___C__DISPLAYCLASS501_0___ONPOINTCLOUDGRASSDATALOADED_B__0_OFFSET))(this);
		}

	};
