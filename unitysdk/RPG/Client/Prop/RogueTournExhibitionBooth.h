#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1745F1A0)
#define RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH_CTOR_OFFSET UNITYSDK_OFFSET(0x1745F190)
#define RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH_EBIPCMFGMDK_OFFSET UNITYSDK_OFFSET(0x1745EE50)
#define RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1745EDD0)
#define RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH_SHOWEMPTYEXHIBITION_OFFSET UNITYSDK_OFFSET(0x1745F0B0)
#define RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH_SHOWEXHIBITION_OFFSET UNITYSDK_OFFSET(0x1745EEB0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RogueTournExhibitionBooth_TypeDefinitionIndex = 81733;

	class RogueTournExhibitionBooth : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* ExhibitionImageRenderer; // 0x18
		::UnityEngine::Texture* CECNGLFHAPO; // 0x20
		::System::String* ICLMCBLCOPE; // 0x28
		static ::System::Int32* StaticGet_DBLJMLMIIIL()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "RogueTournExhibitionBooth")->GetStaticField(0x13760);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH_CCTOR_OFFSET))();
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean ShowExhibition(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH_SHOWEXHIBITION_OFFSET))(this, a1);
		}

		::System::Void ShowEmptyExhibition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH_SHOWEMPTYEXHIBITION_OFFSET))(this);
		}

		::System::Void EBIPCMFGMDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH_EBIPCMFGMDK_OFFSET))(this);
		}

	};
}
