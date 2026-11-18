#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CNEBBDJJKPL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MMNOLIGNIIE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MMNOLIGNIIE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AEC80)
#define MMNOLIGNIIE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MMNOLIGNIIE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MMNOLIGNIIE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AECC0)
#define MMNOLIGNIIE_OIMDJACFBKH_1_OFFSET UNITYSDK_OFFSET(0x1D0BADC0)
#define MMNOLIGNIIE_OIMDJACFBKH_OFFSET UNITYSDK_OFFSET(0x1D0BAD50)
#define MMNOLIGNIIE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AEC70)
#define MMNOLIGNIIE___INIT_OFFSET UNITYSDK_OFFSET(0x8AEC50)

inline static constexpr unsigned int MMNOLIGNIIE_TypeDefinitionIndex = 15218;

struct alignas(8) MMNOLIGNIIE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNOLIGNIIE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMNOLIGNIIE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CNEBBDJJKPL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CNEBBDJJKPL&))((::PBYTE)hIl2Cpp + MMNOLIGNIIE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNOLIGNIIE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNOLIGNIIE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MMNOLIGNIIE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMNOLIGNIIE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMNOLIGNIIE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CNEBBDJJKPL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CNEBBDJJKPL&, ::System::Int32&))((::PBYTE)hIl2Cpp + MMNOLIGNIIE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MMNOLIGNIIE OIMDJACFBKH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMNOLIGNIIE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMNOLIGNIIE_OIMDJACFBKH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::MMNOLIGNIIE OIMDJACFBKH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MMNOLIGNIIE EIFONLCJOPG)
	{
		return ((::MMNOLIGNIIE(*)(::FlatBuffers::ByteBuffer*, ::MMNOLIGNIIE))((::PBYTE)hIl2Cpp + MMNOLIGNIIE_OIMDJACFBKH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
