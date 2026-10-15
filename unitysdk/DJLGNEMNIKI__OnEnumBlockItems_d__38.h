#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJLGNEMNIKI;
class HGDELEAHIJO;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define DJLGNEMNIKI__ONENUMBLOCKITEMS_D__38_CTOR_OFFSET UNITYSDK_OFFSET(0xF23B570)
#define DJLGNEMNIKI__ONENUMBLOCKITEMS_D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF23C470)
#define DJLGNEMNIKI__ONENUMBLOCKITEMS_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBLOCKITEM__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF23CA30)
#define DJLGNEMNIKI__ONENUMBLOCKITEMS_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBLOCKITEM__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF23C9C0)
#define DJLGNEMNIKI__ONENUMBLOCKITEMS_D__38_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF23CA90)
#define DJLGNEMNIKI__ONENUMBLOCKITEMS_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF23CA20)
#define DJLGNEMNIKI__ONENUMBLOCKITEMS_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xF23C9D0)
#define DJLGNEMNIKI__ONENUMBLOCKITEMS_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF23C330)
#define DJLGNEMNIKI__ONENUMBLOCKITEMS_D__38___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xF23C370)

inline static constexpr unsigned int DJLGNEMNIKI__OnEnumBlockItems_d__38_TypeDefinitionIndex = 59466;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38>
	class DJLGNEMNIKI__OnEnumBlockItems_d__38 : public ::System::Object
	{
	public:
		::DJLGNEMNIKI* __4__this; // 0x10
		::System::Collections::Generic::IEnumerator_1<::HGDELEAHIJO*>* __7__wrap1; // 0x18
		::HGDELEAHIJO* __2__current; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Int32 __l__initialThreadId; // 0x2C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DJLGNEMNIKI__ONENUMBLOCKITEMS_D__38_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI__ONENUMBLOCKITEMS_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI__ONENUMBLOCKITEMS_D__38_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI__ONENUMBLOCKITEMS_D__38___M__FINALLY1_OFFSET))(this);
		}

		::HGDELEAHIJO* System_Collections_Generic_IEnumerator_RPG_Client_IBlockItem__get_Current()
		{
			return ((::HGDELEAHIJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI__ONENUMBLOCKITEMS_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBLOCKITEM__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI__ONENUMBLOCKITEMS_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI__ONENUMBLOCKITEMS_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::HGDELEAHIJO*>* System_Collections_Generic_IEnumerable_RPG_Client_IBlockItem__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::HGDELEAHIJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI__ONENUMBLOCKITEMS_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBLOCKITEM__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI__ONENUMBLOCKITEMS_D__38_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
