#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBGMOALCIEA;
class HGDELEAHIJO;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define EBGMOALCIEA__ONENUMBLOCKITEMS_D__1_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3B8CD0)
#define EBGMOALCIEA__ONENUMBLOCKITEMS_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C3B8EF0)
#define EBGMOALCIEA__ONENUMBLOCKITEMS_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBLOCKITEM__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C3B94A0)
#define EBGMOALCIEA__ONENUMBLOCKITEMS_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBLOCKITEM__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C3B9430)
#define EBGMOALCIEA__ONENUMBLOCKITEMS_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C3B9520)
#define EBGMOALCIEA__ONENUMBLOCKITEMS_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C3B9490)
#define EBGMOALCIEA__ONENUMBLOCKITEMS_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C3B9440)
#define EBGMOALCIEA__ONENUMBLOCKITEMS_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C3B8DB0)
#define EBGMOALCIEA__ONENUMBLOCKITEMS_D__1___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1C3B8DF0)

inline static constexpr unsigned int EBGMOALCIEA__OnEnumBlockItems_d__1_TypeDefinitionIndex = 60770;

	template <typename T>
	class EBGMOALCIEA__OnEnumBlockItems_d__1 : public ::System::Object
	{
	public:
		::HGDELEAHIJO* __2__current; // 0x10
		::EBGMOALCIEA* __4__this; // 0x18
		::System::Collections::Generic::IEnumerator_1<::HGDELEAHIJO*>* __7__wrap1; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Int32 __l__initialThreadId; // 0x2C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EBGMOALCIEA__ONENUMBLOCKITEMS_D__1_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGMOALCIEA__ONENUMBLOCKITEMS_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGMOALCIEA__ONENUMBLOCKITEMS_D__1_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGMOALCIEA__ONENUMBLOCKITEMS_D__1___M__FINALLY1_OFFSET))(this);
		}

		::HGDELEAHIJO* System_Collections_Generic_IEnumerator_RPG_Client_IBlockItem__get_Current()
		{
			return ((::HGDELEAHIJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGMOALCIEA__ONENUMBLOCKITEMS_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBLOCKITEM__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGMOALCIEA__ONENUMBLOCKITEMS_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGMOALCIEA__ONENUMBLOCKITEMS_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::HGDELEAHIJO*>* System_Collections_Generic_IEnumerable_RPG_Client_IBlockItem__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::HGDELEAHIJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGMOALCIEA__ONENUMBLOCKITEMS_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBLOCKITEM__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGMOALCIEA__ONENUMBLOCKITEMS_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
