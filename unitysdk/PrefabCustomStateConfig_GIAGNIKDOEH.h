#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PREFABCUSTOMSTATECONFIG_GIAGNIKDOEH_CCTOR_OFFSET UNITYSDK_OFFSET(0xC39BF60)
#define PREFABCUSTOMSTATECONFIG_GIAGNIKDOEH_CTOR_OFFSET UNITYSDK_OFFSET(0xC39BF50)

	class PrefabCustomStateConfig_GIAGNIKDOEH : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_JMEHIIABGGM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GIAGNIKDOEH")->GetStaticField(0x35C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_GIAGNIKDOEH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_GIAGNIKDOEH_CCTOR_OFFSET))();
		}

	};
