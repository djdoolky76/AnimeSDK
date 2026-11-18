#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LHFJPOMEOJC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MHCBKOPKFEL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MHCBKOPKFEL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D9DC0)
#define MHCBKOPKFEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MHCBKOPKFEL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MHCBKOPKFEL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D9DB0)
#define MHCBKOPKFEL_MOPNNFBMDNB_1_OFFSET UNITYSDK_OFFSET(0x1910B5F0)
#define MHCBKOPKFEL_MOPNNFBMDNB_OFFSET UNITYSDK_OFFSET(0x1910B580)
#define MHCBKOPKFEL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D9DA0)
#define MHCBKOPKFEL___INIT_OFFSET UNITYSDK_OFFSET(0x7D9D80)

inline static constexpr unsigned int MHCBKOPKFEL_TypeDefinitionIndex = 13105;

struct alignas(8) MHCBKOPKFEL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCBKOPKFEL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHCBKOPKFEL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LHFJPOMEOJC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHFJPOMEOJC&))((::PBYTE)hIl2Cpp + MHCBKOPKFEL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCBKOPKFEL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LHFJPOMEOJC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHFJPOMEOJC&, ::System::Int32&))((::PBYTE)hIl2Cpp + MHCBKOPKFEL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MHCBKOPKFEL MOPNNFBMDNB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MHCBKOPKFEL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHCBKOPKFEL_MOPNNFBMDNB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::MHCBKOPKFEL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MHCBKOPKFEL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHCBKOPKFEL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCBKOPKFEL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MHCBKOPKFEL MOPNNFBMDNB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MHCBKOPKFEL EIFONLCJOPG)
	{
		return ((::MHCBKOPKFEL(*)(::FlatBuffers::ByteBuffer*, ::MHCBKOPKFEL))((::PBYTE)hIl2Cpp + MHCBKOPKFEL_MOPNNFBMDNB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
