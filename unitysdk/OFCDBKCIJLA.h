#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OFCDBKCIJLA_BFBCMNDAMBG_1_OFFSET UNITYSDK_OFFSET(0x1BAB2BA0)
#define OFCDBKCIJLA_BFBCMNDAMBG_OFFSET UNITYSDK_OFFSET(0x1BAB2AA0)
#define OFCDBKCIJLA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81ABA0)
#define OFCDBKCIJLA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OFCDBKCIJLA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OFCDBKCIJLA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81ABE0)
#define OFCDBKCIJLA___INIT_OFFSET UNITYSDK_OFFSET(0x81AB80)

inline static constexpr unsigned int OFCDBKCIJLA_TypeDefinitionIndex = 11384;

struct alignas(8) OFCDBKCIJLA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCDBKCIJLA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFCDBKCIJLA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OFCDBKCIJLA BFBCMNDAMBG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OFCDBKCIJLA EIFONLCJOPG)
	{
		return ((::OFCDBKCIJLA(*)(::FlatBuffers::ByteBuffer*, ::OFCDBKCIJLA))((::PBYTE)hIl2Cpp + OFCDBKCIJLA_BFBCMNDAMBG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCDBKCIJLA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::OFCDBKCIJLA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OFCDBKCIJLA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFCDBKCIJLA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCDBKCIJLA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OFCDBKCIJLA BFBCMNDAMBG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OFCDBKCIJLA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFCDBKCIJLA_BFBCMNDAMBG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
