#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace MoleMole { class UserLocalDataItem_OverrideMobileButtonPosition; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_ADD_1_OFFSET UNITYSDK_OFFSET(0x18F76E70)
#define MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_ADD_OFFSET UNITYSDK_OFFSET(0x18F766E0)
#define MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_CLEAR_OFFSET UNITYSDK_OFFSET(0x18F76810)
#define MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x18F76FA0)
#define MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_CONTAINS_OFFSET UNITYSDK_OFFSET(0x18F76920)
#define MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_COPYTO_OFFSET UNITYSDK_OFFSET(0x18F76A50)
#define MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18F764E0)
#define MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x18F76CB0)
#define MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x18F76D90)
#define MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18F77420)
#define MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x18F77820)
#define MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x18F77900)
#define MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x18F770C0)
#define MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_REMOVE_OFFSET UNITYSDK_OFFSET(0x18F76B80)
#define MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x18F77700)
#define MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18F765E0)
#define MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x18F771E0)
#define MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA__CTOR_OFFSET UNITYSDK_OFFSET(0x18F764D0)

namespace MoleMole
{
	inline static constexpr unsigned int UserLocalDataItem_AEEJOIBCMIA_TypeDefinitionIndex = 89800;

	class UserLocalDataItem_AEEJOIBCMIA : public ::System::Object
	{
	public:
		::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Object*>* GMJMBJCLJKB; // 0x10

		::System::Void _ctor(::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Object*>* PPLGJBFLLKO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA__CTOR_OFFSET))(this, PPLGJBFLLKO);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Add(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*> IPMMCGDMODG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_ADD_OFFSET))(this, IPMMCGDMODG);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*> IPMMCGDMODG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_CONTAINS_OFFSET))(this, IPMMCGDMODG);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>* GMHJGPODKLM, ::System::Int32 HOJDLOHINNG)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_COPYTO_OFFSET))(this, GMHJGPODKLM, HOJDLOHINNG);
		}

		::System::Boolean Remove(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*> IPMMCGDMODG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_REMOVE_OFFSET))(this, IPMMCGDMODG);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void Add_1(::System::Int32 MCOHLHMKLIP, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_ADD_1_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
		}

		::System::Boolean ContainsKey(::System::Int32 MCOHLHMKLIP)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_CONTAINSKEY_OFFSET))(this, MCOHLHMKLIP);
		}

		::System::Boolean Remove_1(::System::Int32 MCOHLHMKLIP)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_REMOVE_1_OFFSET))(this, MCOHLHMKLIP);
		}

		::System::Boolean TryGetValue(::System::Int32 MCOHLHMKLIP, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*& EGEGIMGMJHN)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*&))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_TRYGETVALUE_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
		}

		::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition* get_Item(::System::Int32 MCOHLHMKLIP)
		{
			return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_GET_ITEM_OFFSET))(this, MCOHLHMKLIP);
		}

		::System::Void set_Item(::System::Int32 MCOHLHMKLIP, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_SET_ITEM_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
		}

		::System::Collections::Generic::ICollection_1<::System::Int32>* get_Keys()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::System::Object*>* get_Values()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEEJOIBCMIA_GET_VALUES_OFFSET))(this);
		}
	};
}
