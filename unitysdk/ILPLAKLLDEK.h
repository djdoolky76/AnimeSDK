#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EBMJLLFNJPI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ILPLAKLLDEK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ILPLAKLLDEK_BHGDNCPLMOO_1_OFFSET UNITYSDK_OFFSET(0x17C1F2E0)
#define ILPLAKLLDEK_BHGDNCPLMOO_OFFSET UNITYSDK_OFFSET(0x17C1F270)
#define ILPLAKLLDEK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7BEE90)
#define ILPLAKLLDEK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ILPLAKLLDEK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ILPLAKLLDEK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7BEE80)
#define ILPLAKLLDEK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7BEE70)
#define ILPLAKLLDEK___INIT_OFFSET UNITYSDK_OFFSET(0x7BEE50)

inline static constexpr unsigned int ILPLAKLLDEK_TypeDefinitionIndex = 13695;

struct alignas(8) ILPLAKLLDEK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILPLAKLLDEK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILPLAKLLDEK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILPLAKLLDEK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ILPLAKLLDEK BHGDNCPLMOO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ILPLAKLLDEK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILPLAKLLDEK_BHGDNCPLMOO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILPLAKLLDEK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EBMJLLFNJPI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EBMJLLFNJPI&))((::PBYTE)hIl2Cpp + ILPLAKLLDEK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EBMJLLFNJPI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EBMJLLFNJPI&, ::System::Int32&))((::PBYTE)hIl2Cpp + ILPLAKLLDEK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::ILPLAKLLDEK BHGDNCPLMOO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ILPLAKLLDEK EIFONLCJOPG)
	{
		return ((::ILPLAKLLDEK(*)(::FlatBuffers::ByteBuffer*, ::ILPLAKLLDEK))((::PBYTE)hIl2Cpp + ILPLAKLLDEK_BHGDNCPLMOO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::ILPLAKLLDEK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ILPLAKLLDEK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILPLAKLLDEK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
