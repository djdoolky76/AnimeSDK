#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { class String; }

#define INCONTROL_UNITYINPUTDEVICEPROFILELIST_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB33420)
#define INCONTROL_UNITYINPUTDEVICEPROFILELIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB33410)

namespace InControl
{
	inline static constexpr unsigned int UnityInputDeviceProfileList_TypeDefinitionIndex = 40901;

	class UnityInputDeviceProfileList : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_Profiles()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("InControl", "UnityInputDeviceProfileList")->GetStaticField(0x11540);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEPROFILELIST_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEPROFILELIST_CCTOR_OFFSET))();
		}

	};
}
