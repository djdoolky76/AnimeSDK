#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERBUFFASSET_CTOR_OFFSET UNITYSDK_OFFSET(0x15DD66B0)

inline static constexpr unsigned int HipplenBuilderBuffAsset_TypeDefinitionIndex = 47225;

	class HipplenBuilderBuffAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* buffConfigs; // 0x18
		::System::Int32 BuffSelectCount; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERBUFFASSET_CTOR_OFFSET))(this);
		}

	};
