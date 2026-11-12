#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class BoxConfigModel; }
namespace MiHoYo::SDK { class CloudSaveImageModel; }
namespace MiHoYo::SDK::Cloud { class CloudDataStorage; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDCAA00)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCA970)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_GETCLIPBOARDDATA_OFFSET UNITYSDK_OFFSET(0x1CDC8F10)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_GETLOCALDATA_OFFSET UNITYSDK_OFFSET(0x1CDC8BA0)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_ONTRANSMITCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CDC9A30)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_SAVEIMAGE_OFFSET UNITYSDK_OFFSET(0x1CDC9190)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_SETBOXCONFIG_OFFSET UNITYSDK_OFFSET(0x1CDC88B0)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_SETLOCALDATA_OFFSET UNITYSDK_OFFSET(0x1CDC8EB0)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_STARTLOADINGCOROUTINEIFNEED_OFFSET UNITYSDK_OFFSET(0x1CDCA300)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_STARTSAVEIMAGECOROUTINE_OFFSET UNITYSDK_OFFSET(0x1CDC9740)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_STOPLOADINGCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1CDCA880)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_STOPSAVEIMAGECOROUTINE_OFFSET UNITYSDK_OFFSET(0x1CDCA050)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_TRANSMITPARTDATA_OFFSET UNITYSDK_OFFSET(0x1CDC9B00)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE__STARTSAVEIMAGECOROUTINE_B__20_0_OFFSET UNITYSDK_OFFSET(0x1CDCAAD0)

namespace MiHoYo::SDK::Cloud
{
	inline static constexpr unsigned int CloudDataStorage_TypeDefinitionIndex = 8889;

	class CloudDataStorage : public ::System::Object
	{
	public:
		::UnityEngine::Coroutine* saveImageCoroutine; // 0x10
		::UnityEngine::Coroutine* loadingCoroutine; // 0x18
		::MiHoYo::SDK::CloudSaveImageModel* currentImageModel; // 0x20
		::System::Collections::Generic::List_1<::MiHoYo::SDK::CloudSaveImageModel*>* saveImageList; // 0x28
		::System::Int32 PartSize; // 0x30
		::System::Int32 ShareTextMaxLength; // 0x34
		::System::Boolean isTransmittingImage; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single SaveImageTimeOut; // 0x3C
		::System::Single ShareLoadingTimeOut; // 0x40
		::System::Single ClipBoardTimeOut; // 0x44
		static ::MiHoYo::SDK::BoxConfigModel** StaticGet_boxConfig()
		{
			return (::MiHoYo::SDK::BoxConfigModel**)UnitySDK::FromName("MiHoYo.SDK.Cloud", "CloudDataStorage")->GetStaticField(0x53B30);
		}

		static ::MiHoYo::SDK::Cloud::CloudDataStorage** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Cloud::CloudDataStorage**)UnitySDK::FromName("MiHoYo.SDK.Cloud", "CloudDataStorage")->GetStaticField(0x53B38);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_CCTOR_OFFSET))();
		}

		::System::Void SetBoxConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_SETBOXCONFIG_OFFSET))(this, a1);
		}

		::System::Void GetLocalData(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_GETLOCALDATA_OFFSET))(this, a1, a2);
		}

		::System::Void SetLocalData(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_SETLOCALDATA_OFFSET))(this, a1, a2);
		}

		::System::Void GetClipBoardData(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_GETCLIPBOARDDATA_OFFSET))(this, a1, a2);
		}

		::System::Void SaveImage(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_SAVEIMAGE_OFFSET))(this, a1, a2);
		}

		::System::Void OnTransmitCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_ONTRANSMITCALLBACK_OFFSET))(this, a1);
		}

		::System::Void TransmitPartData(::System::Int32 a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_TRANSMITPARTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void StopSaveImageCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_STOPSAVEIMAGECOROUTINE_OFFSET))(this);
		}

		::System::Void StartSaveImageCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_STARTSAVEIMAGECOROUTINE_OFFSET))(this);
		}

		::System::Void StartLoadingCoroutineIfNeed(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_STARTLOADINGCOROUTINEIFNEED_OFFSET))(this, a1);
		}

		::System::Void StopLoadingCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_STOPLOADINGCOROUTINE_OFFSET))(this);
		}

		::System::Void _StartSaveImageCoroutine_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE__STARTSAVEIMAGECOROUTINE_B__20_0_OFFSET))(this);
		}

	};
}
