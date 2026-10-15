#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGDELEAHIJO;
class HPLHOPDDJCM;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define HPLHOPDDJCM__ONENUMBLOCKITEMS_D__1_CTOR_OFFSET UNITYSDK_OFFSET(0x15DC56C0)
#define HPLHOPDDJCM__ONENUMBLOCKITEMS_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15DC6560)
#define HPLHOPDDJCM__ONENUMBLOCKITEMS_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBLOCKITEM__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15DC6D90)
#define HPLHOPDDJCM__ONENUMBLOCKITEMS_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBLOCKITEM__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15DC6D20)
#define HPLHOPDDJCM__ONENUMBLOCKITEMS_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15DC6E10)
#define HPLHOPDDJCM__ONENUMBLOCKITEMS_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15DC6D80)
#define HPLHOPDDJCM__ONENUMBLOCKITEMS_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15DC6D30)
#define HPLHOPDDJCM__ONENUMBLOCKITEMS_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DC6420)
#define HPLHOPDDJCM__ONENUMBLOCKITEMS_D__1___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x15DC6460)

inline static constexpr unsigned int HPLHOPDDJCM__OnEnumBlockItems_d__1_TypeDefinitionIndex = 59491;

	template <typename T>
	class HPLHOPDDJCM__OnEnumBlockItems_d__1 : public ::System::Object
	{
	public:
		::HPLHOPDDJCM* __4__this; // 0x10
		::HGDELEAHIJO* __2__current; // 0x18
		::System::Collections::Generic::IEnumerator_1<::HGDELEAHIJO*>* __7__wrap1; // 0x20
		::System::Int32 __l__initialThreadId; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HPLHOPDDJCM__ONENUMBLOCKITEMS_D__1_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM__ONENUMBLOCKITEMS_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM__ONENUMBLOCKITEMS_D__1_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM__ONENUMBLOCKITEMS_D__1___M__FINALLY1_OFFSET))(this);
		}

		::HGDELEAHIJO* System_Collections_Generic_IEnumerator_RPG_Client_IBlockItem__get_Current()
		{
			return ((::HGDELEAHIJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM__ONENUMBLOCKITEMS_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBLOCKITEM__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM__ONENUMBLOCKITEMS_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM__ONENUMBLOCKITEMS_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::HGDELEAHIJO*>* System_Collections_Generic_IEnumerable_RPG_Client_IBlockItem__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::HGDELEAHIJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM__ONENUMBLOCKITEMS_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBLOCKITEM__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM__ONENUMBLOCKITEMS_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
