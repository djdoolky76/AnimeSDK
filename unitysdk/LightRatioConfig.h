#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LIGHTRATIOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB831B20)

inline static constexpr unsigned int LightRatioConfig_TypeDefinitionIndex = 47561;

	class LightRatioConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* LightRatioClips; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTRATIOCONFIG_CTOR_OFFSET))(this);
		}

	};
