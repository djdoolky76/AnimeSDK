#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JDHJEOLLHEG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GGKCOJECILF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GGKCOJECILF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x756980)
#define GGKCOJECILF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GGKCOJECILF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GGKCOJECILF_LIHPCMFFHDL_1_OFFSET UNITYSDK_OFFSET(0x152CDA20)
#define GGKCOJECILF_LIHPCMFFHDL_OFFSET UNITYSDK_OFFSET(0x152CD980)
#define GGKCOJECILF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x756970)
#define GGKCOJECILF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x756960)
#define GGKCOJECILF___INIT_OFFSET UNITYSDK_OFFSET(0x756940)

inline static constexpr unsigned int GGKCOJECILF_TypeDefinitionIndex = 14629;

struct alignas(8) GGKCOJECILF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKCOJECILF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGKCOJECILF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKCOJECILF_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKCOJECILF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JDHJEOLLHEG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JDHJEOLLHEG&, ::System::Int32&))((::PBYTE)hIl2Cpp + GGKCOJECILF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JDHJEOLLHEG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JDHJEOLLHEG&))((::PBYTE)hIl2Cpp + GGKCOJECILF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GGKCOJECILF LIHPCMFFHDL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GGKCOJECILF EIFONLCJOPG)
	{
		return ((::GGKCOJECILF(*)(::FlatBuffers::ByteBuffer*, ::GGKCOJECILF))((::PBYTE)hIl2Cpp + GGKCOJECILF_LIHPCMFFHDL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::GGKCOJECILF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GGKCOJECILF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGKCOJECILF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GGKCOJECILF LIHPCMFFHDL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GGKCOJECILF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGKCOJECILF_LIHPCMFFHDL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
