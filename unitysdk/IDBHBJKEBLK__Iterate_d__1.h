#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"
class IDBHBJKEBLK;
class JNBAPNPIADL;
class KMAEPFCHJIB;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define IDBHBJKEBLK__ITERATE_D__1_CTOR_OFFSET UNITYSDK_OFFSET(0x15E5B640)
#define IDBHBJKEBLK__ITERATE_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15E5B840)
#define IDBHBJKEBLK__ITERATE_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_ACTIVITYBENEFITV2CONFIGDATA__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15E5BA70)
#define IDBHBJKEBLK__ITERATE_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_ACTIVITYBENEFITV2CONFIGDATA__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15E5BA00)
#define IDBHBJKEBLK__ITERATE_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15E5BAD0)
#define IDBHBJKEBLK__ITERATE_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15E5BA60)
#define IDBHBJKEBLK__ITERATE_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15E5BA10)
#define IDBHBJKEBLK__ITERATE_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E5B810)
#define IDBHBJKEBLK__ITERATE_D__1___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x15E5B830)

inline static constexpr unsigned int IDBHBJKEBLK__Iterate_d__1_TypeDefinitionIndex = 61402;

	template <typename T>
	class IDBHBJKEBLK__Iterate_d__1 : public ::System::Object
	{
	public:
		::JNBAPNPIADL* __2__current; // 0x10
		::IDBHBJKEBLK* __4__this; // 0x18
		::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KMAEPFCHJIB*> _iter_5__2; // 0x20
		::System::Byte _padding0[0x38];
		::System::Int32 __l__initialThreadId; // 0x60
		::System::Int32 __1__state; // 0x64
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IDBHBJKEBLK__ITERATE_D__1_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBHBJKEBLK__ITERATE_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBHBJKEBLK__ITERATE_D__1_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBHBJKEBLK__ITERATE_D__1___M__FINALLY1_OFFSET))(this);
		}

		::JNBAPNPIADL* System_Collections_Generic_IEnumerator_RPG_Client_ActivityBenefitV2ConfigData__get_Current()
		{
			return ((::JNBAPNPIADL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBHBJKEBLK__ITERATE_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_ACTIVITYBENEFITV2CONFIGDATA__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBHBJKEBLK__ITERATE_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBHBJKEBLK__ITERATE_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::JNBAPNPIADL*>* System_Collections_Generic_IEnumerable_RPG_Client_ActivityBenefitV2ConfigData__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::JNBAPNPIADL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBHBJKEBLK__ITERATE_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_ACTIVITYBENEFITV2CONFIGDATA__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBHBJKEBLK__ITERATE_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
