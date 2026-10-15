#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HipplenBuilderStatus_StatType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERBEHAVIORASSET_BEHAVIORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x15DE2F80)

	class HipplenBuilderBehaviorAsset_BehaviorConfig : public ::System::Object
	{
	public:
		::System::String* Desc; // 0x10
		::HipplenBuilderStatus_StatType Type; // 0x18
		::UnityEngine::Vector2Int Range; // 0x1C
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* Times; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERBEHAVIORASSET_BEHAVIORCONFIG_CTOR_OFFSET))(this);
		}

	};
