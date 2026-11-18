#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JOGAKHBIFFM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BPFHMANMHLP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BPFHMANMHLP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x761A30)
#define BPFHMANMHLP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BPFHMANMHLP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BPFHMANMHLP_LHHMLAEHMHN_1_OFFSET UNITYSDK_OFFSET(0x157369E0)
#define BPFHMANMHLP_LHHMLAEHMHN_OFFSET UNITYSDK_OFFSET(0x15736970)
#define BPFHMANMHLP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x761A80)
#define BPFHMANMHLP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x761A70)
#define BPFHMANMHLP___INIT_OFFSET UNITYSDK_OFFSET(0x761A10)

inline static constexpr unsigned int BPFHMANMHLP_TypeDefinitionIndex = 14189;

struct alignas(8) BPFHMANMHLP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFHMANMHLP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BPFHMANMHLP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JOGAKHBIFFM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JOGAKHBIFFM&))((::PBYTE)hIl2Cpp + BPFHMANMHLP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::BPFHMANMHLP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BPFHMANMHLP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BPFHMANMHLP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BPFHMANMHLP LHHMLAEHMHN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BPFHMANMHLP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BPFHMANMHLP_LHHMLAEHMHN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFHMANMHLP_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFHMANMHLP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BPFHMANMHLP LHHMLAEHMHN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BPFHMANMHLP EIFONLCJOPG)
	{
		return ((::BPFHMANMHLP(*)(::FlatBuffers::ByteBuffer*, ::BPFHMANMHLP))((::PBYTE)hIl2Cpp + BPFHMANMHLP_LHHMLAEHMHN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JOGAKHBIFFM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JOGAKHBIFFM&, ::System::Int32&))((::PBYTE)hIl2Cpp + BPFHMANMHLP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
