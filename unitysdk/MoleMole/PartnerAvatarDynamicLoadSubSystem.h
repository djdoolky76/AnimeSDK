#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPEPLFIFEBD.h"

namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM_FINDPARTNERAVATARENTITYBYROBOTID_OFFSET UNITYSDK_OFFSET(0x14BB5A40)
#define MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM_GET_LOADEDROBOTIDS_OFFSET UNITYSDK_OFFSET(0x14BB5050)
#define MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM_ISPENDING_OFFSET UNITYSDK_OFFSET(0x14BB6AE0)
#define MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14BB71F0)
#define MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14BB6BA0)
#define MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM_REQUESTLOAD_OFFSET UNITYSDK_OFFSET(0x14BB5060)
#define MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM_REQUESTUNLOAD_OFFSET UNITYSDK_OFFSET(0x14BB5C30)
#define MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM_ROLLBACKMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x14BB6060)
#define MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM_SYNCBYROBOTIDS_OFFSET UNITYSDK_OFFSET(0x14BB60F0)
#define MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14BB7350)
#define MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14BB73F0)
#define MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14BB7480)

namespace MoleMole
{
	inline static constexpr unsigned int PartnerAvatarDynamicLoadSubSystem_TypeDefinitionIndex = 68987;

	class PartnerAvatarDynamicLoadSubSystem
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _pending; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Int32>* _loadedRobotIDs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::System::Int32>* get_LoadedRobotIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM_GET_LOADEDROBOTIDS_OFFSET))(this);
		}

		::System::Void RequestLoad(::LPEPLFIFEBD meta, ::System::Action_1<::MoleMole::Battle::Entity*>* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::LPEPLFIFEBD, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM_REQUESTLOAD_OFFSET))(this, meta, onComplete);
		}

		::System::Boolean RequestUnload(::System::Int32 robotID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM_REQUESTUNLOAD_OFFSET))(this, robotID);
		}

		::System::Void SyncByRobotIDs(::System::Collections::Generic::ICollection_1<::System::Int32>* targetRobotIDs, ::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::Int32>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM_SYNCBYROBOTIDS_OFFSET))(this, targetRobotIDs, onComplete);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean IsPending(::System::Int32 robotID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM_ISPENDING_OFFSET))(this, robotID);
		}

		static ::System::Void RollbackMemberData(::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* memberList, ::MoleMole::InLevelAvatarDataItem* avatarData)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::MoleMole::InLevelAvatarDataItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM_ROLLBACKMEMBERDATA_OFFSET))(memberList, avatarData);
		}

		static ::MoleMole::Battle::Entity* FindPartnerAvatarEntityByRobotID(::System::Int32 robotID)
		{
			return ((::MoleMole::Battle::Entity*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM_FINDPARTNERAVATARENTITYBYROBOTID_OFFSET))(robotID);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
