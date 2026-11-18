#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OMHCPLKIMAI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KJNCJDDFBOP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KJNCJDDFBOP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A8F50)
#define KJNCJDDFBOP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KJNCJDDFBOP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KJNCJDDFBOP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A8FA0)
#define KJNCJDDFBOP_NGBHPEHIBEE_1_OFFSET UNITYSDK_OFFSET(0x17499560)
#define KJNCJDDFBOP_NGBHPEHIBEE_OFFSET UNITYSDK_OFFSET(0x174994F0)
#define KJNCJDDFBOP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A8F90)
#define KJNCJDDFBOP___INIT_OFFSET UNITYSDK_OFFSET(0x7A8F30)

inline static constexpr unsigned int KJNCJDDFBOP_TypeDefinitionIndex = 15460;

struct alignas(8) KJNCJDDFBOP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJNCJDDFBOP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJNCJDDFBOP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KJNCJDDFBOP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KJNCJDDFBOP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJNCJDDFBOP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJNCJDDFBOP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KJNCJDDFBOP NGBHPEHIBEE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KJNCJDDFBOP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJNCJDDFBOP_NGBHPEHIBEE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OMHCPLKIMAI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OMHCPLKIMAI&, ::System::Int32&))((::PBYTE)hIl2Cpp + KJNCJDDFBOP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJNCJDDFBOP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KJNCJDDFBOP NGBHPEHIBEE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KJNCJDDFBOP EIFONLCJOPG)
	{
		return ((::KJNCJDDFBOP(*)(::FlatBuffers::ByteBuffer*, ::KJNCJDDFBOP))((::PBYTE)hIl2Cpp + KJNCJDDFBOP_NGBHPEHIBEE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OMHCPLKIMAI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OMHCPLKIMAI&))((::PBYTE)hIl2Cpp + KJNCJDDFBOP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
