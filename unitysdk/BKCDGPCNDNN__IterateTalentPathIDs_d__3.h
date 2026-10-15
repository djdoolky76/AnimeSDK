#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"
class LCADLLHKAGE;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define BKCDGPCNDNN__ITERATETALENTPATHIDS_D__3_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A8150)
#define BKCDGPCNDNN__ITERATETALENTPATHIDS_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB7A8260)
#define BKCDGPCNDNN__ITERATETALENTPATHIDS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB7A8480)
#define BKCDGPCNDNN__ITERATETALENTPATHIDS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB7A83F0)
#define BKCDGPCNDNN__ITERATETALENTPATHIDS_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB7A84D0)
#define BKCDGPCNDNN__ITERATETALENTPATHIDS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB7A8450)
#define BKCDGPCNDNN__ITERATETALENTPATHIDS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB7A8400)
#define BKCDGPCNDNN__ITERATETALENTPATHIDS_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7A8230)
#define BKCDGPCNDNN__ITERATETALENTPATHIDS_D__3___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xB7A8250)

inline static constexpr unsigned int BKCDGPCNDNN__IterateTalentPathIDs_d__3_TypeDefinitionIndex = 80151;

	template <typename T1, typename T2, typename T3>
	class BKCDGPCNDNN__IterateTalentPathIDs_d__3 : public ::System::Object
	{
	public:
		::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LCADLLHKAGE*> _iter_5__2; // 0x10
		::System::Byte _padding0[0x38];
		::System::Int32 __1__state; // 0x50
		::System::UInt32 __2__current; // 0x54
		::System::Int32 __l__initialThreadId; // 0x58
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BKCDGPCNDNN__ITERATETALENTPATHIDS_D__3_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCDGPCNDNN__ITERATETALENTPATHIDS_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCDGPCNDNN__ITERATETALENTPATHIDS_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCDGPCNDNN__ITERATETALENTPATHIDS_D__3___M__FINALLY1_OFFSET))(this);
		}

		::System::UInt32 System_Collections_Generic_IEnumerator_System_UInt32__get_Current()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCDGPCNDNN__ITERATETALENTPATHIDS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCDGPCNDNN__ITERATETALENTPATHIDS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCDGPCNDNN__ITERATETALENTPATHIDS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* System_Collections_Generic_IEnumerable_System_UInt32__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCDGPCNDNN__ITERATETALENTPATHIDS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCDGPCNDNN__ITERATETALENTPATHIDS_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
