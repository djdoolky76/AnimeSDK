#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Text { class StringBuilder; }

#define DOOKIBGLODI_CTOR_OFFSET UNITYSDK_OFFSET(0x3E330F0)
#define DOOKIBGLODI_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3E33240)
#define DOOKIBGLODI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E33200)
#define DOOKIBGLODI_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E33180)
#define DOOKIBGLODI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E33170)
#define DOOKIBGLODI_GET_BUBBLELAYOUTTYPE_OFFSET UNITYSDK_OFFSET(0xA330)
#define DOOKIBGLODI_GET_COMPLEXITY_OFFSET UNITYSDK_OFFSET(0x9C20)
#define DOOKIBGLODI_GET_COSTADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x9BC0)
#define DOOKIBGLODI_GET_DISHIDS_OFFSET UNITYSDK_OFFSET(0x6C9390)
#define DOOKIBGLODI_GET_DISHSETID_OFFSET UNITYSDK_OFFSET(0x7CEA10)
#define DOOKIBGLODI_GET_ORDERTYPE_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define DOOKIBGLODI_GET_POOLID_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define DOOKIBGLODI_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x95A0)
#define DOOKIBGLODI_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x191B3350)
#define DOOKIBGLODI_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x191B3300)
#define DOOKIBGLODI_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3E33150)
#define DOOKIBGLODI_SET_BUBBLELAYOUTTYPE_OFFSET UNITYSDK_OFFSET(0xA340)
#define DOOKIBGLODI_SET_COMPLEXITY_OFFSET UNITYSDK_OFFSET(0x9C30)
#define DOOKIBGLODI_SET_COSTADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x3E33130)
#define DOOKIBGLODI_SET_DISHIDS_OFFSET UNITYSDK_OFFSET(0xFDBF90)
#define DOOKIBGLODI_SET_DISHSETID_OFFSET UNITYSDK_OFFSET(0xFDBF80)
#define DOOKIBGLODI_SET_ORDERTYPE_OFFSET UNITYSDK_OFFSET(0x3D73BE0)
#define DOOKIBGLODI_SET_POOLID_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define DOOKIBGLODI_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x3DE6130)
#define DOOKIBGLODI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E33140)

inline static constexpr unsigned int DOOKIBGLODI_TypeDefinitionIndex = 79850;

	struct alignas(8) DOOKIBGLODI
	{
		::System::UInt32 _PoolID_k__BackingField; // 0x10
		::System::UInt32 _DishSetID_k__BackingField; // 0x14
		::System::UInt32 _OrderType_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _DishIDs_k__BackingField; // 0x20
		::System::UInt32 _Weight_k__BackingField; // 0x28
		::System::UInt32 _Complexity_k__BackingField; // 0x2C
		::System::UInt32 _CostAdjustment_k__BackingField; // 0x30
		::System::UInt32 _BubbleLayoutType_k__BackingField; // 0x34
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7, ::System::UInt32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DOOKIBGLODI_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::UInt32 get_PoolID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOKIBGLODI_GET_POOLID_OFFSET))(this);
		}

		::System::Void set_PoolID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOOKIBGLODI_SET_POOLID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DishSetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOKIBGLODI_GET_DISHSETID_OFFSET))(this);
		}

		::System::Void set_DishSetID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOOKIBGLODI_SET_DISHSETID_OFFSET))(this, a1);
		}

		::System::UInt32 get_OrderType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOKIBGLODI_GET_ORDERTYPE_OFFSET))(this);
		}

		::System::Void set_OrderType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOOKIBGLODI_SET_ORDERTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_DishIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOKIBGLODI_GET_DISHIDS_OFFSET))(this);
		}

		::System::Void set_DishIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DOOKIBGLODI_SET_DISHIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_Weight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOKIBGLODI_GET_WEIGHT_OFFSET))(this);
		}

		::System::Void set_Weight(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOOKIBGLODI_SET_WEIGHT_OFFSET))(this, a1);
		}

		::System::UInt32 get_Complexity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOKIBGLODI_GET_COMPLEXITY_OFFSET))(this);
		}

		::System::Void set_Complexity(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOOKIBGLODI_SET_COMPLEXITY_OFFSET))(this, a1);
		}

		::System::UInt32 get_CostAdjustment()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOKIBGLODI_GET_COSTADJUSTMENT_OFFSET))(this);
		}

		::System::Void set_CostAdjustment(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOOKIBGLODI_SET_COSTADJUSTMENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_BubbleLayoutType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOKIBGLODI_GET_BUBBLELAYOUTTYPE_OFFSET))(this);
		}

		::System::Void set_BubbleLayoutType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOOKIBGLODI_SET_BUBBLELAYOUTTYPE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOKIBGLODI_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + DOOKIBGLODI_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::DOOKIBGLODI a1, ::DOOKIBGLODI a2)
		{
			return ((::System::Boolean(*)(::DOOKIBGLODI, ::DOOKIBGLODI))((::PBYTE)hIl2Cpp + DOOKIBGLODI_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::DOOKIBGLODI a1, ::DOOKIBGLODI a2)
		{
			return ((::System::Boolean(*)(::DOOKIBGLODI, ::DOOKIBGLODI))((::PBYTE)hIl2Cpp + DOOKIBGLODI_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOKIBGLODI_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOOKIBGLODI_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::DOOKIBGLODI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DOOKIBGLODI))((::PBYTE)hIl2Cpp + DOOKIBGLODI_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Object* a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7, ::System::UInt32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Object*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DOOKIBGLODI_DECONSTRUCT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

	};
