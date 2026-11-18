#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BDBPPMMILJB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GKKBHODMNIC_ALNACJDGDPH_1_OFFSET UNITYSDK_OFFSET(0x1A5C28F0)
#define GKKBHODMNIC_ALNACJDGDPH_OFFSET UNITYSDK_OFFSET(0x1A5C2880)
#define GKKBHODMNIC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GKKBHODMNIC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FCAB0)
#define GKKBHODMNIC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GKKBHODMNIC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GKKBHODMNIC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FCB00)
#define GKKBHODMNIC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FCAF0)
#define GKKBHODMNIC___INIT_OFFSET UNITYSDK_OFFSET(0x7FCA90)

inline static constexpr unsigned int GKKBHODMNIC_TypeDefinitionIndex = 16442;

struct alignas(8) GKKBHODMNIC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKKBHODMNIC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKKBHODMNIC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BDBPPMMILJB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BDBPPMMILJB&))((::PBYTE)hIl2Cpp + GKKBHODMNIC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GKKBHODMNIC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GKKBHODMNIC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKKBHODMNIC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKKBHODMNIC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GKKBHODMNIC ALNACJDGDPH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GKKBHODMNIC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKKBHODMNIC_ALNACJDGDPH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKKBHODMNIC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BDBPPMMILJB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BDBPPMMILJB&, ::System::Int32&))((::PBYTE)hIl2Cpp + GKKBHODMNIC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GKKBHODMNIC ALNACJDGDPH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GKKBHODMNIC EIFONLCJOPG)
	{
		return ((::GKKBHODMNIC(*)(::FlatBuffers::ByteBuffer*, ::GKKBHODMNIC))((::PBYTE)hIl2Cpp + GKKBHODMNIC_ALNACJDGDPH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
