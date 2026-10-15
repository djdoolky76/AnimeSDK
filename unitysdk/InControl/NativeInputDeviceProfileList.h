#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { class String; }

#define INCONTROL_NATIVEINPUTDEVICEPROFILELIST_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA6C040)
#define INCONTROL_NATIVEINPUTDEVICEPROFILELIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA6C030)

namespace InControl
{
	class NativeInputDeviceProfileList : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_Profiles()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("InControl", "NativeInputDeviceProfileList")->GetStaticField(0x3450);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEPROFILELIST_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEPROFILELIST_CCTOR_OFFSET))();
		}

	};
}
