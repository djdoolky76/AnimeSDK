#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/WormCompassAvatarWalkStatus.h"
#include "unitysdk/RPG/Client/Prop/WormCompassDirection.h"
#include "unitysdk/RPG/Client/Prop/WormCompassPuzzleItemBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class WormCompassPuzzleBoard; }
namespace RPG::Client::Prop { class WormCompassPuzzleItem; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_AKIFPNAKPLC_OFFSET UNITYSDK_OFFSET(0xDDF1AB0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_BOBIODIDKCN_OFFSET UNITYSDK_OFFSET(0xDDF09A0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_CCTOR_OFFSET UNITYSDK_OFFSET(0xDDF27A0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_CTOR_OFFSET UNITYSDK_OFFSET(0xDDF2730)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDDE82E0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_GFJGBEGJFIL_OFFSET UNITYSDK_OFFSET(0xDDF0B40)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_GHFKGDGMDJK_1_OFFSET UNITYSDK_OFFSET(0xDDF08B0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_GHFKGDGMDJK_OFFSET UNITYSDK_OFFSET(0xDDF1C30)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_GLOBALROTATETO_OFFSET UNITYSDK_OFFSET(0xDDF1FF0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_HEBHDIDMKLN_OFFSET UNITYSDK_OFFSET(0xDDF18C0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_HHCBBGLHFAN_OFFSET UNITYSDK_OFFSET(0xDDF1E40)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_ICNAEHPGCGD_1_OFFSET UNITYSDK_OFFSET(0xDDF1840)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_ICNAEHPGCGD_OFFSET UNITYSDK_OFFSET(0xDDF1D70)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_INITAVATAR_OFFSET UNITYSDK_OFFSET(0xDDE35A0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_IPPMPFJLJEH_OFFSET UNITYSDK_OFFSET(0xDDF0D60)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_MCIOLMPKPHH_OFFSET UNITYSDK_OFFSET(0xDDF0A80)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_MGGNOLFBJPO_OFFSET UNITYSDK_OFFSET(0xDDF1940)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_MOPNFMNOJOM_OFFSET UNITYSDK_OFFSET(0xDDF1EB0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_MOVETO_OFFSET UNITYSDK_OFFSET(0xDDF2390)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_NKOJDFGENID_OFFSET UNITYSDK_OFFSET(0xDDF19D0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDDF1F90)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_REFRESHOBJECTSTATUS_OFFSET UNITYSDK_OFFSET(0xDDE5560)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_SEARCHWALKPATH_OFFSET UNITYSDK_OFFSET(0xDDE8340)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_UPDATE_OFFSET UNITYSDK_OFFSET(0xDDEFED0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_WALK_OFFSET UNITYSDK_OFFSET(0xDDEBB60)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR___TRIGGERIDLESHOW_B__47_0_OFFSET UNITYSDK_OFFSET(0xDDF2810)

namespace RPG::Client::Prop
{
	class WormCompassPuzzleWormAvatar : public ::RPG::Client::Prop::WormCompassPuzzleItemBase
	{
	public:
		::UnityEngine::GameObject* AvatarRoot; // 0x48
		::UnityEngine::GameObject* AvatarDay; // 0x50
		::UnityEngine::GameObject* AvatarNight; // 0x58
		::System::Boolean IsDayAvatar; // 0x60
		::System::Byte _padding0[0x3];
		::System::Single StPointRadius; // 0x64
		::System::Single ForwardStep; // 0x68
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* RotationCurve; // 0x70
		::System::Single RotationDuration; // 0x78
		::System::Byte _padding2[0x4];
		::UnityEngine::AnimationCurve* WalkCurve; // 0x80
		::System::Single WalkDuration; // 0x88
		::System::Byte _padding3[0x4];
		::System::Action* DMPIIOOIPFA; // 0x90
		::System::Boolean BHBJDLHJBLB; // 0x98
		::System::Byte _padding4[0x3];
		::RPG::Client::Prop::WormCompassAvatarWalkStatus DKKIINNDOPH; // 0x9C
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassDirection>* FKJDGDOHNDN; // 0xA0
		::System::Int32 ODIBPANFMCD; // 0xA8
		::System::Int32 KEOPEKOJJLB; // 0xAC
		::System::Int32 DHGPEOOLDFL; // 0xB0
		::System::Single EPOCAAMBNEJ; // 0xB4
		::System::Single GNMHBNNKAEH; // 0xB8
		::System::Single EBGOGGNALBJ; // 0xBC
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>* CCLIIENLKAH; // 0xC0
		::System::Int32 IJFKHMEJPEN; // 0xC8
		::System::Int32 EOGIBBFAANF; // 0xCC
		::UnityEngine::Quaternion NACIBKPBNLD; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* CAMAFEIKOEB; // 0xE0
		::UnityEngine::Vector3 MLEPLKNMBDC; // 0xE8
		::UnityEngine::Vector3 HKKMGKFDHKF; // 0xF4
		::UnityEngine::Quaternion JJMJMDGINNO; // 0x100
		::UnityEngine::Quaternion GECGBHCKOEM; // 0x110
		::UnityEngine::Coroutine* IOCBCMBGALI; // 0x120
		static ::System::Int32* StaticGet_CHGNGEMANFM()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "WormCompassPuzzleWormAvatar")->GetStaticField(0x147E0);
		}

		static ::System::Int32* StaticGet_ELLNLDDDJLO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "WormCompassPuzzleWormAvatar")->GetStaticField(0x147E4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_CCTOR_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_UPDATE_OFFSET))(this);
		}

		::System::Void BOBIODIDKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_BOBIODIDKCN_OFFSET))(this);
		}

		::System::Void MCIOLMPKPHH(::RPG::Client::Prop::WormCompassDirection a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WormCompassDirection, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_MCIOLMPKPHH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RefreshObjectStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_REFRESHOBJECTSTATUS_OFFSET))(this);
		}

		::System::Void ICNAEHPGCGD(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_ICNAEHPGCGD_OFFSET))(this, a1);
		}

		::System::Void ICNAEHPGCGD_1(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_ICNAEHPGCGD_1_OFFSET))(this, a1);
		}

		::System::Void HEBHDIDMKLN(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_HEBHDIDMKLN_OFFSET))(this, a1);
		}

		::System::Void GHFKGDGMDJK(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_GHFKGDGMDJK_OFFSET))(this, a1, a2);
		}

		::System::Void GHFKGDGMDJK_1(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_GHFKGDGMDJK_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 AKIFPNAKPLC(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_AKIFPNAKPLC_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NKOJDFGENID(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_NKOJDFGENID_OFFSET))(this, a1);
		}

		::System::Single HHCBBGLHFAN(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_HHCBBGLHFAN_OFFSET))(this, a1);
		}

		::System::Void InitAvatar(::RPG::Client::Prop::WormCompassPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WormCompassPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_INITAVATAR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_DISPOSE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_ONDESTROY_OFFSET))(this);
		}

		::System::Void MOPNFMNOJOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_MOPNFMNOJOM_OFFSET))(this);
		}

		::System::Void GlobalRotateTo(::UnityEngine::Quaternion a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_GLOBALROTATETO_OFFSET))(this, a1, a2);
		}

		::System::Void MoveTo(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_MOVETO_OFFSET))(this, a1);
		}

		::System::Void Walk(::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassDirection>* a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassDirection>*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_WALK_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Animator* MGGNOLFBJPO()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_MGGNOLFBJPO_OFFSET))(this);
		}

		::System::Void GFJGBEGJFIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_GFJGBEGJFIL_OFFSET))(this);
		}

		::System::Void IPPMPFJLJEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_IPPMPFJLJEH_OFFSET))(this);
		}

		::System::Boolean SearchWalkPath(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_SEARCHWALKPATH_OFFSET))(this, a1, a2);
		}

		::System::Void __TriggerIdleShow_b__47_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR___TRIGGERIDLESHOW_B__47_0_OFFSET))(this);
		}

	};
}
