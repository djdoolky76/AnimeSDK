#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBGGDKBCNMO.h"

namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A9069F0)
#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_ONBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1A907690)
#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_ONBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1A907870)
#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A906CD0)
#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A9073D0)
#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_REGISTERINPUTHOLD_OFFSET UNITYSDK_OFFSET(0x1A9070D0)
#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_UNREGISTERINPUTHOLD_OFFSET UNITYSDK_OFFSET(0x1A907280)
#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A907A50)
#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A907B30)
#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A907BC0)
#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A907C50)

namespace MoleMole
{
	inline static constexpr unsigned int HackerDroneNewbieSubsystem_TypeDefinitionIndex = 73001;

	class HackerDroneNewbieSubsystem
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* _pendingRemove; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _entries; // 0x18
		::System::Action_1<::System::EventArgs*>* _onButtonUp; // 0x20
		::System::Action_1<::System::EventArgs*>* _onButtonDown; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterInputHold(::System::String* tag, ::JBGGDKBCNMO inputType, ::System::Single holdTimeThreshold, ::System::Boolean disposeAfterTriggered, ::System::Action* onTriggered, ::System::Action* onDispose)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::JBGGDKBCNMO, ::System::Single, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_REGISTERINPUTHOLD_OFFSET))(this, tag, inputType, holdTimeThreshold, disposeAfterTriggered, onTriggered, onDispose);
		}

		::System::Void UnregisterInputHold(::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_UNREGISTERINPUTHOLD_OFFSET))(this, tag);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnButtonDown(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_ONBUTTONDOWN_OFFSET))(this, args);
		}

		::System::Void OnButtonUp(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_ONBUTTONUP_OFFSET))(this, args);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
