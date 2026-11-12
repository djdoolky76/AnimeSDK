#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNBBKAAFIBK;
namespace RPG::Client { class GridFightEquipTrack; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define PNBBKAAFIBK__GETQUICKOPEQUIPIDS_D__5_CTOR_OFFSET UNITYSDK_OFFSET(0xCC63B10)
#define PNBBKAAFIBK__GETQUICKOPEQUIPIDS_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCC64CC0)
#define PNBBKAAFIBK__GETQUICKOPEQUIPIDS_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xCC652E0)
#define PNBBKAAFIBK__GETQUICKOPEQUIPIDS_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCC65250)
#define PNBBKAAFIBK__GETQUICKOPEQUIPIDS_D__5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xCC65360)
#define PNBBKAAFIBK__GETQUICKOPEQUIPIDS_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCC652B0)
#define PNBBKAAFIBK__GETQUICKOPEQUIPIDS_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCC65260)
#define PNBBKAAFIBK__GETQUICKOPEQUIPIDS_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC64B80)
#define PNBBKAAFIBK__GETQUICKOPEQUIPIDS_D__5___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xCC64BC0)

inline static constexpr unsigned int PNBBKAAFIBK__GetQuickOpEquipIDs_d__5_TypeDefinitionIndex = 67126;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	class PNBBKAAFIBK__GetQuickOpEquipIDs_d__5 : public ::System::Object
	{
	public:
		::PNBBKAAFIBK* __4__this; // 0x10
		::RPG::Client::GridFightEquipTrack* __3__track; // 0x18
		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* __7__wrap1; // 0x20
		::RPG::Client::GridFightEquipTrack* track; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Int32 __l__initialThreadId; // 0x34
		::System::UInt32 __2__current; // 0x38
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNBBKAAFIBK__GETQUICKOPEQUIPIDS_D__5_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBBKAAFIBK__GETQUICKOPEQUIPIDS_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBBKAAFIBK__GETQUICKOPEQUIPIDS_D__5_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBBKAAFIBK__GETQUICKOPEQUIPIDS_D__5___M__FINALLY1_OFFSET))(this);
		}

		::System::UInt32 System_Collections_Generic_IEnumerator_System_UInt32__get_Current()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBBKAAFIBK__GETQUICKOPEQUIPIDS_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBBKAAFIBK__GETQUICKOPEQUIPIDS_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBBKAAFIBK__GETQUICKOPEQUIPIDS_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* System_Collections_Generic_IEnumerable_System_UInt32__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBBKAAFIBK__GETQUICKOPEQUIPIDS_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBBKAAFIBK__GETQUICKOPEQUIPIDS_D__5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
