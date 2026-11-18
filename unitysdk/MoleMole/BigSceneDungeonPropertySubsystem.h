#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJGKLAOFIEC.h"
#include "unitysdk/FLEBMMCIHED.h"
#include "unitysdk/JNEMBKJIPKP.h"

class CPJHOPDANAJ;
class HGJALHMKNNI;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ADDPERSISTFACTOR_OFFSET UNITYSDK_OFFSET(0x1650E630)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_APPLYINSTANTDELTA_OFFSET UNITYSDK_OFFSET(0x1650EA10)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_CLEARPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1650FED0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_FLUSHPENDINGSYNC_OFFSET UNITYSDK_OFFSET(0x1650FBC0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_GETALLDEBUGCONTRIBUTIONS_OFFSET UNITYSDK_OFFSET(0x1650F1D0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_INITPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1650F3C0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1650F340)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1650FB50)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ONDUNGEONPROPERTYSYNCNEEDED_OFFSET UNITYSDK_OFFSET(0x16510090)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1650F940)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1650F7A0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_POPPROPERTYRATIOSBYTAG_OFFSET UNITYSDK_OFFSET(0x1650ECA0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_PUSHPROPERTYRATIO_OFFSET UNITYSDK_OFFSET(0x1650EB60)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_REGISTERVALUECHANGEDLISTENER_OFFSET UNITYSDK_OFFSET(0x1650EEF0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_REMOVEPERSISTFACTORSBYTAG_OFFSET UNITYSDK_OFFSET(0x1650E8F0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_REMOVEPERSISTFACTOR_OFFSET UNITYSDK_OFFSET(0x1650E790)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TICKPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1650F9D0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TICKSYNC_OFFSET UNITYSDK_OFFSET(0x1650F8B0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TRYGETPROPERTYMAXVALUE_OFFSET UNITYSDK_OFFSET(0x1650E500)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TRYGETPROPERTYRATIO_OFFSET UNITYSDK_OFFSET(0x1650EDC0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TRYGETPROPERTYSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1650E350)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TRYGETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1650E1F0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_UNREGISTERVALUECHANGEDLISTENER_OFFSET UNITYSDK_OFFSET(0x1650F060)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x16510100)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x16510240)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x165102D0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___BASE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x16510360)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16510400)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneDungeonPropertySubsystem_TypeDefinitionIndex = 47798;

	class BigSceneDungeonPropertySubsystem
	{
	public:
		// static const ::System::Single SyncInterval; // 0x0
		::System::Collections::Generic::Dictionary_2<::GJGKLAOFIEC, ::CPJHOPDANAJ*>* _properties; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _pendingSyncCache; // 0x18
		::System::Single _syncInterval; // 0x20
		::System::Single _syncTimer; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetPropertyValue(::GJGKLAOFIEC type, ::System::Single& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJGKLAOFIEC, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TRYGETPROPERTYVALUE_OFFSET))(this, type, value);
		}

		::System::Boolean TryGetPropertySnapshot(::GJGKLAOFIEC type, ::FLEBMMCIHED& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJGKLAOFIEC, ::FLEBMMCIHED&))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TRYGETPROPERTYSNAPSHOT_OFFSET))(this, type, value);
		}

		::System::Boolean TryGetPropertyMaxValue(::GJGKLAOFIEC type, ::System::Single& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJGKLAOFIEC, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TRYGETPROPERTYMAXVALUE_OFFSET))(this, type, value);
		}

		::JNEMBKJIPKP AddPersistFactor(::GJGKLAOFIEC type, ::System::String* tag, ::System::Single deltaRate, ::System::Single duration)
		{
			return ((::JNEMBKJIPKP(*)(::PVOID, ::GJGKLAOFIEC, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ADDPERSISTFACTOR_OFFSET))(this, type, tag, deltaRate, duration);
		}

		::System::Void RemovePersistFactor(::GJGKLAOFIEC type, ::JNEMBKJIPKP handle)
		{
			return ((::System::Void(*)(::PVOID, ::GJGKLAOFIEC, ::JNEMBKJIPKP))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_REMOVEPERSISTFACTOR_OFFSET))(this, type, handle);
		}

		::System::Void RemovePersistFactorsByTag(::GJGKLAOFIEC type, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::GJGKLAOFIEC, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_REMOVEPERSISTFACTORSBYTAG_OFFSET))(this, type, tag);
		}

		::System::Void ApplyInstantDelta(::GJGKLAOFIEC type, ::System::String* tag, ::System::Single delta, ::System::Boolean skipRatio)
		{
			return ((::System::Void(*)(::PVOID, ::GJGKLAOFIEC, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_APPLYINSTANTDELTA_OFFSET))(this, type, tag, delta, skipRatio);
		}

		::System::Void PushPropertyRatio(::GJGKLAOFIEC type, ::System::String* tag, ::System::Single ratioValue)
		{
			return ((::System::Void(*)(::PVOID, ::GJGKLAOFIEC, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_PUSHPROPERTYRATIO_OFFSET))(this, type, tag, ratioValue);
		}

		::System::Void PopPropertyRatiosByTag(::GJGKLAOFIEC type, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::GJGKLAOFIEC, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_POPPROPERTYRATIOSBYTAG_OFFSET))(this, type, tag);
		}

		::System::Boolean TryGetPropertyRatio(::GJGKLAOFIEC type, ::System::Single& ratio)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJGKLAOFIEC, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TRYGETPROPERTYRATIO_OFFSET))(this, type, ratio);
		}

		::System::Void RegisterValueChangedListener(::GJGKLAOFIEC type, ::System::Action_2<::System::Single, ::System::Single>* listener)
		{
			return ((::System::Void(*)(::PVOID, ::GJGKLAOFIEC, ::System::Action_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_REGISTERVALUECHANGEDLISTENER_OFFSET))(this, type, listener);
		}

		::System::Void UnregisterValueChangedListener(::GJGKLAOFIEC type, ::System::Action_2<::System::Single, ::System::Single>* listener)
		{
			return ((::System::Void(*)(::PVOID, ::GJGKLAOFIEC, ::System::Action_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_UNREGISTERVALUECHANGEDLISTENER_OFFSET))(this, type, listener);
		}

		::System::Collections::Generic::List_1<::HGJALHMKNNI*>* GetAllDebugContributions(::GJGKLAOFIEC type)
		{
			return ((::System::Collections::Generic::List_1<::HGJALHMKNNI*>*(*)(::PVOID, ::GJGKLAOFIEC))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_GETALLDEBUGCONTRIBUTIONS_OFFSET))(this, type);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnFixedUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ONFIXEDUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void InitProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_INITPROPERTIES_OFFSET))(this);
		}

		::System::Void ClearProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_CLEARPROPERTIES_OFFSET))(this);
		}

		::System::Void TickProperties(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TICKPROPERTIES_OFFSET))(this, deltaTime);
		}

		::System::Void TickSync(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TICKSYNC_OFFSET))(this, deltaTime);
		}

		::System::Void FlushPendingSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_FLUSHPENDINGSYNC_OFFSET))(this);
		}

		::System::Void OnDungeonPropertySyncNeeded(::GJGKLAOFIEC propertyType, ::System::Int32 currentValue)
		{
			return ((::System::Void(*)(::PVOID, ::GJGKLAOFIEC, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ONDUNGEONPROPERTYSYNCNEEDED_OFFSET))(this, propertyType, currentValue);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnFixedUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___BASE_ONFIXEDUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
