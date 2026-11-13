#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJFIKOKBCCA.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;
class JCGNPHFJJIG;
namespace RPG::Client { class FiveDimStaffEntry; }
namespace RPG::Client { class FiveDimStaffEntryTrigger; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::Client { class UIFollow3DTarget_PostProcessDelegate; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimView; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_BINDSPAWNEDUI_OFFSET UNITYSDK_OFFSET(0x19AD9810)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_CTOR_OFFSET UNITYSDK_OFFSET(0x19ADABF0)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_GET_EDITSOURCE_OFFSET UNITYSDK_OFFSET(0x19ADABB0)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_GET_SPAWNEDSTAFFENTRY_OFFSET UNITYSDK_OFFSET(0x19ADABE0)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_GET_SPAWNEDUI_OFFSET UNITYSDK_OFFSET(0x19ADABD0)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19AD9710)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19AD9170)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_RESOLVESPAWNSOURCE_OFFSET UNITYSDK_OFFSET(0x19AD9080)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_SETOWNER_OFFSET UNITYSDK_OFFSET(0x19AD90E0)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_SET_EDITSOURCE_OFFSET UNITYSDK_OFFSET(0x19ADABC0)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_TRIGGERIN_OFFSET UNITYSDK_OFFSET(0x19AD8760)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_UNBINDSPAWNEDUI_OFFSET UNITYSDK_OFFSET(0x19AD8DE0)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__APPLYFOLLOWROTATION_OFFSET UNITYSDK_OFFSET(0x19AD9CD0)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__APPLYPERSPECTIVESCALE_OFFSET UNITYSDK_OFFSET(0x19AD9FE0)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__ENSUREINITIALIZED_OFFSET UNITYSDK_OFFSET(0x19AD9220)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__FLATTENTOBILLBOARDPLANE_OFFSET UNITYSDK_OFFSET(0x19ADA700)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__ONFOLLOWERPOSTTICK_OFFSET UNITYSDK_OFFSET(0x19ADA5E0)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__ONFOLLOWERPRETICK_OFFSET UNITYSDK_OFFSET(0x19AD9C50)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__ONRENDERVISIBLECHANGED_OFFSET UNITYSDK_OFFSET(0x19ADAB50)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__RELEASE_OFFSET UNITYSDK_OFFSET(0x19AD97A0)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__SYNCSPAWNEDACTIVE_OFFSET UNITYSDK_OFFSET(0x19AD95A0)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__SYNCTRIGGERSIZE_OFFSET UNITYSDK_OFFSET(0x19ADA630)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__TRYBINDENTITY_OFFSET UNITYSDK_OFFSET(0x19AD93C0)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__UNBINDENTITY_OFFSET UNITYSDK_OFFSET(0x19ADAA00)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimStaffRollUISlot_TypeDefinitionIndex = 61686;

	class FiveDimStaffRollUISlot : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::RectTransform* _EditSource; // 0x18
		::JCGNPHFJJIG* _Owner; // 0x20
		::UnityEngine::GameObject* _SpawnedUI; // 0x28
		::UnityEngine::RectTransform* _SpawnedRect; // 0x30
		::UnityEngine::RectTransform* _SpawnedParentRect; // 0x38
		::RPG::Client::FiveDimStaffEntry* _SpawnedStaffEntry; // 0x40
		::RPG::Client::FiveDimStaffEntryTrigger* _EntryTrigger; // 0x48
		::RPG::Client::UIFollow3DTarget* _Follower; // 0x50
		::System::Action_1<::RPG::Client::UIFollow3DTarget*>* _FollowerPreTickHandler; // 0x58
		::System::Action_1<::RPG::Client::UIFollow3DTarget*>* _FollowerPostTickHandler; // 0x60
		::RPG::Client::UIFollow3DTarget_PostProcessDelegate* _FollowerPostProcessHandler; // 0x68
		::KJFIKOKBCCA _RenderVisibleChangedHandler; // 0x70
		::RPG::Client::LittleGame::FiveDim::FiveDimView* _FiveDimView; // 0x100
		::HIOEAKHGILF* _Entity; // 0x108
		::System::Boolean _IsInitialized; // 0x110
		::System::Boolean _IsEntityRenderVisible; // 0x111
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_ONDISABLE_OFFSET))(this);
		}

		::System::Void TriggerIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_TRIGGERIN_OFFSET))(this);
		}

		::UnityEngine::GameObject* ResolveSpawnSource()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_RESOLVESPAWNSOURCE_OFFSET))(this);
		}

		::System::Void BindSpawnedUI(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_BINDSPAWNEDUI_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* UnbindSpawnedUI()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_UNBINDSPAWNEDUI_OFFSET))(this);
		}

		::System::Void SetOwner(::JCGNPHFJJIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCGNPHFJJIG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_SETOWNER_OFFSET))(this, a1);
		}

		::System::Void _OnFollowerPreTick(::RPG::Client::UIFollow3DTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFollow3DTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__ONFOLLOWERPRETICK_OFFSET))(this, a1);
		}

		::System::Void _OnFollowerPostTick(::RPG::Client::UIFollow3DTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFollow3DTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__ONFOLLOWERPOSTTICK_OFFSET))(this, a1);
		}

		::System::Void _SyncTriggerSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__SYNCTRIGGERSIZE_OFFSET))(this);
		}

		::System::Void _ApplyFollowRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__APPLYFOLLOWROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 _FlattenToBillboardPlane(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__FLATTENTOBILLBOARDPLANE_OFFSET))(this, a1);
		}

		::System::Void _ApplyPerspectiveScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__APPLYPERSPECTIVESCALE_OFFSET))(this);
		}

		::System::Void _EnsureInitialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__ENSUREINITIALIZED_OFFSET))(this);
		}

		::System::Void _Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__RELEASE_OFFSET))(this);
		}

		::System::Void _TryBindEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__TRYBINDENTITY_OFFSET))(this);
		}

		::System::Void _UnbindEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__UNBINDENTITY_OFFSET))(this);
		}

		::System::Void _OnRenderVisibleChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__ONRENDERVISIBLECHANGED_OFFSET))(this);
		}

		::System::Void _SyncSpawnedActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT__SYNCSPAWNEDACTIVE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_EditSource()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_GET_EDITSOURCE_OFFSET))(this);
		}

		::System::Void set_EditSource(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_SET_EDITSOURCE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_SpawnedUI()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_GET_SPAWNEDUI_OFFSET))(this);
		}

		::RPG::Client::FiveDimStaffEntry* get_SpawnedStaffEntry()
		{
			return ((::RPG::Client::FiveDimStaffEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT_GET_SPAWNEDSTAFFENTRY_OFFSET))(this);
		}

	};
}
