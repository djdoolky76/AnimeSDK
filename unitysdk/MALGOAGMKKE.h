#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KADNBALMBLI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MALGOAGMKKE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MALGOAGMKKE_BHGBELEJBAG_1_OFFSET UNITYSDK_OFFSET(0x18E02540)
#define MALGOAGMKKE_BHGBELEJBAG_OFFSET UNITYSDK_OFFSET(0x18E02440)
#define MALGOAGMKKE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D7860)
#define MALGOAGMKKE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MALGOAGMKKE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MALGOAGMKKE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D78A0)
#define MALGOAGMKKE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D7850)
#define MALGOAGMKKE___INIT_OFFSET UNITYSDK_OFFSET(0x7D7830)

inline static constexpr unsigned int MALGOAGMKKE_TypeDefinitionIndex = 12323;

struct alignas(8) MALGOAGMKKE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MALGOAGMKKE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MALGOAGMKKE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MALGOAGMKKE BHGBELEJBAG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MALGOAGMKKE EIFONLCJOPG)
	{
		return ((::MALGOAGMKKE(*)(::FlatBuffers::ByteBuffer*, ::MALGOAGMKKE))((::PBYTE)hIl2Cpp + MALGOAGMKKE_BHGBELEJBAG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MALGOAGMKKE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::MALGOAGMKKE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MALGOAGMKKE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MALGOAGMKKE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MALGOAGMKKE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MALGOAGMKKE BHGBELEJBAG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MALGOAGMKKE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MALGOAGMKKE_BHGBELEJBAG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KADNBALMBLI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KADNBALMBLI&))((::PBYTE)hIl2Cpp + MALGOAGMKKE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KADNBALMBLI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KADNBALMBLI&, ::System::Int32&))((::PBYTE)hIl2Cpp + MALGOAGMKKE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
