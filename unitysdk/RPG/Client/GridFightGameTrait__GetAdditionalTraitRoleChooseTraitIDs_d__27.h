#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameTrait; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETADDITIONALTRAITROLECHOOSETRAITIDS_D__27_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD69EF0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETADDITIONALTRAITROLECHOOSETRAITIDS_D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CD6E040)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETADDITIONALTRAITROLECHOOSETRAITIDS_D__27_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CD6E3A0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETADDITIONALTRAITROLECHOOSETRAITIDS_D__27_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CD6E310)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETADDITIONALTRAITROLECHOOSETRAITIDS_D__27_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CD6E420)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETADDITIONALTRAITROLECHOOSETRAITIDS_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CD6E370)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETADDITIONALTRAITROLECHOOSETRAITIDS_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CD6E320)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETADDITIONALTRAITROLECHOOSETRAITIDS_D__27_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CD6E030)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait__GetAdditionalTraitRoleChooseTraitIDs_d__27_TypeDefinitionIndex = 67310;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27>
	class GridFightGameTrait__GetAdditionalTraitRoleChooseTraitIDs_d__27 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameTrait* __4__this; // 0x10
		::System::Int32 __1__state; // 0x18
		::System::UInt32 __2__current; // 0x1C
		::System::Int32 __l__initialThreadId; // 0x20
		::System::UInt32 roleID; // 0x24
		::System::UInt32 __3__roleID; // 0x28
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETADDITIONALTRAITROLECHOOSETRAITIDS_D__27_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETADDITIONALTRAITROLECHOOSETRAITIDS_D__27_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETADDITIONALTRAITROLECHOOSETRAITIDS_D__27_MOVENEXT_OFFSET))(this);
		}

		::System::UInt32 System_Collections_Generic_IEnumerator_System_UInt32__get_Current()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETADDITIONALTRAITROLECHOOSETRAITIDS_D__27_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETADDITIONALTRAITROLECHOOSETRAITIDS_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETADDITIONALTRAITROLECHOOSETRAITIDS_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* System_Collections_Generic_IEnumerable_System_UInt32__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETADDITIONALTRAITROLECHOOSETRAITIDS_D__27_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETADDITIONALTRAITROLECHOOSETRAITIDS_D__27_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
}
