#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B0CEB3B7E45864FF;
class ED009488741DB54F;
namespace System { class ArrayTypeMismatchException; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_ARRAY_BINARYSEARCH_2_OFFSET UNITYSDK_OFFSET(0x3D14F20)
#define SYSTEM_ARRAY_CANASSIGNARRAYELEMENT_OFFSET UNITYSDK_OFFSET(0x3D152F0)
#define SYSTEM_ARRAY_CLEARINTERNAL_OFFSET UNITYSDK_OFFSET(0x3D153D0)
#define SYSTEM_ARRAY_CLEAR_OFFSET UNITYSDK_OFFSET(0x3D153E0)
#define SYSTEM_ARRAY_CLONE_OFFSET UNITYSDK_OFFSET(0x3BE5550)
#define SYSTEM_ARRAY_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x2E658E0)
#define SYSTEM_ARRAY_COPYTO_OFFSET UNITYSDK_OFFSET(0x3D15570)
#define SYSTEM_ARRAY_COPY_1_OFFSET UNITYSDK_OFFSET(0x3D15670)
#define SYSTEM_ARRAY_COPY_OFFSET UNITYSDK_OFFSET(0x3D15780)
#define SYSTEM_ARRAY_CREATEARRAYTYPEMISMATCHEXCEPTION_OFFSET UNITYSDK_OFFSET(0x3D15D80)
#define SYSTEM_ARRAY_CREATEINSTANCEIMPL_OFFSET UNITYSDK_OFFSET(0x3D15DD0)
#define SYSTEM_ARRAY_CREATEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x3D15E60)
#define SYSTEM_ARRAY_CREATEINSTANCE_2_OFFSET UNITYSDK_OFFSET(0x3D15DE0)
#define SYSTEM_ARRAY_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x3D161C0)
#define SYSTEM_ARRAY_FASTCOPY_OFFSET UNITYSDK_OFFSET(0x3D16760)
#define SYSTEM_ARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x3D16770)
#define SYSTEM_ARRAY_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x3D16840)
#define SYSTEM_ARRAY_GETLOWERBOUND_OFFSET UNITYSDK_OFFSET(0x3D16850)
#define SYSTEM_ARRAY_GETMEDIAN_OFFSET UNITYSDK_OFFSET(0x3D16860)
#define SYSTEM_ARRAY_GETRANK_OFFSET UNITYSDK_OFFSET(0x3D16870)
#define SYSTEM_ARRAY_GETRAWSZARRAYDATA_OFFSET UNITYSDK_OFFSET(0x3D16880)
#define SYSTEM_ARRAY_GETUPPERBOUND_OFFSET UNITYSDK_OFFSET(0x3D168A0)
#define SYSTEM_ARRAY_GETVALUEIMPL_OFFSET UNITYSDK_OFFSET(0x3D168E0)
#define SYSTEM_ARRAY_GETVALUE_1_OFFSET UNITYSDK_OFFSET(0x3D168F0)
#define SYSTEM_ARRAY_GETVALUE_OFFSET UNITYSDK_OFFSET(0x3D16A90)
#define SYSTEM_ARRAY_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1678550)
#define SYSTEM_ARRAY_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x3D16DF0)
#define SYSTEM_ARRAY_GET_RANK_OFFSET UNITYSDK_OFFSET(0x3D16870)
#define SYSTEM_ARRAY_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1F2A920)
#define SYSTEM_ARRAY_INDEXOF_2_OFFSET UNITYSDK_OFFSET(0x3D16AA0)
#define SYSTEM_ARRAY_INTERNALARRAY__ICOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x3D16DA0)
#define SYSTEM_ARRAY_INTERNALARRAY__ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x3D16DF0)
#define SYSTEM_ARRAY_INTERNALARRAY__ICOLLECTION_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1678550)
#define SYSTEM_ARRAY_INTERNALARRAY__IREADONLYCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x3D16DF0)
#define SYSTEM_ARRAY_INTERNALARRAY__REMOVEAT_OFFSET UNITYSDK_OFFSET(0x3D16E50)
#define SYSTEM_ARRAY_REVERSE_OFFSET UNITYSDK_OFFSET(0x3D16EA0)
#define SYSTEM_ARRAY_SETVALUEIMPL_OFFSET UNITYSDK_OFFSET(0x3D17110)
#define SYSTEM_ARRAY_SETVALUE_1_OFFSET UNITYSDK_OFFSET(0x3D17130)
#define SYSTEM_ARRAY_SETVALUE_OFFSET UNITYSDK_OFFSET(0x3D17120)
#define SYSTEM_ARRAY_SORTIMPL_OFFSET UNITYSDK_OFFSET(0x3D172F0)
#define SYSTEM_ARRAY_SORT_3_OFFSET UNITYSDK_OFFSET(0x3D178F0)
#define SYSTEM_ARRAY_SORT_4_OFFSET UNITYSDK_OFFSET(0x3D174E0)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x3D16DF0)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET UNITYSDK_OFFSET(0x3D179E0)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x3D17A30)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3D17B00)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x3D17AB0)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3D17B10)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ISTRUCTURALCOMPARABLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3D17B30)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3D17D70)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3D17F60)
#define SYSTEM_ARRAY_UNSAFECREATEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x3D18150)
#define SYSTEM_ARRAY_UNSAFECREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x3D18160)
#define SYSTEM_ARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace System
{
	inline static constexpr unsigned int Array_TypeDefinitionIndex = 10906;

	class Array : public ::System::Object
	{
	public:
		static ::System::Void SortImpl(::System::Array* BF7D63604F72090F, ::System::Array* F7A3A9CBD78A50FC, ::System::Int32 B48C66E5FB2449C6, ::System::Int32 A96B867D8BBB8B00, ::B0CEB3B7E45864FF* E29EC3FF210915A2)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*, ::System::Int32, ::System::Int32, ::B0CEB3B7E45864FF*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTIMPL_OFFSET))(BF7D63604F72090F, F7A3A9CBD78A50FC, B48C66E5FB2449C6, A96B867D8BBB8B00, E29EC3FF210915A2);
		}

		::System::Void SetValue(::System::Object* E937D4885DAA1AE8, ::Il2CppArray<::System::Int32>* A4076D345D587178)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SETVALUE_OFFSET))(this, E937D4885DAA1AE8, A4076D345D587178);
		}

		::System::Int32 InternalArray__ICollection_get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_INTERNALARRAY__ICOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Void System_Collections_IList_set_Item(::System::Int32 B48C66E5FB2449C6, ::System::Object* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET))(this, B48C66E5FB2449C6, E937D4885DAA1AE8);
		}

		::System::Int32 System_Collections_IStructuralComparable_CompareTo(::System::Object* BEEE7A5A60941632, ::B0CEB3B7E45864FF* E29EC3FF210915A2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::B0CEB3B7E45864FF*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ISTRUCTURALCOMPARABLE_COMPARETO_OFFSET))(this, BEEE7A5A60941632, E29EC3FF210915A2);
		}

		static ::System::Void Reverse(::System::Array* EDF8D5B13A3EE433, ::System::Int32 B48C66E5FB2449C6, ::System::Int32 A96B867D8BBB8B00)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_REVERSE_OFFSET))(EDF8D5B13A3EE433, B48C66E5FB2449C6, A96B867D8BBB8B00);
		}

		static ::System::Array* CreateInstanceImpl(::System::Type* FED784FF9530A296, ::Il2CppArray<::System::Int32>* A2D95281201029F3, ::Il2CppArray<::System::Int32>* BB64C3C370C6282A)
		{
			return ((::System::Array*(*)(::System::Type*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CREATEINSTANCEIMPL_OFFSET))(FED784FF9530A296, A2D95281201029F3, BB64C3C370C6282A);
		}

		::System::Object* GetValue(::Il2CppArray<::System::Int32>* A4076D345D587178)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETVALUE_OFFSET))(this, A4076D345D587178);
		}

		static ::System::Int32 CombineHashCodes(::System::Int32 B7D9F0E0B4E6BBE5, ::System::Int32 B4198727A7DF2CAD)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_COMBINEHASHCODES_OFFSET))(B7D9F0E0B4E6BBE5, B4198727A7DF2CAD);
		}

		::System::Int32 GetRank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETRANK_OFFSET))(this);
		}

		::System::Void System_Collections_IList_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET))(this);
		}

		::System::Int32 get_Rank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GET_RANK_OFFSET))(this);
		}

		::System::Boolean System_Collections_IStructuralEquatable_Equals(::System::Object* BEEE7A5A60941632, ::ED009488741DB54F* E29EC3FF210915A2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::ED009488741DB54F*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_EQUALS_OFFSET))(this, BEEE7A5A60941632, E29EC3FF210915A2);
		}

		static ::System::Array* CreateInstance(::System::Type* FED784FF9530A296, ::Il2CppArray<::System::Int32>* A2D95281201029F3, ::Il2CppArray<::System::Int32>* FAE247BD8E9A4D43)
		{
			return ((::System::Array*(*)(::System::Type*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CREATEINSTANCE_OFFSET))(FED784FF9530A296, A2D95281201029F3, FAE247BD8E9A4D43);
		}

		static ::System::Void Sort_3(::System::Array* BF7D63604F72090F, ::System::Array* F7A3A9CBD78A50FC)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORT_3_OFFSET))(BF7D63604F72090F, F7A3A9CBD78A50FC);
		}

		static ::System::Void Sort_4(::System::Array* BF7D63604F72090F, ::System::Array* F7A3A9CBD78A50FC, ::System::Int32 B48C66E5FB2449C6, ::System::Int32 A96B867D8BBB8B00, ::B0CEB3B7E45864FF* E29EC3FF210915A2)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*, ::System::Int32, ::System::Int32, ::B0CEB3B7E45864FF*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORT_4_OFFSET))(BF7D63604F72090F, F7A3A9CBD78A50FC, B48C66E5FB2449C6, A96B867D8BBB8B00, E29EC3FF210915A2);
		}

		::System::Int32 System_Collections_IStructuralEquatable_GetHashCode(::ED009488741DB54F* E29EC3FF210915A2)
		{
			return ((::System::Int32(*)(::PVOID, ::ED009488741DB54F*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_GETHASHCODE_OFFSET))(this, E29EC3FF210915A2);
		}

		::System::Int32 System_Collections_IList_Add(::System::Object* E937D4885DAA1AE8)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Void ClearInternal(::System::Array* B35BBBE7E39341A2, ::System::Int32 B48C66E5FB2449C6, ::System::Int32 A70E5C58B2C7A692)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CLEARINTERNAL_OFFSET))(B35BBBE7E39341A2, B48C66E5FB2449C6, A70E5C58B2C7A692);
		}

		static ::System::Boolean FastCopy(::System::Array* AFE8F10692F5139F, ::System::Int32 EF36E2207A208B21, ::System::Array* B3E3A8495E17DE76, ::System::Int32 A0A89E9F1C9D7A00, ::System::Int32 A96B867D8BBB8B00)
		{
			return ((::System::Boolean(*)(::System::Array*, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_FASTCOPY_OFFSET))(AFE8F10692F5139F, EF36E2207A208B21, B3E3A8495E17DE76, A0A89E9F1C9D7A00, A96B867D8BBB8B00);
		}

		::System::Object* System_Collections_IList_get_Item(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		static ::System::Array* CreateInstance_1(::System::Type* FED784FF9530A296, ::Il2CppArray<::System::Int32>* A2D95281201029F3)
		{
			return ((::System::Array*(*)(::System::Type*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CREATEINSTANCE_1_OFFSET))(FED784FF9530A296, A2D95281201029F3);
		}

		::System::Int32 GetUpperBound(::System::Int32 A9795A6465DA0634)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETUPPERBOUND_OFFSET))(this, A9795A6465DA0634);
		}

		::System::Object* GetValueImpl(::System::Int32 A0C1F1E95D5F6CA9)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETVALUEIMPL_OFFSET))(this, A0C1F1E95D5F6CA9);
		}

		static ::System::Array* CreateInstance_2(::System::Type* FED784FF9530A296, ::System::Int32 A96B867D8BBB8B00)
		{
			return ((::System::Array*(*)(::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CREATEINSTANCE_2_OFFSET))(FED784FF9530A296, A96B867D8BBB8B00);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CLONE_OFFSET))(this);
		}

		static ::System::ArrayTypeMismatchException* CreateArrayTypeMismatchException()
		{
			return ((::System::ArrayTypeMismatchException*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CREATEARRAYTYPEMISMATCHEXCEPTION_OFFSET))();
		}

		::System::Void InternalArray__RemoveAt(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_INTERNALARRAY__REMOVEAT_OFFSET))(this, B48C66E5FB2449C6);
		}

		static ::System::Array* UnsafeCreateInstance(::System::Type* FED784FF9530A296, ::Il2CppArray<::System::Int32>* A2D95281201029F3)
		{
			return ((::System::Array*(*)(::System::Type*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_UNSAFECREATEINSTANCE_OFFSET))(FED784FF9530A296, A2D95281201029F3);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GET_SYNCROOT_OFFSET))(this);
		}

		static ::System::Void Copy(::System::Array* B89256E829D0EC6C, ::System::Int32 FB6C91A975661639, ::System::Array* B888DDABDD5510F2, ::System::Int32 A64651CD49C9E7D1, ::System::Int32 A96B867D8BBB8B00)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_COPY_OFFSET))(B89256E829D0EC6C, FB6C91A975661639, B888DDABDD5510F2, A64651CD49C9E7D1, A96B867D8BBB8B00);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GET_LENGTH_OFFSET))(this);
		}

		static ::System::Void Copy_1(::System::Array* B89256E829D0EC6C, ::System::Array* B888DDABDD5510F2, ::System::Int32 A96B867D8BBB8B00)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_COPY_1_OFFSET))(B89256E829D0EC6C, B888DDABDD5510F2, A96B867D8BBB8B00);
		}

		::System::Void System_Collections_IList_RemoveAt(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Int32 InternalArray__IReadOnlyCollection_get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_INTERNALARRAY__IREADONLYCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean InternalArray__ICollection_get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_INTERNALARRAY__ICOLLECTION_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Int32 GetLowerBound(::System::Int32 A9795A6465DA0634)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETLOWERBOUND_OFFSET))(this, A9795A6465DA0634);
		}

		static ::System::Void Clear(::System::Array* EDF8D5B13A3EE433, ::System::Int32 B48C66E5FB2449C6, ::System::Int32 A96B867D8BBB8B00)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CLEAR_OFFSET))(EDF8D5B13A3EE433, B48C66E5FB2449C6, A96B867D8BBB8B00);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void SetValue_1(::System::Object* E937D4885DAA1AE8, ::System::Int32 B48C66E5FB2449C6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SETVALUE_1_OFFSET))(this, E937D4885DAA1AE8, B48C66E5FB2449C6);
		}

		static ::System::Array* UnsafeCreateInstance_1(::System::Type* FED784FF9530A296, ::Il2CppArray<::System::Int32>* A2D95281201029F3, ::Il2CppArray<::System::Int32>* FAE247BD8E9A4D43)
		{
			return ((::System::Array*(*)(::System::Type*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_UNSAFECREATEINSTANCE_1_OFFSET))(FED784FF9530A296, A2D95281201029F3, FAE247BD8E9A4D43);
		}

		::System::Void CopyTo(::System::Array* EDF8D5B13A3EE433, ::System::Int32 B48C66E5FB2449C6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_COPYTO_OFFSET))(this, EDF8D5B13A3EE433, B48C66E5FB2449C6);
		}

		::System::Void SetValueImpl(::System::Object* E937D4885DAA1AE8, ::System::Int32 A0C1F1E95D5F6CA9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SETVALUEIMPL_OFFSET))(this, E937D4885DAA1AE8, A0C1F1E95D5F6CA9);
		}

		static ::System::Boolean CanAssignArrayElement(::System::Type* AFE8F10692F5139F, ::System::Type* F249A74E7BFBE1A7)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CANASSIGNARRAYELEMENT_OFFSET))(AFE8F10692F5139F, F249A74E7BFBE1A7);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY__CTOR_OFFSET))(this);
		}

		::System::Byte& GetRawSzArrayData()
		{
			return ((::System::Byte&(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETRAWSZARRAYDATA_OFFSET))(this);
		}

		::System::Int32 System_Collections_ICollection_get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Void InternalArray__ICollection_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_INTERNALARRAY__ICOLLECTION_CLEAR_OFFSET))(this);
		}

		static ::System::Int32 IndexOf_2(::System::Array* EDF8D5B13A3EE433, ::System::Object* E937D4885DAA1AE8, ::System::Int32 B11388950C465AE2, ::System::Int32 A70E5C58B2C7A692)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_INDEXOF_2_OFFSET))(EDF8D5B13A3EE433, E937D4885DAA1AE8, B11388950C465AE2, A70E5C58B2C7A692);
		}

		::System::Object* GetValue_1(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETVALUE_1_OFFSET))(this, B48C66E5FB2449C6);
		}

		static ::System::Int32 GetMedian(::System::Int32 A763C0CC5713FE30, ::System::Int32 E0D9F4DCCAF46AB0)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETMEDIAN_OFFSET))(A763C0CC5713FE30, E0D9F4DCCAF46AB0);
		}

		static ::System::Int32 BinarySearch_2(::System::Array* EDF8D5B13A3EE433, ::System::Int32 B48C66E5FB2449C6, ::System::Int32 A96B867D8BBB8B00, ::System::Object* E937D4885DAA1AE8, ::B0CEB3B7E45864FF* E29EC3FF210915A2)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Int32, ::System::Int32, ::System::Object*, ::B0CEB3B7E45864FF*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_BINARYSEARCH_2_OFFSET))(EDF8D5B13A3EE433, B48C66E5FB2449C6, A96B867D8BBB8B00, E937D4885DAA1AE8, E29EC3FF210915A2);
		}

		::System::Int32 GetLength(::System::Int32 A9795A6465DA0634)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETLENGTH_OFFSET))(this, A9795A6465DA0634);
		}
	};
}
