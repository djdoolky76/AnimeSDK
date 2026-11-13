#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class BoxConfigModel; }
namespace MiHoYo::SDK { class CloudSaveImageModel; }
namespace MiHoYo::SDK::MiHoYoCloud { class CloudDataStorage; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C328BE0)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C328B50)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_GETCLIPBOARDDATA_OFFSET UNITYSDK_OFFSET(0x1C3271C0)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_GETLOCALDATA_OFFSET UNITYSDK_OFFSET(0x1C326DC0)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_ONTRANSMITCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C327D60)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_SAVEIMAGE_OFFSET UNITYSDK_OFFSET(0x1C327480)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_SETBOXCONFIG_OFFSET UNITYSDK_OFFSET(0x1C326AD0)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_SETLOCALDATA_OFFSET UNITYSDK_OFFSET(0x1C327130)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_STARTLOADINGCOROUTINEIFNEED_OFFSET UNITYSDK_OFFSET(0x1C3285B0)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_STARTSAVEIMAGECOROUTINE_OFFSET UNITYSDK_OFFSET(0x1C327A70)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_STOPLOADINGCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1C328A60)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_STOPSAVEIMAGECOROUTINE_OFFSET UNITYSDK_OFFSET(0x1C328390)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_TRANSMITPARTDATA_OFFSET UNITYSDK_OFFSET(0x1C327E30)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE__STARTSAVEIMAGECOROUTINE_B__20_0_OFFSET UNITYSDK_OFFSET(0x1C328CB0)

namespace MiHoYo::SDK::MiHoYoCloud
{
	inline static constexpr unsigned int CloudDataStorage_TypeDefinitionIndex = 9141;

	class CloudDataStorage : public ::System::Object
	{
	public:
		::UnityEngine::Coroutine* loadingCoroutine; // 0x10
		::MiHoYo::SDK::CloudSaveImageModel* currentImageModel; // 0x18
		::System::Collections::Generic::List_1<::MiHoYo::SDK::CloudSaveImageModel*>* saveImageList; // 0x20
		::UnityEngine::Coroutine* saveImageCoroutine; // 0x28
		::System::Single SaveImageTimeOut; // 0x30
		::System::Boolean isTransmittingImage; // 0x34
		::System::Byte _padding0[0x3];
		::System::Int32 ShareTextMaxLength; // 0x38
		::System::Single ClipBoardTimeOut; // 0x3C
		::System::Int32 PartSize; // 0x40
		::System::Single ShareLoadingTimeOut; // 0x44
		static ::MiHoYo::SDK::BoxConfigModel** StaticGet_boxConfig()
		{
			return (::MiHoYo::SDK::BoxConfigModel**)UnitySDK::FromName("MiHoYo.SDK.MiHoYoCloud", "CloudDataStorage")->GetStaticField(0x9C10);
		}

		static ::MiHoYo::SDK::MiHoYoCloud::CloudDataStorage** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::MiHoYoCloud::CloudDataStorage**)UnitySDK::FromName("MiHoYo.SDK.MiHoYoCloud", "CloudDataStorage")->GetStaticField(0x9C18);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_CCTOR_OFFSET))();
		}

		::System::Void SetBoxConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_SETBOXCONFIG_OFFSET))(this, a1);
		}

		::System::Void GetLocalData(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_GETLOCALDATA_OFFSET))(this, a1, a2);
		}

		::System::Void SetLocalData(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_SETLOCALDATA_OFFSET))(this, a1, a2);
		}

		::System::Void GetClipBoardData(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_GETCLIPBOARDDATA_OFFSET))(this, a1, a2);
		}

		::System::Void SaveImage(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_SAVEIMAGE_OFFSET))(this, a1, a2);
		}

		::System::Void OnTransmitCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_ONTRANSMITCALLBACK_OFFSET))(this, a1);
		}

		::System::Void TransmitPartData(::System::Int32 a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_TRANSMITPARTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void StopSaveImageCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_STOPSAVEIMAGECOROUTINE_OFFSET))(this);
		}

		::System::Void StartSaveImageCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_STARTSAVEIMAGECOROUTINE_OFFSET))(this);
		}

		::System::Void StartLoadingCoroutineIfNeed(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_STARTLOADINGCOROUTINEIFNEED_OFFSET))(this, a1);
		}

		::System::Void StopLoadingCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_STOPLOADINGCOROUTINE_OFFSET))(this);
		}

		::System::Void _StartSaveImageCoroutine_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE__STARTSAVEIMAGECOROUTINE_B__20_0_OFFSET))(this);
		}

	};
}
