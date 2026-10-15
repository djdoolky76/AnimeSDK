#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM_CCTOR_OFFSET UNITYSDK_OFFSET(0xDDC9F00)
#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM_CLEARIMAGE_OFFSET UNITYSDK_OFFSET(0xDDC9DA0)
#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xDDC9EF0)
#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM_EBIPCMFGMDK_OFFSET UNITYSDK_OFFSET(0xDDC9B40)
#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDDC9AC0)
#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM_SHOWIMAGE_OFFSET UNITYSDK_OFFSET(0xDDC9BA0)

namespace RPG::Client::Prop
{
	class TrainPartyBuildPhotoWallItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* ImageRenderer; // 0x18
		::UnityEngine::Texture* CECNGLFHAPO; // 0x20
		::System::String* BMDOOFPLCID; // 0x28
		static ::System::Int32* StaticGet_DBLJMLMIIIL()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "TrainPartyBuildPhotoWallItem")->GetStaticField(0x14450);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM_CCTOR_OFFSET))();
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean ShowImage(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM_SHOWIMAGE_OFFSET))(this, a1);
		}

		::System::Void ClearImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM_CLEARIMAGE_OFFSET))(this);
		}

		::System::Void EBIPCMFGMDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM_EBIPCMFGMDK_OFFSET))(this);
		}

	};
}
