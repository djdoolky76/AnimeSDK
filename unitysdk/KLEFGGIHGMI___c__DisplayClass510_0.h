#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLEFGGIHGMI;
class LPBNBKGHOGA;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGPointCloudGrassBlockData; }

#define KLEFGGIHGMI___C__DISPLAYCLASS510_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBD6E860)
#define KLEFGGIHGMI___C__DISPLAYCLASS510_0___ONPOINTCLOUDGRASSDATALOADED_B__0_OFFSET UNITYSDK_OFFSET(0xBD6F120)

inline static constexpr unsigned int KLEFGGIHGMI___c__DisplayClass510_0_TypeDefinitionIndex = 76043;

	class KLEFGGIHGMI___c__DisplayClass510_0 : public ::System::Object
	{
	public:
		::KLEFGGIHGMI* __4__this; // 0x10
		::UnityEngine::GameObject* grassNode; // 0x18
		::LPBNBKGHOGA* block; // 0x20
		::UnityEngine::RPGPointCloudGrassBlockData* grassData; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEFGGIHGMI___C__DISPLAYCLASS510_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnPointCloudGrassDataLoaded_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEFGGIHGMI___C__DISPLAYCLASS510_0___ONPOINTCLOUDGRASSDATALOADED_B__0_OFFSET))(this);
		}

	};
