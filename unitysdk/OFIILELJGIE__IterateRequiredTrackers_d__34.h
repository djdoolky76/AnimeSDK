#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEBPFBNCALB;
class OFIILELJGIE;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define OFIILELJGIE__ITERATEREQUIREDTRACKERS_D__34_CTOR_OFFSET UNITYSDK_OFFSET(0x1C54AF40)
#define OFIILELJGIE__ITERATEREQUIREDTRACKERS_D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C54BC00)
#define OFIILELJGIE__ITERATEREQUIREDTRACKERS_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_MECHCRAFT_MECHCRAFTCRAFTINGTRACKERBASE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C54C130)
#define OFIILELJGIE__ITERATEREQUIREDTRACKERS_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MECHCRAFT_MECHCRAFTCRAFTINGTRACKERBASE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C54C0C0)
#define OFIILELJGIE__ITERATEREQUIREDTRACKERS_D__34_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C54C1B0)
#define OFIILELJGIE__ITERATEREQUIREDTRACKERS_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C54C120)
#define OFIILELJGIE__ITERATEREQUIREDTRACKERS_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C54C0D0)
#define OFIILELJGIE__ITERATEREQUIREDTRACKERS_D__34_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C54BAC0)
#define OFIILELJGIE__ITERATEREQUIREDTRACKERS_D__34___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1C54BB00)

inline static constexpr unsigned int OFIILELJGIE__IterateRequiredTrackers_d__34_TypeDefinitionIndex = 41828;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34>
	class OFIILELJGIE__IterateRequiredTrackers_d__34 : public ::System::Object
	{
	public:
		::OFIILELJGIE* __4__this; // 0x10
		::System::Collections::Generic::IEnumerator_1<::JEBPFBNCALB*>* __7__wrap1; // 0x18
		::JEBPFBNCALB* __2__current; // 0x20
		::System::Int32 __l__initialThreadId; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFIILELJGIE__ITERATEREQUIREDTRACKERS_D__34_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE__ITERATEREQUIREDTRACKERS_D__34_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE__ITERATEREQUIREDTRACKERS_D__34_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE__ITERATEREQUIREDTRACKERS_D__34___M__FINALLY1_OFFSET))(this);
		}

		::JEBPFBNCALB* System_Collections_Generic_IEnumerator_RPG_Client_MechCraft_MechCraftCraftingTrackerBase__get_Current()
		{
			return ((::JEBPFBNCALB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE__ITERATEREQUIREDTRACKERS_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MECHCRAFT_MECHCRAFTCRAFTINGTRACKERBASE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE__ITERATEREQUIREDTRACKERS_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE__ITERATEREQUIREDTRACKERS_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::JEBPFBNCALB*>* System_Collections_Generic_IEnumerable_RPG_Client_MechCraft_MechCraftCraftingTrackerBase__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::JEBPFBNCALB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE__ITERATEREQUIREDTRACKERS_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_MECHCRAFT_MECHCRAFTCRAFTINGTRACKERBASE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE__ITERATEREQUIREDTRACKERS_D__34_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
