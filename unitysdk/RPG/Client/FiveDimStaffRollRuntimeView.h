#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class FiveDimStaffRollUISlot; }
namespace RPG::Client { class NotifyHandler; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x19AD88B0)
#define RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_CDOKOPKAIAB_OFFSET UNITYSDK_OFFSET(0x19AD8940)
#define RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x19AD9130)
#define RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_GET_BILLBOARDROOT_OFFSET UNITYSDK_OFFSET(0x19AD9020)
#define RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_HMEHDHMDBMN_OFFSET UNITYSDK_OFFSET(0x19AD8CC0)
#define RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_IOBPFHOHBNA_OFFSET UNITYSDK_OFFSET(0x19AD9030)
#define RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_NOTIFYSLOTENABLED_OFFSET UNITYSDK_OFFSET(0x19AD8FD0)
#define RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19AD8B80)
#define RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19AD8A80)
#define RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_RELEASEALL_OFFSET UNITYSDK_OFFSET(0x19AD8BE0)
#define RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_REQUESTSPAWNALL_OFFSET UNITYSDK_OFFSET(0x19AD8AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimStaffRollRuntimeView_TypeDefinitionIndex = 61685;

	class FiveDimStaffRollRuntimeView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FiveDimStaffRollUISlot*>* MFGEADHPLHO; // 0x18
		::RPG::Client::NotifyHandler* GIPMOOHGHKM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_ONDISABLE_OFFSET))(this);
		}

		::System::Void RequestSpawnAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_REQUESTSPAWNALL_OFFSET))(this);
		}

		::System::Void ReleaseAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_RELEASEALL_OFFSET))(this);
		}

		::System::Void NotifySlotEnabled(::RPG::Client::FiveDimStaffRollUISlot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimStaffRollUISlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_NOTIFYSLOTENABLED_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_BillboardRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_GET_BILLBOARDROOT_OFFSET))(this);
		}

		::System::Void IOBPFHOHBNA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_IOBPFHOHBNA_OFFSET))(this, a1);
		}

		::System::Void HMEHDHMDBMN(::RPG::Client::FiveDimStaffRollUISlot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimStaffRollUISlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_HMEHDHMDBMN_OFFSET))(this, a1);
		}

		::System::Void CDOKOPKAIAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLRUNTIMEVIEW_CDOKOPKAIAB_OFFSET))(this);
		}

	};
}
