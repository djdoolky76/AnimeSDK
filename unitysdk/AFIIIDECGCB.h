#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PJJNIIDBHIF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AFIIIDECGCB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AFIIIDECGCB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x815F50)
#define AFIIIDECGCB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AFIIIDECGCB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AFIIIDECGCB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x815F40)
#define AFIIIDECGCB_PGJELOFPNAD_1_OFFSET UNITYSDK_OFFSET(0x1B983770)
#define AFIIIDECGCB_PGJELOFPNAD_OFFSET UNITYSDK_OFFSET(0x1B983470)
#define AFIIIDECGCB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x815F90)
#define AFIIIDECGCB___INIT_OFFSET UNITYSDK_OFFSET(0x815F20)

inline static constexpr unsigned int AFIIIDECGCB_TypeDefinitionIndex = 15366;

struct alignas(8) AFIIIDECGCB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFIIIDECGCB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AFIIIDECGCB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AFIIIDECGCB PGJELOFPNAD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AFIIIDECGCB EIFONLCJOPG)
	{
		return ((::AFIIIDECGCB(*)(::FlatBuffers::ByteBuffer*, ::AFIIIDECGCB))((::PBYTE)hIl2Cpp + AFIIIDECGCB_PGJELOFPNAD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PJJNIIDBHIF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PJJNIIDBHIF&, ::System::Int32&))((::PBYTE)hIl2Cpp + AFIIIDECGCB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFIIIDECGCB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PJJNIIDBHIF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PJJNIIDBHIF&))((::PBYTE)hIl2Cpp + AFIIIDECGCB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::AFIIIDECGCB PGJELOFPNAD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AFIIIDECGCB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AFIIIDECGCB_PGJELOFPNAD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::AFIIIDECGCB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AFIIIDECGCB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AFIIIDECGCB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFIIIDECGCB_PPOMNIFACOL_OFFSET))(this);
	}
};
