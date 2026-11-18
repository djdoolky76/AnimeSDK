#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HOLOBILHDNO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EHFJNJIAJAG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EHFJNJIAJAG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x817540)
#define EHFJNJIAJAG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EHFJNJIAJAG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EHFJNJIAJAG_LCPEKDMDGLB_1_OFFSET UNITYSDK_OFFSET(0x1B9B68F0)
#define EHFJNJIAJAG_LCPEKDMDGLB_OFFSET UNITYSDK_OFFSET(0x1B9B6890)
#define EHFJNJIAJAG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x817580)
#define EHFJNJIAJAG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x817590)
#define EHFJNJIAJAG___INIT_OFFSET UNITYSDK_OFFSET(0x817520)

inline static constexpr unsigned int EHFJNJIAJAG_TypeDefinitionIndex = 15752;

struct alignas(8) EHFJNJIAJAG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFJNJIAJAG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHFJNJIAJAG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EHFJNJIAJAG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EHFJNJIAJAG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHFJNJIAJAG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EHFJNJIAJAG LCPEKDMDGLB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EHFJNJIAJAG EIFONLCJOPG)
	{
		return ((::EHFJNJIAJAG(*)(::FlatBuffers::ByteBuffer*, ::EHFJNJIAJAG))((::PBYTE)hIl2Cpp + EHFJNJIAJAG_LCPEKDMDGLB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::EHFJNJIAJAG LCPEKDMDGLB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EHFJNJIAJAG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHFJNJIAJAG_LCPEKDMDGLB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HOLOBILHDNO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HOLOBILHDNO&, ::System::Int32&))((::PBYTE)hIl2Cpp + EHFJNJIAJAG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFJNJIAJAG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HOLOBILHDNO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HOLOBILHDNO&))((::PBYTE)hIl2Cpp + EHFJNJIAJAG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFJNJIAJAG_GHKKNCCLPAN_OFFSET))(this);
	}
};
