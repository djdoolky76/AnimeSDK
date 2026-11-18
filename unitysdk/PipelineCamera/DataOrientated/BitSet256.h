#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"

namespace System { class Object; }

#define PIPELINECAMERA_DATAORIENTATED_BITSET256_EQUALS_OFFSET UNITYSDK_OFFSET(0x9209A0)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x920B80)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_GET_ISALL_OFFSET UNITYSDK_OFFSET(0x920860)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_GET_ISNONE_OFFSET UNITYSDK_OFFSET(0x9207F0)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9208D0)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_NUMBITSET_OFFSET UNITYSDK_OFFSET(0x920C20)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1EC33330)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1EC332B0)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC333B0)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC33420)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1EC33230)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x920960)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC338F0)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256__CTOR_1_OFFSET UNITYSDK_OFFSET(0x920970)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256__CTOR_OFFSET UNITYSDK_OFFSET(0x3FD6C0)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9210A0)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x921110)

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int BitSet256_TypeDefinitionIndex = 36389;

	struct alignas(4) BitSet256
	{
		static ::PipelineCamera::DataOrientated::BitSet256* StaticGet_Full()
		{
			return (::PipelineCamera::DataOrientated::BitSet256*)Il2CppClass::FromTypeDefinitionIndex(BitSet256_TypeDefinitionIndex)->GetStaticField(0x9050);
		}
		static ::PipelineCamera::DataOrientated::BitSet256* StaticGet_Empty()
		{
			return (::PipelineCamera::DataOrientated::BitSet256*)Il2CppClass::FromTypeDefinitionIndex(BitSet256_TypeDefinitionIndex)->GetStaticField(0x9070);
		}
		// static const ::System::UInt32 Capacity = 0x100; // 0x0
		::System::UInt64 _data1; // 0x10
		::System::UInt64 _data2; // 0x18
		::System::UInt64 _data3; // 0x20
		::System::UInt64 _data4; // 0x28

		::System::Void _ctor(::System::UInt64 data1, ::System::UInt64 data2, ::System::UInt64 data3, ::System::UInt64 data4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256__CTOR_OFFSET))(this, data1, data2, data3, data4);
		}

		::System::Void _ctor_1(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::UInt32> indicesSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::UInt32>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256__CTOR_1_OFFSET))(this, indicesSet);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_GET_ISNONE_OFFSET))(this);
		}

		::System::Boolean get_IsAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_GET_ISALL_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::UInt32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::UInt32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_SET_ITEM_OFFSET))(this, index, value);
		}

		/*
		static ::PipelineCamera::DataOrientated::BitSet256 op_OnesComplement(::PipelineCamera::DataOrientated::BitSet256& a)
		{
			return ((::PipelineCamera::DataOrientated::BitSet256(*)(::PipelineCamera::DataOrientated::BitSet256&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_OP_ONESCOMPLEMENT_OFFSET))(a);
		}
		*/

		/*
		static ::PipelineCamera::DataOrientated::BitSet256 op_BitwiseOr(::PipelineCamera::DataOrientated::BitSet256& a, ::PipelineCamera::DataOrientated::BitSet256& b)
		{
			return ((::PipelineCamera::DataOrientated::BitSet256(*)(::PipelineCamera::DataOrientated::BitSet256&, ::PipelineCamera::DataOrientated::BitSet256&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_OP_BITWISEOR_OFFSET))(a, b);
		}
		*/

		/*
		static ::PipelineCamera::DataOrientated::BitSet256 op_BitwiseAnd(::PipelineCamera::DataOrientated::BitSet256& a, ::PipelineCamera::DataOrientated::BitSet256& b)
		{
			return ((::PipelineCamera::DataOrientated::BitSet256(*)(::PipelineCamera::DataOrientated::BitSet256&, ::PipelineCamera::DataOrientated::BitSet256&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_OP_BITWISEAND_OFFSET))(a, b);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::PipelineCamera::DataOrientated::BitSet256& a, ::PipelineCamera::DataOrientated::BitSet256& b)
		{
			return ((::System::Boolean(*)(::PipelineCamera::DataOrientated::BitSet256&, ::PipelineCamera::DataOrientated::BitSet256&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_OP_EQUALITY_OFFSET))(a, b);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::PipelineCamera::DataOrientated::BitSet256& a, ::PipelineCamera::DataOrientated::BitSet256& b)
		{
			return ((::System::Boolean(*)(::PipelineCamera::DataOrientated::BitSet256&, ::PipelineCamera::DataOrientated::BitSet256&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_OP_INEQUALITY_OFFSET))(a, b);
		}
		*/

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_GETHASHCODE_OFFSET))(this);
		}

		::System::UInt32 NumBitSet()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_NUMBITSET_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
