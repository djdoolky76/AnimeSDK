#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDMONJOAKHD.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class APLEMBNFLAA;
class HPKACEPPPCA;
class KLEFGGIHGMI;
class LJFHKAJPFNE;
class NEEJNCHJFKL_KIKCNLDNLCF;
class OIDDJJLHGKO;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace UnityEngine { class GameObject; }

#define NEEJNCHJFKL_BCKOGNJHGNO_OFFSET UNITYSDK_OFFSET(0xBB55980)
#define NEEJNCHJFKL_BGBPEMJCGLH_OFFSET UNITYSDK_OFFSET(0xBB55040)
#define NEEJNCHJFKL_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0xBB55E70)
#define NEEJNCHJFKL_CIPJBBAOLBD_OFFSET UNITYSDK_OFFSET(0xBB54FE0)
#define NEEJNCHJFKL_CLFNMEELBCJ_OFFSET UNITYSDK_OFFSET(0xBB55F70)
#define NEEJNCHJFKL_CTOR_OFFSET UNITYSDK_OFFSET(0xBB54F80)
#define NEEJNCHJFKL_DLNPMBALEGG_OFFSET UNITYSDK_OFFSET(0xBB55B30)
#define NEEJNCHJFKL_FONPNGPBJON_OFFSET UNITYSDK_OFFSET(0xBB55710)
#define NEEJNCHJFKL_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0xBB55260)
#define NEEJNCHJFKL_IIGEFJJHHPK_OFFSET UNITYSDK_OFFSET(0xBB55F00)
#define NEEJNCHJFKL_KMDFOAPFHCD_OFFSET UNITYSDK_OFFSET(0xBB55460)

inline static constexpr unsigned int NEEJNCHJFKL_TypeDefinitionIndex = 73791;

	class NEEJNCHJFKL : public ::GDMONJOAKHD
	{
	public:
		static ::NEEJNCHJFKL_KIKCNLDNLCF** StaticGet_HEFGNIKHCLD()
		{
			return (::NEEJNCHJFKL_KIKCNLDNLCF**)UnitySDK::FromName("", "NEEJNCHJFKL")->GetStaticField(0x2E870);
		}

		::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::LJFHKAJPFNE* a2, ::KLEFGGIHGMI* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::LJFHKAJPFNE*, ::KLEFGGIHGMI*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NEEJNCHJFKL_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::HPKACEPPPCA* CIPJBBAOLBD(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::HPKACEPPPCA*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + NEEJNCHJFKL_CIPJBBAOLBD_OFFSET))(this, a1);
		}

		::System::Boolean BGBPEMJCGLH(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEEJNCHJFKL_BGBPEMJCGLH_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetItemLodLevel(::OIDDJJLHGKO* a1, ::APLEMBNFLAA* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::PVOID, ::OIDDJJLHGKO*, ::APLEMBNFLAA*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NEEJNCHJFKL_GETITEMLODLEVEL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void KMDFOAPFHCD(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + NEEJNCHJFKL_KMDFOAPFHCD_OFFSET))(this, a1);
		}

		::System::Void FONPNGPBJON(::OIDDJJLHGKO* a1, ::APLEMBNFLAA* a2, ::System::Boolean a3, ::HPKACEPPPCA* a4, ::RPG::Client::OpenWorld::StreamingItemData* a5, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*> a6)
		{
			return ((::System::Void(*)(::PVOID, ::OIDDJJLHGKO*, ::APLEMBNFLAA*, ::System::Boolean, ::HPKACEPPPCA*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*>))((::PBYTE)hIl2Cpp + NEEJNCHJFKL_FONPNGPBJON_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Single BCKOGNJHGNO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEJNCHJFKL_BCKOGNJHGNO_OFFSET))(this);
		}

		::System::Single DLNPMBALEGG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEJNCHJFKL_DLNPMBALEGG_OFFSET))(this);
		}

		::System::Void CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NEEJNCHJFKL_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IIGEFJJHHPK(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + NEEJNCHJFKL_IIGEFJJHHPK_OFFSET))(this, a1, a2, a3);
		}

		static ::NEEJNCHJFKL_KIKCNLDNLCF* CLFNMEELBCJ()
		{
			return ((::NEEJNCHJFKL_KIKCNLDNLCF*(*)())((::PBYTE)hIl2Cpp + NEEJNCHJFKL_CLFNMEELBCJ_OFFSET))();
		}

	};
