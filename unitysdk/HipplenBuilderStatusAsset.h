#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERSTATUSASSET_CTOR_OFFSET UNITYSDK_OFFSET(0x15DF1C30)

inline static constexpr unsigned int HipplenBuilderStatusAsset_TypeDefinitionIndex = 47229;

	class HipplenBuilderStatusAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* statConfigs; // 0x18
		::UnityEngine::Color DefaultColor; // 0x20
		::UnityEngine::Color WarningColor; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUSASSET_CTOR_OFFSET))(this);
		}

	};
