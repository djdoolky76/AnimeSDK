#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class PopImageModel; }
namespace MiHoYo::SDK::PS { class PopImageManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define MIHOYO_SDK_PS_POPIMAGEMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF5DA30)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_CHECKPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x1AF5B1B0)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_CLEARLIST_OFFSET UNITYSDK_OFFSET(0x1AF5C000)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_CONSUMEPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x1AF5B7B0)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1AF5D940)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_DOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1AF5D200)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_FILEEXISTS_OFFSET UNITYSDK_OFFSET(0x1AF5BF70)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_GETCACHESHOWIMAGELIST_OFFSET UNITYSDK_OFFSET(0x1AF5C940)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_GETFILENAME_OFFSET UNITYSDK_OFFSET(0x1AF5D810)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_GETPOPIMAGELIST_OFFSET UNITYSDK_OFFSET(0x1AF5C190)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_GETPOPIMAGEMODEL_OFFSET UNITYSDK_OFFSET(0x1AF5B2C0)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_GETPOPIMAGESHOWDATECACHEKEY_OFFSET UNITYSDK_OFFSET(0x1AF5D470)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_GETQUERYMAP_OFFSET UNITYSDK_OFFSET(0x1AF5C300)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_INSTANCESHOW_OFFSET UNITYSDK_OFFSET(0x1AF5AF30)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_ISIMAGENEEDSHOW_OFFSET UNITYSDK_OFFSET(0x1AF5D080)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_LOADLOCALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1AF5D840)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_LOADNETWORKTEXTURE_OFFSET UNITYSDK_OFFSET(0x1AF5D8B0)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_LOADTEXTURE_OFFSET UNITYSDK_OFFSET(0x1AF5D7B0)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AF5D920)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_ONCLICKIMAGE_OFFSET UNITYSDK_OFFSET(0x1AF5BD80)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1AF5BE60)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_ONCONSUMEPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x1AF5D790)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_ONGETPOPIMAGELIST_OFFSET UNITYSDK_OFFSET(0x1AF5CB50)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_SAVECACHESHOWIMAGELIST_OFFSET UNITYSDK_OFFSET(0x1AF5D350)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_SAVECONSUMEPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x1AF5B9A0)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_SENDCLOSENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1AF5BC10)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_SHOW_OFFSET UNITYSDK_OFFSET(0x1AF5AFB0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PopImageManager_TypeDefinitionIndex = 8928;

	class PopImageManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* PSCacheMap; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* cacheShowImageList; // 0x18
		::System::Collections::Generic::List_1<::MiHoYo::SDK::PopImageModel*>* popImageList; // 0x20
		::System::Boolean isAnimation; // 0x28
		::System::Boolean isShowing; // 0x29
		static ::MiHoYo::SDK::PS::PopImageManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PS::PopImageManager**)UnitySDK::FromName("MiHoYo.SDK.PS", "PopImageManager")->GetStaticField(0x17A50);
		}

		// static const ::System::String* PopImageShowDateCacheKey; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_CCTOR_OFFSET))();
		}

		::System::Boolean InstanceShow(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_INSTANCESHOW_OFFSET))(this, a1);
		}

		::System::Boolean Show(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_SHOW_OFFSET))(this, a1);
		}

		::System::Void OnClickImage(::MiHoYo::SDK::PopImageModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_ONCLICKIMAGE_OFFSET))(this, a1);
		}

		::System::Void OnClose(::MiHoYo::SDK::PopImageModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_ONCLOSE_OFFSET))(this, a1);
		}

		::System::Void SendCloseNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_SENDCLOSENOTIFICATION_OFFSET))(this);
		}

		::System::Boolean CheckPopImage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_CHECKPOPIMAGE_OFFSET))(this);
		}

		::MiHoYo::SDK::PopImageModel* GetPopImageModel()
		{
			return ((::MiHoYo::SDK::PopImageModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_GETPOPIMAGEMODEL_OFFSET))(this);
		}

		::System::Void ClearList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_CLEARLIST_OFFSET))(this);
		}

		::System::Void GetPopImageList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_GETPOPIMAGELIST_OFFSET))(this);
		}

		::System::Void OnGetPopImageList(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_ONGETPOPIMAGELIST_OFFSET))(this, a1);
		}

		::System::Boolean IsImageNeedShow(::MiHoYo::SDK::PopImageModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_ISIMAGENEEDSHOW_OFFSET))(this, a1);
		}

		::System::Void SaveCacheShowImageList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_SAVECACHESHOWIMAGELIST_OFFSET))(this);
		}

		::System::Void GetCacheShowImageList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_GETCACHESHOWIMAGELIST_OFFSET))(this);
		}

		::System::String* GetPopImageShowDateCacheKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_GETPOPIMAGESHOWDATECACHEKEY_OFFSET))(this);
		}

		::System::Void ConsumePopImage(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_CONSUMEPOPIMAGE_OFFSET))(this, a1);
		}

		::System::Void OnConsumePopImage(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_ONCONSUMEPOPIMAGE_OFFSET))(this, a1);
		}

		::System::Void SaveConsumePopImage(::MiHoYo::SDK::PopImageModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_SAVECONSUMEPOPIMAGE_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONObject* GetQueryMap()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_GETQUERYMAP_OFFSET))(this);
		}

		::System::Void DownLoad(::System::String* a1, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_DOWNLOAD_OFFSET))(this, a1, a2);
		}

		::System::String* GetFileName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_GETFILENAME_OFFSET))(this, a1);
		}

		::System::Boolean FileExists(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_FILEEXISTS_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* LoadTexture(::System::String* a1, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_LOADTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* LoadLocalTexture(::System::String* a1, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_LOADLOCALTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* LoadNetworkTexture(::System::String* a1, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_LOADNETWORKTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Void OnCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* a1, ::UnityEngine::Texture2D* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_ONCALLBACK_OFFSET))(this, a1, a2);
		}

	};
}
