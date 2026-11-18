#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NLJPHBNPAGP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KLJLLLHFOPH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KLJLLLHFOPH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80EF10)
#define KLJLLLHFOPH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KLJLLLHFOPH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KLJLLLHFOPH_KGJCGDBJIML_1_OFFSET UNITYSDK_OFFSET(0x1B509850)
#define KLJLLLHFOPH_KGJCGDBJIML_OFFSET UNITYSDK_OFFSET(0x1B4CE230)
#define KLJLLLHFOPH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80EF60)
#define KLJLLLHFOPH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80EF50)
#define KLJLLLHFOPH___INIT_OFFSET UNITYSDK_OFFSET(0x80EEF0)

inline static constexpr unsigned int KLJLLLHFOPH_TypeDefinitionIndex = 13599;

struct alignas(8) KLJLLLHFOPH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJLLLHFOPH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLJLLLHFOPH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KLJLLLHFOPH KGJCGDBJIML(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLJLLLHFOPH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLJLLLHFOPH_KGJCGDBJIML_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NLJPHBNPAGP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NLJPHBNPAGP&))((::PBYTE)hIl2Cpp + KLJLLLHFOPH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KLJLLLHFOPH KGJCGDBJIML_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KLJLLLHFOPH EIFONLCJOPG)
	{
		return ((::KLJLLLHFOPH(*)(::FlatBuffers::ByteBuffer*, ::KLJLLLHFOPH))((::PBYTE)hIl2Cpp + KLJLLLHFOPH_KGJCGDBJIML_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::KLJLLLHFOPH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLJLLLHFOPH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLJLLLHFOPH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJLLLHFOPH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NLJPHBNPAGP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NLJPHBNPAGP&, ::System::Int32&))((::PBYTE)hIl2Cpp + KLJLLLHFOPH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJLLLHFOPH_GHKKNCCLPAN_OFFSET))(this);
	}
};
