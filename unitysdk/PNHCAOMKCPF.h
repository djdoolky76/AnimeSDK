#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HGOBJKFDAHJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNHCAOMKCPF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PNHCAOMKCPF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8200A0)
#define PNHCAOMKCPF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PNHCAOMKCPF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PNHCAOMKCPF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x820090)
#define PNHCAOMKCPF_MOEDHJGJBCJ_1_OFFSET UNITYSDK_OFFSET(0x1C0B4A40)
#define PNHCAOMKCPF_MOEDHJGJBCJ_OFFSET UNITYSDK_OFFSET(0x1C0B49D0)
#define PNHCAOMKCPF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8200E0)
#define PNHCAOMKCPF___INIT_OFFSET UNITYSDK_OFFSET(0x820070)

inline static constexpr unsigned int PNHCAOMKCPF_TypeDefinitionIndex = 12706;

struct alignas(8) PNHCAOMKCPF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHCAOMKCPF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNHCAOMKCPF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HGOBJKFDAHJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HGOBJKFDAHJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + PNHCAOMKCPF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::PNHCAOMKCPF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNHCAOMKCPF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNHCAOMKCPF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHCAOMKCPF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PNHCAOMKCPF MOEDHJGJBCJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNHCAOMKCPF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNHCAOMKCPF_MOEDHJGJBCJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HGOBJKFDAHJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HGOBJKFDAHJ&))((::PBYTE)hIl2Cpp + PNHCAOMKCPF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PNHCAOMKCPF MOEDHJGJBCJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PNHCAOMKCPF EIFONLCJOPG)
	{
		return ((::PNHCAOMKCPF(*)(::FlatBuffers::ByteBuffer*, ::PNHCAOMKCPF))((::PBYTE)hIl2Cpp + PNHCAOMKCPF_MOEDHJGJBCJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHCAOMKCPF_GHKKNCCLPAN_OFFSET))(this);
	}
};
