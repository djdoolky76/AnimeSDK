#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/UpdateTracker_UpdateClock.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_UPDATETRACKER_GETPREFERREDUPDATE_OFFSET UNITYSDK_OFFSET(0x1FC6E0A0)
#define CINEMACHINE_UPDATETRACKER_INITIALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x1FC6DA20)
#define CINEMACHINE_UPDATETRACKER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1FC6E410)
#define CINEMACHINE_UPDATETRACKER_UPDATETARGETS_OFFSET UNITYSDK_OFFSET(0x1FC6DB10)
#define CINEMACHINE_UPDATETRACKER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC6E5A0)
#define CINEMACHINE_UPDATETRACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6E590)

namespace Cinemachine
{
	inline static constexpr unsigned int UpdateTracker_TypeDefinitionIndex = 34344;

	class UpdateTracker : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>** StaticGet_sToDelete()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(UpdateTracker_TypeDefinitionIndex)->GetStaticField(0x2A2A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Object*>** StaticGet_mUpdateStatus()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UpdateTracker_TypeDefinitionIndex)->GetStaticField(0x2A2A8);
		}
		static ::System::Single* StaticGet_mLastUpdateTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UpdateTracker_TypeDefinitionIndex)->GetStaticField(0x87A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER__CCTOR_OFFSET))();
		}

		static ::System::Void InitializeModule()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_INITIALIZEMODULE_OFFSET))();
		}

		static ::System::Void UpdateTargets(::Cinemachine::UpdateTracker_UpdateClock currentClock)
		{
			return ((::System::Void(*)(::Cinemachine::UpdateTracker_UpdateClock))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_UPDATETARGETS_OFFSET))(currentClock);
		}

		static ::Cinemachine::UpdateTracker_UpdateClock GetPreferredUpdate(::UnityEngine::Transform* target)
		{
			return ((::Cinemachine::UpdateTracker_UpdateClock(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_GETPREFERREDUPDATE_OFFSET))(target);
		}

		static ::System::Void OnUpdate(::Cinemachine::UpdateTracker_UpdateClock currentClock)
		{
			return ((::System::Void(*)(::Cinemachine::UpdateTracker_UpdateClock))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_ONUPDATE_OFFSET))(currentClock);
		}
	};
}
