#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BCBOPFGFAGL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GBBFDDJJHGF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GBBFDDJJHGF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FC790)
#define GBBFDDJJHGF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GBBFDDJJHGF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GBBFDDJJHGF_HCJJDOODECA_1_OFFSET UNITYSDK_OFFSET(0x1A5B6D60)
#define GBBFDDJJHGF_HCJJDOODECA_OFFSET UNITYSDK_OFFSET(0x1A5B6CF0)
#define GBBFDDJJHGF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FC7D0)
#define GBBFDDJJHGF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FC780)
#define GBBFDDJJHGF___INIT_OFFSET UNITYSDK_OFFSET(0x7FC760)

inline static constexpr unsigned int GBBFDDJJHGF_TypeDefinitionIndex = 17609;

struct alignas(8) GBBFDDJJHGF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBFDDJJHGF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBBFDDJJHGF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBFDDJJHGF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GBBFDDJJHGF HCJJDOODECA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GBBFDDJJHGF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBBFDDJJHGF_HCJJDOODECA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::GBBFDDJJHGF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GBBFDDJJHGF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBBFDDJJHGF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BCBOPFGFAGL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BCBOPFGFAGL&))((::PBYTE)hIl2Cpp + GBBFDDJJHGF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBFDDJJHGF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GBBFDDJJHGF HCJJDOODECA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GBBFDDJJHGF EIFONLCJOPG)
	{
		return ((::GBBFDDJJHGF(*)(::FlatBuffers::ByteBuffer*, ::GBBFDDJJHGF))((::PBYTE)hIl2Cpp + GBBFDDJJHGF_HCJJDOODECA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BCBOPFGFAGL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BCBOPFGFAGL&, ::System::Int32&))((::PBYTE)hIl2Cpp + GBBFDDJJHGF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
