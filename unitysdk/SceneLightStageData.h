#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SCENELIGHTSTAGEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE95EE20)

	class SceneLightStageData : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* branch; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* sceneLightStageDataItems; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTSTAGEDATA_CTOR_OFFSET))(this);
		}

	};
