#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BOJPOIPHKKF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IOLAPGIPLGJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IOLAPGIPLGJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76F650)
#define IOLAPGIPLGJ_CAGJEADNNJI_1_OFFSET UNITYSDK_OFFSET(0x15A9D7B0)
#define IOLAPGIPLGJ_CAGJEADNNJI_OFFSET UNITYSDK_OFFSET(0x15A9D740)
#define IOLAPGIPLGJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IOLAPGIPLGJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IOLAPGIPLGJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76F640)
#define IOLAPGIPLGJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76F690)
#define IOLAPGIPLGJ___INIT_OFFSET UNITYSDK_OFFSET(0x76F620)

inline static constexpr unsigned int IOLAPGIPLGJ_TypeDefinitionIndex = 17569;

struct alignas(8) IOLAPGIPLGJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLAPGIPLGJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOLAPGIPLGJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BOJPOIPHKKF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BOJPOIPHKKF&, ::System::Int32&))((::PBYTE)hIl2Cpp + IOLAPGIPLGJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BOJPOIPHKKF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BOJPOIPHKKF&))((::PBYTE)hIl2Cpp + IOLAPGIPLGJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::IOLAPGIPLGJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOLAPGIPLGJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOLAPGIPLGJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IOLAPGIPLGJ CAGJEADNNJI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOLAPGIPLGJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOLAPGIPLGJ_CAGJEADNNJI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLAPGIPLGJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLAPGIPLGJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IOLAPGIPLGJ CAGJEADNNJI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IOLAPGIPLGJ EIFONLCJOPG)
	{
		return ((::IOLAPGIPLGJ(*)(::FlatBuffers::ByteBuffer*, ::IOLAPGIPLGJ))((::PBYTE)hIl2Cpp + IOLAPGIPLGJ_CAGJEADNNJI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
