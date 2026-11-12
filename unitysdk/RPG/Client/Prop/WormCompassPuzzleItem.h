#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/WormCompassDirection.h"
#include "unitysdk/RPG/Client/Prop/WormCompassItemType.h"
#include "unitysdk/RPG/Client/Prop/WormCompassPuzzleStaticItemBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class WormCompassPuzzleItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_CCTOR_OFFSET UNITYSDK_OFFSET(0xE853900)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xE853800)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_ENABLEROUTEEFFECT_OFFSET UNITYSDK_OFFSET(0xE84DD20)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_ENDPOINTFINISH_OFFSET UNITYSDK_OFFSET(0xE84F020)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_GETDIRECTIONLOCALEULER_OFFSET UNITYSDK_OFFSET(0xE852E60)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_GETROUTEEFFECTLENGTH_OFFSET UNITYSDK_OFFSET(0xE8535C0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_GETROUTEEFFECT_OFFSET UNITYSDK_OFFSET(0xE84ECD0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_GET_CURRENTDIRECTIONOBJ_OFFSET UNITYSDK_OFFSET(0xE851470)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_GET_STARTPOINT_OFFSET UNITYSDK_OFFSET(0xE852F50)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_HIDEBOARD_OFFSET UNITYSDK_OFFSET(0xE852FC0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_ISDIRECTIONITEM_OFFSET UNITYSDK_OFFSET(0xE846CB0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_PLAYROUTEEFFECT_OFFSET UNITYSDK_OFFSET(0xE84F160)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_REFRESHOBJECTSTATUS_OFFSET UNITYSDK_OFFSET(0xE848C30)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_SELECT_OFFSET UNITYSDK_OFFSET(0xE853200)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_STARTPOINTSETCONNECTED_OFFSET UNITYSDK_OFFSET(0xE8533E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleItem_TypeDefinitionIndex = 81709;

	class WormCompassPuzzleItem : public ::RPG::Client::Prop::WormCompassPuzzleStaticItemBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* DirectionList; // 0x48
		::UnityEngine::GameObject* DownStartPoint; // 0x50
		::UnityEngine::GameObject* UpStartPoint; // 0x58
		::UnityEngine::GameObject* DownEndPoint; // 0x60
		::UnityEngine::GameObject* UpEndPoint; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* LineRouteEffect; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* RoundRouteEffect; // 0x78
		::System::Collections::Generic::List_1<::System::Single>* LineRouteEffectLength; // 0x80
		::System::Collections::Generic::List_1<::System::Single>* RoundRouteEffectLength; // 0x88
		::System::Single RouteSpeed; // 0x90
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* ArrowEffect; // 0x98
		::UnityEngine::GameObject* StartPointEffect; // 0xA0
		::UnityEngine::GameObject* EndPointEffect; // 0xA8
		::RPG::Client::Prop::WormCompassItemType ItemType; // 0xB0
		::RPG::Client::Prop::WormCompassDirection Direction; // 0xB4
		static ::System::Int32* StaticGet_CNMBEGECAOP()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "WormCompassPuzzleItem")->GetStaticField(0x14890);
		}

		static ::System::Int32* StaticGet_FJEOAOMEHBB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "WormCompassPuzzleItem")->GetStaticField(0x14894);
		}

		static ::System::Int32* StaticGet_OJPANMGEDPM()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "WormCompassPuzzleItem")->GetStaticField(0x14898);
		}

		static ::System::Int32* StaticGet_BABGGLPLPEO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "WormCompassPuzzleItem")->GetStaticField(0x1489C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_CCTOR_OFFSET))();
		}

		::UnityEngine::GameObject* get_CurrentDirectionObj()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_GET_CURRENTDIRECTIONOBJ_OFFSET))(this);
		}

		::System::Boolean IsDirectionItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_ISDIRECTIONITEM_OFFSET))(this);
		}

		::System::Void RefreshObjectStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_REFRESHOBJECTSTATUS_OFFSET))(this);
		}

		::System::Void EndPointFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_ENDPOINTFINISH_OFFSET))(this);
		}

		::System::Void HideBoard(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_HIDEBOARD_OFFSET))(this, a1);
		}

		::System::Void Select(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_SELECT_OFFSET))(this, a1);
		}

		::System::Void StartPointSetConnected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_STARTPOINTSETCONNECTED_OFFSET))(this, a1);
		}

		::System::Void EnableRouteEffect(::System::Boolean a1, ::RPG::Client::Prop::WormCompassPuzzleItem* a2, ::RPG::Client::Prop::WormCompassPuzzleItem* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::Prop::WormCompassPuzzleItem*, ::RPG::Client::Prop::WormCompassPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_ENABLEROUTEEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetRouteEffectLength(::RPG::Client::Prop::WormCompassPuzzleItem* a1, ::RPG::Client::Prop::WormCompassPuzzleItem* a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::Prop::WormCompassPuzzleItem*, ::RPG::Client::Prop::WormCompassPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_GETROUTEEFFECTLENGTH_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* GetRouteEffect(::RPG::Client::Prop::WormCompassPuzzleItem* a1, ::RPG::Client::Prop::WormCompassPuzzleItem* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::Prop::WormCompassPuzzleItem*, ::RPG::Client::Prop::WormCompassPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_GETROUTEEFFECT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* PlayRouteEffect(::RPG::Client::Prop::WormCompassPuzzleItem* a1, ::RPG::Client::Prop::WormCompassPuzzleItem* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::Prop::WormCompassPuzzleItem*, ::RPG::Client::Prop::WormCompassPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_PLAYROUTEEFFECT_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Vector3 GetDirectionLocalEuler(::RPG::Client::Prop::WormCompassDirection a1)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::Prop::WormCompassDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_GETDIRECTIONLOCALEULER_OFFSET))(a1);
		}

		::UnityEngine::GameObject* get_StartPoint()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_GET_STARTPOINT_OFFSET))(this);
		}

	};
}
