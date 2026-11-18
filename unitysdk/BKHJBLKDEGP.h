#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DMDIJBMGPKE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BKHJBLKDEGP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BKHJBLKDEGP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ACC00)
#define BKHJBLKDEGP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BKHJBLKDEGP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BKHJBLKDEGP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7ACC40)
#define BKHJBLKDEGP_OMGAFPOADGN_1_OFFSET UNITYSDK_OFFSET(0x1775E140)
#define BKHJBLKDEGP_OMGAFPOADGN_OFFSET UNITYSDK_OFFSET(0x1775DFA0)
#define BKHJBLKDEGP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ACBF0)
#define BKHJBLKDEGP___INIT_OFFSET UNITYSDK_OFFSET(0x7ACBD0)

inline static constexpr unsigned int BKHJBLKDEGP_TypeDefinitionIndex = 17632;

struct alignas(8) BKHJBLKDEGP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHJBLKDEGP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKHJBLKDEGP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BKHJBLKDEGP OMGAFPOADGN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BKHJBLKDEGP EIFONLCJOPG)
	{
		return ((::BKHJBLKDEGP(*)(::FlatBuffers::ByteBuffer*, ::BKHJBLKDEGP))((::PBYTE)hIl2Cpp + BKHJBLKDEGP_OMGAFPOADGN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHJBLKDEGP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DMDIJBMGPKE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DMDIJBMGPKE&))((::PBYTE)hIl2Cpp + BKHJBLKDEGP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::BKHJBLKDEGP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BKHJBLKDEGP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKHJBLKDEGP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHJBLKDEGP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BKHJBLKDEGP OMGAFPOADGN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BKHJBLKDEGP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKHJBLKDEGP_OMGAFPOADGN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DMDIJBMGPKE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DMDIJBMGPKE&, ::System::Int32&))((::PBYTE)hIl2Cpp + BKHJBLKDEGP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
