#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OOPIPLAHJGJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGKECABDEED_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MGKECABDEED_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E5910)
#define MGKECABDEED_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MGKECABDEED_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MGKECABDEED_JIAPNADMOCB_1_OFFSET UNITYSDK_OFFSET(0x19578460)
#define MGKECABDEED_JIAPNADMOCB_OFFSET UNITYSDK_OFFSET(0x195783F0)
#define MGKECABDEED_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E5900)
#define MGKECABDEED___INIT_OFFSET UNITYSDK_OFFSET(0x7E58E0)

inline static constexpr unsigned int MGKECABDEED_TypeDefinitionIndex = 11576;

struct alignas(8) MGKECABDEED
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKECABDEED_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGKECABDEED___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKECABDEED_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::MGKECABDEED BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MGKECABDEED(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGKECABDEED_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MGKECABDEED JIAPNADMOCB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MGKECABDEED(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGKECABDEED_JIAPNADMOCB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKECABDEED_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MGKECABDEED JIAPNADMOCB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MGKECABDEED EIFONLCJOPG)
	{
		return ((::MGKECABDEED(*)(::FlatBuffers::ByteBuffer*, ::MGKECABDEED))((::PBYTE)hIl2Cpp + MGKECABDEED_JIAPNADMOCB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OOPIPLAHJGJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OOPIPLAHJGJ&))((::PBYTE)hIl2Cpp + MGKECABDEED_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
