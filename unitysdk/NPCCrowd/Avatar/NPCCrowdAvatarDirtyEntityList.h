#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarDirtyEntity.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarDirtyFlags.h"
#include "unitysdk/System/Object.h"

class COCJHGGDBCA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARDIRTYENTITYLIST_CLEARNOLOCK_OFFSET UNITYSDK_OFFSET(0x106C2370)
#define NPCCROWD_AVATAR_NPCCROWDAVATARDIRTYENTITYLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x106C2450)
#define NPCCROWD_AVATAR_NPCCROWDAVATARDIRTYENTITYLIST_COLLECT_OFFSET UNITYSDK_OFFSET(0x106C2250)
#define NPCCROWD_AVATAR_NPCCROWDAVATARDIRTYENTITYLIST_MARKALL_OFFSET UNITYSDK_OFFSET(0x106C20B0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARDIRTYENTITYLIST_MARKNOLOCK_OFFSET UNITYSDK_OFFSET(0x106C1F60)
#define NPCCROWD_AVATAR_NPCCROWDAVATARDIRTYENTITYLIST_MARK_OFFSET UNITYSDK_OFFSET(0x106C1E60)
#define NPCCROWD_AVATAR_NPCCROWDAVATARDIRTYENTITYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x106C2530)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarDirtyEntityList_TypeDefinitionIndex = 92122;

	class NPCCrowdAvatarDirtyEntityList : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyEntity>* _entities; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _entityIndexMap; // 0x18
		::System::Object* _lock; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARDIRTYENTITYLIST__CTOR_OFFSET))(this);
		}

		::System::Void Mark(::System::UInt32 entityId, ::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyFlags))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARDIRTYENTITYLIST_MARK_OFFSET))(this, entityId, flags);
		}

		::System::Void MarkAll(::System::Collections::Generic::List_1<::COCJHGGDBCA*>* npcComponents, ::System::Int32 count, ::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::COCJHGGDBCA*>*, ::System::Int32, ::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyFlags))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARDIRTYENTITYLIST_MARKALL_OFFSET))(this, npcComponents, count, flags);
		}

		::System::Void Collect(::System::Collections::Generic::List_1<::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyEntity>* dirtyEntities)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyEntity>*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARDIRTYENTITYLIST_COLLECT_OFFSET))(this, dirtyEntities);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARDIRTYENTITYLIST_CLEAR_OFFSET))(this);
		}

		::System::Void MarkNoLock(::System::UInt32 entityId, ::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyFlags))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARDIRTYENTITYLIST_MARKNOLOCK_OFFSET))(this, entityId, flags);
		}

		::System::Void ClearNoLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARDIRTYENTITYLIST_CLEARNOLOCK_OFFSET))(this);
		}
	};
}
