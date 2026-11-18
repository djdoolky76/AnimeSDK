#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LJIIBLMEJCL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CBMOAMOCLJF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CBMOAMOCLJF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F1BD0)
#define CBMOAMOCLJF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CBMOAMOCLJF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CBMOAMOCLJF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F1C20)
#define CBMOAMOCLJF_MCNMBPDPDPF_1_OFFSET UNITYSDK_OFFSET(0x19F283A0)
#define CBMOAMOCLJF_MCNMBPDPDPF_OFFSET UNITYSDK_OFFSET(0x19F28330)
#define CBMOAMOCLJF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F1C10)
#define CBMOAMOCLJF___INIT_OFFSET UNITYSDK_OFFSET(0x7F1BB0)

inline static constexpr unsigned int CBMOAMOCLJF_TypeDefinitionIndex = 12507;

struct alignas(8) CBMOAMOCLJF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMOAMOCLJF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CBMOAMOCLJF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMOAMOCLJF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LJIIBLMEJCL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LJIIBLMEJCL&))((::PBYTE)hIl2Cpp + CBMOAMOCLJF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::CBMOAMOCLJF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CBMOAMOCLJF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CBMOAMOCLJF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMOAMOCLJF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CBMOAMOCLJF MCNMBPDPDPF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CBMOAMOCLJF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CBMOAMOCLJF_MCNMBPDPDPF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::CBMOAMOCLJF MCNMBPDPDPF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CBMOAMOCLJF EIFONLCJOPG)
	{
		return ((::CBMOAMOCLJF(*)(::FlatBuffers::ByteBuffer*, ::CBMOAMOCLJF))((::PBYTE)hIl2Cpp + CBMOAMOCLJF_MCNMBPDPDPF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LJIIBLMEJCL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LJIIBLMEJCL&, ::System::Int32&))((::PBYTE)hIl2Cpp + CBMOAMOCLJF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
