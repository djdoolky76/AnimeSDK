#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_SDKDISPATCHER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD0FCD0)
#define MIHOYO_SDK_SDKDISPATCHER_CHECKINVOKE_OFFSET UNITYSDK_OFFSET(0x1DD0E8C0)
#define MIHOYO_SDK_SDKDISPATCHER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD0FCC0)
#define MIHOYO_SDK_SDKDISPATCHER_INITAPM_OFFSET UNITYSDK_OFFSET(0x1DD0E600)
#define MIHOYO_SDK_SDKDISPATCHER_INIT_OFFSET UNITYSDK_OFFSET(0x1DD0E890)
#define MIHOYO_SDK_SDKDISPATCHER_SDKINVOKE_OFFSET UNITYSDK_OFFSET(0x1DD0EBE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDispatcher_TypeDefinitionIndex = 47294;

	class SDKDispatcher : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters0()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("MiHoYo.SDK", "SDKDispatcher")->GetStaticField(0x29F30);
		}

		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_h5logFilteredFuncList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)UnitySDK::FromName("MiHoYo.SDK", "SDKDispatcher")->GetStaticField(0x29F38);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_supportModuleList()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)UnitySDK::FromName("MiHoYo.SDK", "SDKDispatcher")->GetStaticField(0x29F40);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("MiHoYo.SDK", "SDKDispatcher")->GetStaticField(0x29F48);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet_parameters1()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("MiHoYo.SDK", "SDKDispatcher")->GetStaticField(0x29F50);
		}

		static ::System::Int32* StaticGet_initialVOXThreadId()
		{
			return (::System::Int32*)UnitySDK::FromName("MiHoYo.SDK", "SDKDispatcher")->GetStaticField(0x87B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDISPATCHER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDISPATCHER_CCTOR_OFFSET))();
		}

		static ::System::Void InitAPM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDISPATCHER_INITAPM_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDISPATCHER_INIT_OFFSET))();
		}

		static ::System::Boolean CheckInvoke(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDISPATCHER_CHECKINVOKE_OFFSET))(a1);
		}

		static ::System::String* SDKInvoke(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDISPATCHER_SDKINVOKE_OFFSET))(a1, a2, a3);
		}

	};
}
