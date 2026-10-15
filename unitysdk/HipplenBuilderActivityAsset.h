#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERACTIVITYASSET_CTOR_OFFSET UNITYSDK_OFFSET(0x15DE2F30)

inline static constexpr unsigned int HipplenBuilderActivityAsset_TypeDefinitionIndex = 47220;

	class HipplenBuilderActivityAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Int32 dailyActivityCount; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* activities; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERACTIVITYASSET_CTOR_OFFSET))(this);
		}

	};
