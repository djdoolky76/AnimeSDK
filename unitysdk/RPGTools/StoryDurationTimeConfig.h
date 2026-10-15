#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace RPGTools { class StoryDurationTimeConfig; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_STORYDURATIONTIMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE8A8D50)
#define RPGTOOLS_STORYDURATIONTIMECONFIG_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xE8A8D00)

namespace RPGTools
{
	class StoryDurationTimeConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* Data; // 0x18
		static ::RPGTools::StoryDurationTimeConfig** StaticGet__Instance()
		{
			return (::RPGTools::StoryDurationTimeConfig**)UnitySDK::FromName("RPGTools", "StoryDurationTimeConfig")->GetStaticField(0x6F810);
		}

		// static const ::System::String* ConfigPath; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_STORYDURATIONTIMECONFIG_CTOR_OFFSET))(this);
		}

		static ::RPGTools::StoryDurationTimeConfig* get_Instance()
		{
			return ((::RPGTools::StoryDurationTimeConfig*(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_STORYDURATIONTIMECONFIG_GET_INSTANCE_OFFSET))();
		}

	};
}
