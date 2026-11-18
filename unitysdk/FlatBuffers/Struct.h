#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FLATBUFFERS_STRUCT_GET_BB_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FLATBUFFERS_STRUCT_GET_BB_POS_OFFSET UNITYSDK_OFFSET(0x359320)
#define FLATBUFFERS_STRUCT_SET_BB_OFFSET UNITYSDK_OFFSET(0x388A60)
#define FLATBUFFERS_STRUCT_SET_BB_POS_OFFSET UNITYSDK_OFFSET(0x359150)
#define FLATBUFFERS_STRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x991110)

namespace FlatBuffers
{
	inline static constexpr unsigned int Struct_TypeDefinitionIndex = 6743;

	struct alignas(8) Struct
	{
		::System::Int32 _bb_pos_k__BackingField; // 0x10
		::System::Byte _padding0[0x4];
		::FlatBuffers::ByteBuffer* _bb_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int32 _i, ::FlatBuffers::ByteBuffer* _bb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLATBUFFERS_STRUCT__CTOR_OFFSET))(this, _i, _bb);
		}

		::System::Int32 get_bb_pos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_STRUCT_GET_BB_POS_OFFSET))(this);
		}

		::System::Void set_bb_pos(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_STRUCT_SET_BB_POS_OFFSET))(this, value);
		}

		::FlatBuffers::ByteBuffer* get_bb()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_STRUCT_GET_BB_OFFSET))(this);
		}

		::System::Void set_bb(::FlatBuffers::ByteBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLATBUFFERS_STRUCT_SET_BB_OFFSET))(this, value);
		}
	};
}
