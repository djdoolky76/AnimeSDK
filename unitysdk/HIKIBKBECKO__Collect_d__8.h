#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/RoadRashGameSettingsConfigure_ImpactEffectConfig.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define HIKIBKBECKO__COLLECT_D__8_CTOR_OFFSET UNITYSDK_OFFSET(0x15CE4320)
#define HIKIBKBECKO__COLLECT_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15CE7EC0)
#define HIKIBKBECKO__COLLECT_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15CE8390)
#define HIKIBKBECKO__COLLECT_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15CE8320)
#define HIKIBKBECKO__COLLECT_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15CE8440)
#define HIKIBKBECKO__COLLECT_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15CE8380)
#define HIKIBKBECKO__COLLECT_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15CE8330)
#define HIKIBKBECKO__COLLECT_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CE7D80)
#define HIKIBKBECKO__COLLECT_D__8___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x15CE7DC0)

inline static constexpr unsigned int HIKIBKBECKO__Collect_d__8_TypeDefinitionIndex = 75892;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
	class HIKIBKBECKO__Collect_d__8 : public ::System::Object
	{
	public:
		::System::String* __2__current; // 0x10
		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_ImpactEffectConfig config; // 0x18
		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_ImpactEffectConfig __3__config; // 0x50
		::System::Collections::Generic::IEnumerator_1<::System::String*>* __7__wrap1; // 0x88
		::System::Int32 __1__state; // 0x90
		::System::Int32 __l__initialThreadId; // 0x94
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIKIBKBECKO__COLLECT_D__8_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKIBKBECKO__COLLECT_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKIBKBECKO__COLLECT_D__8_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKIBKBECKO__COLLECT_D__8___M__FINALLY1_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKIBKBECKO__COLLECT_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKIBKBECKO__COLLECT_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKIBKBECKO__COLLECT_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKIBKBECKO__COLLECT_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKIBKBECKO__COLLECT_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
