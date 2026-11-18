#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace MoleMole { class UserLocalDataItem_OverrideMobileButtonPanel; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_ADD_1_OFFSET UNITYSDK_OFFSET(0x18C3C440)
#define MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_ADD_OFFSET UNITYSDK_OFFSET(0x18C3BCB0)
#define MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C3BDE0)
#define MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x18C3C570)
#define MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_CONTAINS_OFFSET UNITYSDK_OFFSET(0x18C3BEF0)
#define MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_COPYTO_OFFSET UNITYSDK_OFFSET(0x18C3C020)
#define MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18C3BAB0)
#define MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x18C3C280)
#define MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x18C3C360)
#define MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18C3CED0)
#define MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x18C3D7B0)
#define MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x18C3D890)
#define MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x18C3C690)
#define MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_REMOVE_OFFSET UNITYSDK_OFFSET(0x18C3C150)
#define MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x18C3D690)
#define MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18C3BBB0)
#define MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x18C3C7B0)
#define MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP__CTOR_OFFSET UNITYSDK_OFFSET(0x18C3BAA0)

namespace MoleMole
{
	inline static constexpr unsigned int UserLocalDataItem_AEPLMAFJBEP_TypeDefinitionIndex = 89799;

	class UserLocalDataItem_AEPLMAFJBEP : public ::System::Object
	{
	public:
		::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Object*>* GMJMBJCLJKB; // 0x10

		::System::Void _ctor(::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Object*>* PPLGJBFLLKO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP__CTOR_OFFSET))(this, PPLGJBFLLKO);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Add(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*> IPMMCGDMODG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_ADD_OFFSET))(this, IPMMCGDMODG);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*> IPMMCGDMODG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_CONTAINS_OFFSET))(this, IPMMCGDMODG);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>* GMHJGPODKLM, ::System::Int32 HOJDLOHINNG)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_COPYTO_OFFSET))(this, GMHJGPODKLM, HOJDLOHINNG);
		}

		::System::Boolean Remove(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*> IPMMCGDMODG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_REMOVE_OFFSET))(this, IPMMCGDMODG);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void Add_1(::System::Int32 MCOHLHMKLIP, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_ADD_1_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
		}

		::System::Boolean ContainsKey(::System::Int32 MCOHLHMKLIP)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_CONTAINSKEY_OFFSET))(this, MCOHLHMKLIP);
		}

		::System::Boolean Remove_1(::System::Int32 MCOHLHMKLIP)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_REMOVE_1_OFFSET))(this, MCOHLHMKLIP);
		}

		::System::Boolean TryGetValue(::System::Int32 MCOHLHMKLIP, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*& EGEGIMGMJHN)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*&))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_TRYGETVALUE_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
		}

		::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* get_Item(::System::Int32 MCOHLHMKLIP)
		{
			return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_GET_ITEM_OFFSET))(this, MCOHLHMKLIP);
		}

		::System::Void set_Item(::System::Int32 MCOHLHMKLIP, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_SET_ITEM_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
		}

		::System::Collections::Generic::ICollection_1<::System::Int32>* get_Keys()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::System::Object*>* get_Values()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AEPLMAFJBEP_GET_VALUES_OFFSET))(this);
		}
	};
}
