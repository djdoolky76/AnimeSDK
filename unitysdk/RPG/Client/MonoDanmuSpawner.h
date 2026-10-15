#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DanmuType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class FJGLDHEOPOF;
class IONGFDBBCIF;
class MFLJIEBFMOF;
namespace RPG::Client { class MonoDanmuItem; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONODANMUSPAWNER_AWAKE_OFFSET UNITYSDK_OFFSET(0xD74A650)
#define RPG_CLIENT_MONODANMUSPAWNER_CTOR_OFFSET UNITYSDK_OFFSET(0xD74A970)
#define RPG_CLIENT_MONODANMUSPAWNER_DESPAWN_OFFSET UNITYSDK_OFFSET(0xD748170)
#define RPG_CLIENT_MONODANMUSPAWNER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD74A790)
#define RPG_CLIENT_MONODANMUSPAWNER_GET_GIFTROOTRECT_OFFSET UNITYSDK_OFFSET(0xD749AD0)
#define RPG_CLIENT_MONODANMUSPAWNER_GET_IMAGEROOTRECT_OFFSET UNITYSDK_OFFSET(0xD749A60)
#define RPG_CLIENT_MONODANMUSPAWNER_GET_TEXTROOTRECT_OFFSET UNITYSDK_OFFSET(0xD7499F0)
#define RPG_CLIENT_MONODANMUSPAWNER_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0xD74A720)
#define RPG_CLIENT_MONODANMUSPAWNER_IHOIDNEEMKC_OFFSET UNITYSDK_OFFSET(0xD74A8C0)
#define RPG_CLIENT_MONODANMUSPAWNER_NBICJBEOFOL_OFFSET UNITYSDK_OFFSET(0xD74A6A0)
#define RPG_CLIENT_MONODANMUSPAWNER_PKPMMMNOJGG_OFFSET UNITYSDK_OFFSET(0xD74A7F0)
#define RPG_CLIENT_MONODANMUSPAWNER_SPAWN_OFFSET UNITYSDK_OFFSET(0xD748760)

namespace RPG::Client
{
	class MonoDanmuSpawner : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _TextDanmuPrefabPath; // 0x18
		::System::String* _ImageDanmuPrefabPath; // 0x20
		::System::String* _GiftDanmuPrefabPath; // 0x28
		::UnityEngine::Transform* _TextRoot; // 0x30
		::UnityEngine::Transform* _ImageRoot; // 0x38
		::UnityEngine::Transform* _GiftRoot; // 0x40
		::IONGFDBBCIF* HGIHOOECGEE; // 0x48
		::System::Boolean EMHAACACFOM; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_TextRootRect()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_GET_TEXTROOTRECT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ImageRootRect()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_GET_IMAGEROOTRECT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_GiftRootRect()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_GET_GIFTROOTRECT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_AWAKE_OFFSET))(this);
		}

		::RPG::Client::MonoDanmuItem* Spawn(::MFLJIEBFMOF* a1, ::System::Single a2)
		{
			return ((::RPG::Client::MonoDanmuItem*(*)(::PVOID, ::MFLJIEBFMOF*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_SPAWN_OFFSET))(this, a1, a2);
		}

		::System::Void Despawn(::RPG::Client::MonoDanmuItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoDanmuItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_DESPAWN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_DISPOSE_OFFSET))(this);
		}

		::FJGLDHEOPOF* PKPMMMNOJGG(::RPG::GameCore::DanmuType a1)
		{
			return ((::FJGLDHEOPOF*(*)(::PVOID, ::RPG::GameCore::DanmuType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_PKPMMMNOJGG_OFFSET))(this, a1);
		}

		::System::Void NBICJBEOFOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_NBICJBEOFOL_OFFSET))(this);
		}

		::System::Void IHOIDNEEMKC(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_IHOIDNEEMKC_OFFSET))(this, a1, a2);
		}

		::System::String* IAMCNOAAALI(::RPG::GameCore::DanmuType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DanmuType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_IAMCNOAAALI_OFFSET))(this, a1);
		}

	};
}
