#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseMonoTriggerRegion.h"
#include "unitysdk/PDHLJJCMEDJ.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_MONOTRIGGERREGION_CTOR_OFFSET UNITYSDK_OFFSET(0xD86B730)
#define RPG_CLIENT_MONOTRIGGERREGION_ENABLECOLLIDER_OFFSET UNITYSDK_OFFSET(0xD86B650)
#define RPG_CLIENT_MONOTRIGGERREGION_GET_CORRESPONDCOLLIDER_OFFSET UNITYSDK_OFFSET(0xD86B720)
#define RPG_CLIENT_MONOTRIGGERREGION_HGJAOCKKCBJ_OFFSET UNITYSDK_OFFSET(0xD86B4A0)
#define RPG_CLIENT_MONOTRIGGERREGION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD86B450)
#define RPG_CLIENT_MONOTRIGGERREGION_ONGUESTCOLLIDERDISABLE_OFFSET UNITYSDK_OFFSET(0xD86B6B0)
#define RPG_CLIENT_MONOTRIGGERREGION_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xD86B260)
#define RPG_CLIENT_MONOTRIGGERREGION_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xD86B390)
#define RPG_CLIENT_MONOTRIGGERREGION_OVERLAPPOINT_OFFSET UNITYSDK_OFFSET(0xD86ACC0)
#define RPG_CLIENT_MONOTRIGGERREGION_OVERLAP_OFFSET UNITYSDK_OFFSET(0xD86A9F0)
#define RPG_CLIENT_MONOTRIGGERREGION_SETCOLLIDER_OFFSET UNITYSDK_OFFSET(0xD86B600)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTriggerRegion_TypeDefinitionIndex = 68622;

	class MonoTriggerRegion : public ::RPG::Client::BaseMonoTriggerRegion
	{
	public:
		::UnityEngine::Collider* GBDKBLPAHEL; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* AHHMLCPGGJH; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::PDHLJJCMEDJ>* Overlap(::UnityEngine::LayerMask a1)
		{
			return ((::System::Collections::Generic::List_1<::PDHLJJCMEDJ>*(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION_OVERLAP_OFFSET))(this, a1);
		}

		::System::Boolean OverlapPoint(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION_OVERLAPPOINT_OFFSET))(this, a1);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetCollider(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION_SETCOLLIDER_OFFSET))(this, a1);
		}

		::System::Void EnableCollider(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION_ENABLECOLLIDER_OFFSET))(this, a1);
		}

		::System::Void HGJAOCKKCBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION_HGJAOCKKCBJ_OFFSET))(this);
		}

		::System::Void OnGuestColliderDisable(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION_ONGUESTCOLLIDERDISABLE_OFFSET))(this, a1);
		}

		::UnityEngine::Collider* get_CorrespondCollider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION_GET_CORRESPONDCOLLIDER_OFFSET))(this);
		}

	};
}
