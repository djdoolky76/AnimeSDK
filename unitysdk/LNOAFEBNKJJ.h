#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NMOJPIMLNJB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LNOAFEBNKJJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LNOAFEBNKJJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x819D50)
#define LNOAFEBNKJJ_BNOOKPNJBBC_1_OFFSET UNITYSDK_OFFSET(0x1BA8DD40)
#define LNOAFEBNKJJ_BNOOKPNJBBC_OFFSET UNITYSDK_OFFSET(0x1BA8DC40)
#define LNOAFEBNKJJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LNOAFEBNKJJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LNOAFEBNKJJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x819D40)
#define LNOAFEBNKJJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x819D90)
#define LNOAFEBNKJJ___INIT_OFFSET UNITYSDK_OFFSET(0x819D20)

inline static constexpr unsigned int LNOAFEBNKJJ_TypeDefinitionIndex = 9919;

struct alignas(8) LNOAFEBNKJJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOAFEBNKJJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNOAFEBNKJJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NMOJPIMLNJB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NMOJPIMLNJB&, ::System::Int32&))((::PBYTE)hIl2Cpp + LNOAFEBNKJJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LNOAFEBNKJJ BNOOKPNJBBC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LNOAFEBNKJJ EIFONLCJOPG)
	{
		return ((::LNOAFEBNKJJ(*)(::FlatBuffers::ByteBuffer*, ::LNOAFEBNKJJ))((::PBYTE)hIl2Cpp + LNOAFEBNKJJ_BNOOKPNJBBC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOAFEBNKJJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::LNOAFEBNKJJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LNOAFEBNKJJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNOAFEBNKJJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOAFEBNKJJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LNOAFEBNKJJ BNOOKPNJBBC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LNOAFEBNKJJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNOAFEBNKJJ_BNOOKPNJBBC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NMOJPIMLNJB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NMOJPIMLNJB&))((::PBYTE)hIl2Cpp + LNOAFEBNKJJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
