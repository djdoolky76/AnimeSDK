#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBMDNNBIOAI;
namespace RPG::Client { class TimeRewindControlManager; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_CACHEEFFASYNC_OFFSET UNITYSDK_OFFSET(0xE26FD30)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_CLEAR_OFFSET UNITYSDK_OFFSET(0xE273E00)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_CTOR_OFFSET UNITYSDK_OFFSET(0xE27B8F0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_EFFECTSETFINISH_OFFSET UNITYSDK_OFFSET(0xE271300)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_FIREEFFECTASYNC_OFFSET UNITYSDK_OFFSET(0xE271000)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_GET_LOADEFFITEM_OFFSET UNITYSDK_OFFSET(0xE27B430)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_INIT_OFFSET UNITYSDK_OFFSET(0xE2703B0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindControlManager_TimeRewindEntityPreload_TypeDefinitionIndex = 60825;

	class TimeRewindControlManager_TimeRewindEntityPreload : public ::System::Object
	{
	public:
		::RPG::Client::TimeRewindControlManager* _OwnerManager; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* _UniqueEffPreloadPaths; // 0x18
		::RPG::GameCore::GameEntity* Owner; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _LoadEffItem; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* get_LoadEffItem()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_GET_LOADEFFITEM_OFFSET))(this);
		}

		::System::Void FireEffectAsync(::RPG::Client::TriggerEffectParams* a1, ::DBMDNNBIOAI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::DBMDNNBIOAI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_FIREEFFECTASYNC_OFFSET))(this, a1, a2);
		}

		::System::Void EffectSetFinish(::DBMDNNBIOAI* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::DBMDNNBIOAI*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_EFFECTSETFINISH_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_CLEAR_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::GameEntity* a1, ::RPG::Client::TimeRewindControlManager* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::TimeRewindControlManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void CacheEffAsync(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOAD_CACHEEFFASYNC_OFFSET))(this, a1);
		}

	};
}
