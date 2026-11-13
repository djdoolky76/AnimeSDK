#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameTrait; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETCHOOSETRAITBYMANUALTRAITIDS_D__26_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD69E30)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETCHOOSETRAITBYMANUALTRAITIDS_D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CD6E9E0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETCHOOSETRAITBYMANUALTRAITIDS_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CD6EDB0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETCHOOSETRAITBYMANUALTRAITIDS_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CD6ED20)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETCHOOSETRAITBYMANUALTRAITIDS_D__26_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CD6EE30)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETCHOOSETRAITBYMANUALTRAITIDS_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CD6ED80)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETCHOOSETRAITBYMANUALTRAITIDS_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CD6ED30)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETCHOOSETRAITBYMANUALTRAITIDS_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CD6E9B0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETCHOOSETRAITBYMANUALTRAITIDS_D__26___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1CD6E9D0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETCHOOSETRAITBYMANUALTRAITIDS_D__26___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1CD6E9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait__GetChooseTraitByManualTraitIDs_d__26_TypeDefinitionIndex = 67312;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
	class GridFightGameTrait__GetChooseTraitByManualTraitIDs_d__26 : public ::System::Object
	{
	public:
		::System::Object* __7__wrap1; // 0x10
		::System::Byte _padding0[0x10];
		::RPG::Client::GridFightGameTrait* __4__this; // 0x28
		::System::Object* __7__wrap2; // 0x30
		::System::Byte _padding1[0x10];
		::System::UInt32 roleID; // 0x48
		::System::Int32 __l__initialThreadId; // 0x4C
		::System::UInt32 __3__roleID; // 0x50
		::System::Int32 __1__state; // 0x54
		::System::UInt32 __2__current; // 0x58
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETCHOOSETRAITBYMANUALTRAITIDS_D__26_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETCHOOSETRAITBYMANUALTRAITIDS_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETCHOOSETRAITBYMANUALTRAITIDS_D__26_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETCHOOSETRAITBYMANUALTRAITIDS_D__26___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETCHOOSETRAITBYMANUALTRAITIDS_D__26___M__FINALLY2_OFFSET))(this);
		}

		::System::UInt32 System_Collections_Generic_IEnumerator_System_UInt32__get_Current()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETCHOOSETRAITBYMANUALTRAITIDS_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETCHOOSETRAITBYMANUALTRAITIDS_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETCHOOSETRAITBYMANUALTRAITIDS_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* System_Collections_Generic_IEnumerable_System_UInt32__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETCHOOSETRAITBYMANUALTRAITIDS_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETCHOOSETRAITBYMANUALTRAITIDS_D__26_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
}
