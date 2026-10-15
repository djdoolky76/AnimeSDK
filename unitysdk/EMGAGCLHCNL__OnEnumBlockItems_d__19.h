#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMGAGCLHCNL;
class HGDELEAHIJO;
class HKPOAGEKMAM;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define EMGAGCLHCNL__ONENUMBLOCKITEMS_D__19_CTOR_OFFSET UNITYSDK_OFFSET(0x15534EF0)
#define EMGAGCLHCNL__ONENUMBLOCKITEMS_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15536380)
#define EMGAGCLHCNL__ONENUMBLOCKITEMS_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBLOCKITEM__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15536B10)
#define EMGAGCLHCNL__ONENUMBLOCKITEMS_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBLOCKITEM__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15536AA0)
#define EMGAGCLHCNL__ONENUMBLOCKITEMS_D__19_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15536B70)
#define EMGAGCLHCNL__ONENUMBLOCKITEMS_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15536B00)
#define EMGAGCLHCNL__ONENUMBLOCKITEMS_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15536AB0)
#define EMGAGCLHCNL__ONENUMBLOCKITEMS_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15536370)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
	class EMGAGCLHCNL__OnEnumBlockItems_d__19 : public ::System::Object
	{
	public:
		::HGDELEAHIJO* __2__current; // 0x10
		::EMGAGCLHCNL* __4__this; // 0x18
		::HKPOAGEKMAM* _indexInfo_5__2; // 0x20
		::HKPOAGEKMAM* _indexStream_5__3; // 0x28
		::System::Int32 _i_5__5; // 0x30
		::System::Int32 __l__initialThreadId; // 0x34
		::System::Int32 _count_5__4; // 0x38
		::System::Int32 __1__state; // 0x3C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EMGAGCLHCNL__ONENUMBLOCKITEMS_D__19_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGAGCLHCNL__ONENUMBLOCKITEMS_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGAGCLHCNL__ONENUMBLOCKITEMS_D__19_MOVENEXT_OFFSET))(this);
		}

		::HGDELEAHIJO* System_Collections_Generic_IEnumerator_RPG_Client_IBlockItem__get_Current()
		{
			return ((::HGDELEAHIJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGAGCLHCNL__ONENUMBLOCKITEMS_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBLOCKITEM__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGAGCLHCNL__ONENUMBLOCKITEMS_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGAGCLHCNL__ONENUMBLOCKITEMS_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::HGDELEAHIJO*>* System_Collections_Generic_IEnumerable_RPG_Client_IBlockItem__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::HGDELEAHIJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGAGCLHCNL__ONENUMBLOCKITEMS_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBLOCKITEM__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGAGCLHCNL__ONENUMBLOCKITEMS_D__19_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
