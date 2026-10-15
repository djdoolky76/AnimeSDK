#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace RPG::GameCore { class ChimeraDuelFireBulletNode; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xDC5FC20)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_DBFGKFHGPAL_OFFSET UNITYSDK_OFFSET(0xDC5F190)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_DBOGNAIDCEJ_OFFSET UNITYSDK_OFFSET(0xDC5F150)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_FIREBULLET_OFFSET UNITYSDK_OFFSET(0xDC5F1D0)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xDC5E220)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_NGBGAMAOEFE_OFFSET UNITYSDK_OFFSET(0xDC5F450)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_NIODHJHOPMO_OFFSET UNITYSDK_OFFSET(0xDC5F9F0)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDC5E350)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_START_OFFSET UNITYSDK_OFFSET(0xDC5E170)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xDC5EA80)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_UNINIT_OFFSET UNITYSDK_OFFSET(0xDC5E8D0)

namespace RPG::Client::Prop
{
	class ChimeraDuelFireBulletManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::AttachPointMapping* Mapping; // 0x18
		::UnityEngine::AnimationCurve* YCurveRate; // 0x20
		::UnityEngine::AnimationCurve* XCurveRate; // 0x28
		::System::Collections::Generic::List_1<::System::Action*>* MEJAKEPALDP; // 0x30
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>* DCNEHLOAIJD; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_UNINIT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void DBOGNAIDCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_DBOGNAIDCEJ_OFFSET))(this);
		}

		::System::Void DBFGKFHGPAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_DBFGKFHGPAL_OFFSET))(this);
		}

		::System::Void FireBullet(::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* a1, ::RPG::GameCore::ChimeraDuelFireBulletNode* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>*, ::RPG::GameCore::ChimeraDuelFireBulletNode*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_FIREBULLET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NGBGAMAOEFE(::UnityEngine::GameObject* a1, ::RPG::GameCore::ChimeraDuelFireBulletNode* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::ChimeraDuelFireBulletNode*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_NGBGAMAOEFE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NIODHJHOPMO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_NIODHJHOPMO_OFFSET))(this, a1);
		}

	};
}
