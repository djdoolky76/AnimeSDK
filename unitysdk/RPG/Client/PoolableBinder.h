#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RecordPropertyType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class KOAIODKBPJG;
namespace RPG::Client { class BinderIndex; }
namespace RPG::Client { class PoolPropertyScriptableObject; }
namespace RPG::Client { class PoolableBinder; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Behaviour; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_POOLABLEBINDER_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC05EF0)
#define RPG_CLIENT_POOLABLEBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0xDC05E70)
#define RPG_CLIENT_POOLABLEBINDER_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xDC05C80)
#define RPG_CLIENT_POOLABLEBINDER_ENAHBOHCHHI_OFFSET UNITYSDK_OFFSET(0xDC05470)
#define RPG_CLIENT_POOLABLEBINDER_ISPOOLABLE_OFFSET UNITYSDK_OFFSET(0xDC05DE0)
#define RPG_CLIENT_POOLABLEBINDER_MMODMEPNEFD_OFFSET UNITYSDK_OFFSET(0xDC05D00)
#define RPG_CLIENT_POOLABLEBINDER_PPINDFCOEDP_OFFSET UNITYSDK_OFFSET(0xDC05780)
#define RPG_CLIENT_POOLABLEBINDER_RECORDBEFOREPROPERTYSET_1_OFFSET UNITYSDK_OFFSET(0xDC05180)
#define RPG_CLIENT_POOLABLEBINDER_RECORDBEFOREPROPERTYSET_OFFSET UNITYSDK_OFFSET(0xDC04F60)
#define RPG_CLIENT_POOLABLEBINDER_SPAWNED_OFFSET UNITYSDK_OFFSET(0xDC05730)
#define RPG_CLIENT_POOLABLEBINDER_TRYRECORD_1_OFFSET UNITYSDK_OFFSET(0xDC05630)
#define RPG_CLIENT_POOLABLEBINDER_TRYRECORD_OFFSET UNITYSDK_OFFSET(0xDC053A0)

namespace RPG::Client
{
	class PoolableBinder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::KOAIODKBPJG*>* ECJCJHOPEIJ; // 0x18
		::RPG::Client::PoolPropertyScriptableObject* m_poolPropertyRecord; // 0x20
		::System::Boolean DHEHOKKAFKK; // 0x28
		::System::Byte _padding0[0x7];
		::RPG::Client::BinderIndex* NBOMCGPFIAE; // 0x30
		static ::System::String** StaticGet_PoolTag()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "PoolableBinder")->GetStaticField(0x30C60);
		}

		static ::System::String** StaticGet_UnPoolTag()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "PoolableBinder")->GetStaticField(0x30C68);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_CCTOR_OFFSET))();
		}

		::System::Void RecordBeforePropertySet(::UnityEngine::GameObject* a1, ::RPG::Client::RecordPropertyType a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::RecordPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_RECORDBEFOREPROPERTYSET_OFFSET))(this, a1, a2);
		}

		::System::Void RecordBeforePropertySet_1(::UnityEngine::Behaviour* a1, ::RPG::Client::RecordPropertyType a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Behaviour*, ::RPG::Client::RecordPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_RECORDBEFOREPROPERTYSET_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void TryRecord(::UnityEngine::GameObject* a1, ::RPG::Client::RecordPropertyType a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::Client::RecordPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_TRYRECORD_OFFSET))(a1, a2);
		}

		static ::System::Void TryRecord_1(::UnityEngine::Behaviour* a1, ::RPG::Client::RecordPropertyType a2)
		{
			return ((::System::Void(*)(::UnityEngine::Behaviour*, ::RPG::Client::RecordPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_TRYRECORD_1_OFFSET))(a1, a2);
		}

		static ::RPG::Client::PoolableBinder* ENAHBOHCHHI(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::Client::PoolableBinder*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_ENAHBOHCHHI_OFFSET))(a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_DESPAWNED_OFFSET))(this);
		}

		::RPG::Client::BinderIndex* MMODMEPNEFD()
		{
			return ((::RPG::Client::BinderIndex*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_MMODMEPNEFD_OFFSET))(this);
		}

		::System::Void PPINDFCOEDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_PPINDFCOEDP_OFFSET))(this);
		}

		::System::Boolean IsPoolable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_ISPOOLABLE_OFFSET))(this);
		}

	};
}
