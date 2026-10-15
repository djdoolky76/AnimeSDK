#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERACTIVITYASSET_ACTIVITY_CTOR_OFFSET UNITYSDK_OFFSET(0x15DE2F40)

inline static constexpr unsigned int HipplenBuilderActivityAsset_Activity_TypeDefinitionIndex = 47222;

	class HipplenBuilderActivityAsset_Activity : public ::System::Object
	{
	public:
		::System::String* activityName; // 0x10
		::System::Int32 timeCost; // 0x18
		::UnityEngine::Color color; // 0x1C
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* statModifiers; // 0x30
		::UnityEngine::Vector2 TImeLimitRange; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERACTIVITYASSET_ACTIVITY_CTOR_OFFSET))(this);
		}

	};
