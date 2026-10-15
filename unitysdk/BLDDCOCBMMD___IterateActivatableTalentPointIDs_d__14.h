#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLDDCOCBMMD;
class GMDIBFIGIEG;
class PHCMIJEDENP;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define BLDDCOCBMMD___ITERATEACTIVATABLETALENTPOINTIDS_D__14_CTOR_OFFSET UNITYSDK_OFFSET(0xBA694E0)
#define BLDDCOCBMMD___ITERATEACTIVATABLETALENTPOINTIDS_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBA69A70)
#define BLDDCOCBMMD___ITERATEACTIVATABLETALENTPOINTIDS_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBA6A3F0)
#define BLDDCOCBMMD___ITERATEACTIVATABLETALENTPOINTIDS_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBA6A360)
#define BLDDCOCBMMD___ITERATEACTIVATABLETALENTPOINTIDS_D__14_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBA6A470)
#define BLDDCOCBMMD___ITERATEACTIVATABLETALENTPOINTIDS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBA6A3C0)
#define BLDDCOCBMMD___ITERATEACTIVATABLETALENTPOINTIDS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBA6A370)
#define BLDDCOCBMMD___ITERATEACTIVATABLETALENTPOINTIDS_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA697C0)
#define BLDDCOCBMMD___ITERATEACTIVATABLETALENTPOINTIDS_D__14___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xBA69970)
#define BLDDCOCBMMD___ITERATEACTIVATABLETALENTPOINTIDS_D__14___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0xBA69870)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
	class BLDDCOCBMMD___IterateActivatableTalentPointIDs_d__14 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::GMDIBFIGIEG*>* __7__wrap4; // 0x10
		::System::Collections::Generic::IEnumerator_1<::PHCMIJEDENP*>* __7__wrap3; // 0x18
		::GMDIBFIGIEG* _point_5__6; // 0x20
		::BLDDCOCBMMD* __4__this; // 0x28
		::System::UInt32 _holdCoin_5__3; // 0x30
		::System::Int32 __l__initialThreadId; // 0x34
		::System::UInt32 __2__current; // 0x38
		::System::UInt32 _workshopLevel_5__2; // 0x3C
		::System::Int32 __1__state; // 0x40
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BLDDCOCBMMD___ITERATEACTIVATABLETALENTPOINTIDS_D__14_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDDCOCBMMD___ITERATEACTIVATABLETALENTPOINTIDS_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDDCOCBMMD___ITERATEACTIVATABLETALENTPOINTIDS_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDDCOCBMMD___ITERATEACTIVATABLETALENTPOINTIDS_D__14___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDDCOCBMMD___ITERATEACTIVATABLETALENTPOINTIDS_D__14___M__FINALLY2_OFFSET))(this);
		}

		::System::UInt32 System_Collections_Generic_IEnumerator_System_UInt32__get_Current()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDDCOCBMMD___ITERATEACTIVATABLETALENTPOINTIDS_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDDCOCBMMD___ITERATEACTIVATABLETALENTPOINTIDS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDDCOCBMMD___ITERATEACTIVATABLETALENTPOINTIDS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* System_Collections_Generic_IEnumerable_System_UInt32__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDDCOCBMMD___ITERATEACTIVATABLETALENTPOINTIDS_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDDCOCBMMD___ITERATEACTIVATABLETALENTPOINTIDS_D__14_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
