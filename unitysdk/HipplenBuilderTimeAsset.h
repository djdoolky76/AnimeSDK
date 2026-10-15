#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERTIMEASSET_CTOR_OFFSET UNITYSDK_OFFSET(0x15DE6870)

inline static constexpr unsigned int HipplenBuilderTimeAsset_TypeDefinitionIndex = 47235;

	class HipplenBuilderTimeAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* timeConfigs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTIMEASSET_CTOR_OFFSET))(this);
		}

	};
