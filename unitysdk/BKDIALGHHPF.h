#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FAHLLDKNDAL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BKDIALGHHPF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BKDIALGHHPF_BGCCJCIPEOH_1_OFFSET UNITYSDK_OFFSET(0x1A57A430)
#define BKDIALGHHPF_BGCCJCIPEOH_OFFSET UNITYSDK_OFFSET(0x1A57A3D0)
#define BKDIALGHHPF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763F50)
#define BKDIALGHHPF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BKDIALGHHPF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BKDIALGHHPF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FB400)
#define BKDIALGHHPF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BKDIALGHHPF_TypeDefinitionIndex = 9616;

struct alignas(8) BKDIALGHHPF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDIALGHHPF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKDIALGHHPF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BKDIALGHHPF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BKDIALGHHPF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKDIALGHHPF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::String* MCOHLHMKLIP, ::FAHLLDKNDAL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::FAHLLDKNDAL&, ::System::Int32&))((::PBYTE)hIl2Cpp + BKDIALGHHPF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDIALGHHPF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BKDIALGHHPF BGCCJCIPEOH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BKDIALGHHPF EIFONLCJOPG)
	{
		return ((::BKDIALGHHPF(*)(::FlatBuffers::ByteBuffer*, ::BKDIALGHHPF))((::PBYTE)hIl2Cpp + BKDIALGHHPF_BGCCJCIPEOH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::BKDIALGHHPF BGCCJCIPEOH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BKDIALGHHPF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKDIALGHHPF_BGCCJCIPEOH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FAHLLDKNDAL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FAHLLDKNDAL&))((::PBYTE)hIl2Cpp + BKDIALGHHPF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
