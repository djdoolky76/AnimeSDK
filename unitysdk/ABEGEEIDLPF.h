#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MGJNILMFCBO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ABEGEEIDLPF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ABEGEEIDLPF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763F50)
#define ABEGEEIDLPF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ABEGEEIDLPF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ABEGEEIDLPF_OLBEDJKIKLK_1_OFFSET UNITYSDK_OFFSET(0x18769640)
#define ABEGEEIDLPF_OLBEDJKIKLK_OFFSET UNITYSDK_OFFSET(0x187695F0)
#define ABEGEEIDLPF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ABEGEEIDLPF_TypeDefinitionIndex = 11522;

struct alignas(8) ABEGEEIDLPF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEGEEIDLPF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABEGEEIDLPF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ABEGEEIDLPF OLBEDJKIKLK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ABEGEEIDLPF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABEGEEIDLPF_OLBEDJKIKLK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MGJNILMFCBO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MGJNILMFCBO&))((::PBYTE)hIl2Cpp + ABEGEEIDLPF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ABEGEEIDLPF OLBEDJKIKLK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ABEGEEIDLPF EIFONLCJOPG)
	{
		return ((::ABEGEEIDLPF(*)(::FlatBuffers::ByteBuffer*, ::ABEGEEIDLPF))((::PBYTE)hIl2Cpp + ABEGEEIDLPF_OLBEDJKIKLK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEGEEIDLPF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::ABEGEEIDLPF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ABEGEEIDLPF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABEGEEIDLPF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
