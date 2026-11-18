#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class ENGKPGFGGLM;
class MNKAABDAOKL;
class NGCINGEDCNK;
class ScreenSpaceQuadRenderer;
class ScreenSpaceSplineRenderer;
namespace MoleMole { class MonsterHatredLineSubSystem_HatredLineLinkData; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_CHECKADDNEWENTITY_OFFSET UNITYSDK_OFFSET(0x14B0E6B0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_CHECKCANLINKHATREDLINE_OFFSET UNITYSDK_OFFSET(0x14B0C5C0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_CHECKVALIDENTITY_OFFSET UNITYSDK_OFFSET(0x14B0EC80)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_FETCHNEEDPROCESSDATA_OFFSET UNITYSDK_OFFSET(0x14B0BB30)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_LINKTARGETHEAD_OFFSET UNITYSDK_OFFSET(0x14B0D3B0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_LOADHEADQUADRESOBJ_OFFSET UNITYSDK_OFFSET(0x14B0D910)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_LOADRESOBJ_OFFSET UNITYSDK_OFFSET(0x14B0D2D0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14B0B620)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14B0D9F0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x14B0E5A0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_ONMONSTERREMOVE_OFFSET UNITYSDK_OFFSET(0x14B0E8A0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14B0BCD0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_REFRESHHATREDLINESTATE_OFFSET UNITYSDK_OFFSET(0x14B0CDE0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x14B0E180)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_RELEASEHATREDLINEGAMEOBJECTTOPOOL_OFFSET UNITYSDK_OFFSET(0x14B0EDD0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_RELEASEHATREDLINE_OFFSET UNITYSDK_OFFSET(0x14B0CC60)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_RELEASELINKTARGETHEAD_OFFSET UNITYSDK_OFFSET(0x14B0CA40)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_SETENTITYLINKINFO_OFFSET UNITYSDK_OFFSET(0x14B0C6F0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_TICKHATREDLINE_OFFSET UNITYSDK_OFFSET(0x14B0C260)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_TICKWAITINGENTITY_OFFSET UNITYSDK_OFFSET(0x14B0C070)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x14B0E420)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14B0EE70)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14B0F1D0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14B0F260)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14B0F2F0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x14B0F380)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x14B0F410)

namespace MoleMole
{
	inline static constexpr unsigned int MonsterHatredLineSubSystem_TypeDefinitionIndex = 57914;

	class MonsterHatredLineSubSystem
	{
	public:
		// static const ::System::Single tikcInterval; // 0x0
		::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* hatredLineObjectPool; // 0x10
		::Foundation::AssetPath quadResPath; // 0x18
		::Foundation::AssetRequestHandle lineResHandle; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ScreenSpaceQuadRenderer*>* linkHeadDic; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* hatredLineDataList; // 0x50
		::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* headQuadObjectPool; // 0x58
		::System::String* playerAttachPointName; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* linkedTargetRecord; // 0x68
		::Foundation::AssetPath lineResPath; // 0x70
		::System::String* hideHetredLineAnimatorZoneTag; // 0x80
		::Foundation::AssetRequestHandle quadResHandle; // 0x88
		::System::Collections::Generic::List_1<::System::Object*>* newAddHatredDataList; // 0xA8
		::System::String* hetredLineEnableAnimatorZoneTag; // 0xB0
		::System::String* enemyAttachPointName; // 0xB8
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* waittingList; // 0xC0
		::System::Single timer; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void TickWaitingEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_TICKWAITINGENTITY_OFFSET))(this);
		}

		::System::Void TickHatredLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_TICKHATREDLINE_OFFSET))(this);
		}

		::System::Void SetEntityLinkInfo(::MoleMole::Battle::Entity* sourceEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_SETENTITYLINKINFO_OFFSET))(this, sourceEntity);
		}

		::System::Void RefreshHatredLineState(::MoleMole::MonsterHatredLineSubSystem_HatredLineLinkData* linkData, ::System::Boolean ignoreZoneTagsCheck)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonsterHatredLineSubSystem_HatredLineLinkData*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_REFRESHHATREDLINESTATE_OFFSET))(this, linkData, ignoreZoneTagsCheck);
		}

		::System::Void ReleaseLinkTargetHead(::System::UInt32 targetEntityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_RELEASELINKTARGETHEAD_OFFSET))(this, targetEntityId);
		}

		::System::Void LinkTargetHead(::System::UInt32 targetEntityId, ::System::String* attachPointName)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_LINKTARGETHEAD_OFFSET))(this, targetEntityId, attachPointName);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void CheckAddNewEntity(::MNKAABDAOKL* evtEntityReady)
		{
			return ((::System::Void(*)(::PVOID, ::MNKAABDAOKL*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_CHECKADDNEWENTITY_OFFSET))(this, evtEntityReady);
		}

		::System::Boolean CheckValidEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_CHECKVALIDENTITY_OFFSET))(this, entity);
		}

		::System::Void OnMonsterRemove(::NGCINGEDCNK* evtEntityRemove)
		{
			return ((::System::Void(*)(::PVOID, ::NGCINGEDCNK*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_ONMONSTERREMOVE_OFFSET))(this, evtEntityRemove);
		}

		::System::Void FetchNeedProcessData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_FETCHNEEDPROCESSDATA_OFFSET))(this);
		}

		::System::Boolean CheckCanLinkHatredLine(::MoleMole::Battle::Entity* sourceEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_CHECKCANLINKHATREDLINE_OFFSET))(this, sourceEntity);
		}

		::UnityEngine::GameObject* LoadResObj()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_LOADRESOBJ_OFFSET))(this);
		}

		::UnityEngine::GameObject* LoadHeadQuadResObj()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_LOADHEADQUADRESOBJ_OFFSET))(this);
		}

		::System::Void ReleaseHatredLineGameObjectToPool(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_RELEASEHATREDLINEGAMEOBJECTTOPOOL_OFFSET))(this, go);
		}

		::System::Void ReleaseHatredLine(::ScreenSpaceSplineRenderer* splineRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenSpaceSplineRenderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_RELEASEHATREDLINE_OFFSET))(this, splineRenderer);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
