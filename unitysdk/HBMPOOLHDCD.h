#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CHGKNHBEKPE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HBMPOOLHDCD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HBMPOOLHDCD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81B830)
#define HBMPOOLHDCD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HBMPOOLHDCD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HBMPOOLHDCD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81B870)
#define HBMPOOLHDCD_PIMFNMLIELO_1_OFFSET UNITYSDK_OFFSET(0x1BAD6760)
#define HBMPOOLHDCD_PIMFNMLIELO_OFFSET UNITYSDK_OFFSET(0x1BAD6700)
#define HBMPOOLHDCD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81B820)
#define HBMPOOLHDCD___INIT_OFFSET UNITYSDK_OFFSET(0x81B800)

inline static constexpr unsigned int HBMPOOLHDCD_TypeDefinitionIndex = 11056;

struct alignas(8) HBMPOOLHDCD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMPOOLHDCD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBMPOOLHDCD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMPOOLHDCD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::HBMPOOLHDCD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HBMPOOLHDCD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBMPOOLHDCD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CHGKNHBEKPE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CHGKNHBEKPE&, ::System::Int32&))((::PBYTE)hIl2Cpp + HBMPOOLHDCD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::HBMPOOLHDCD PIMFNMLIELO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HBMPOOLHDCD EIFONLCJOPG)
	{
		return ((::HBMPOOLHDCD(*)(::FlatBuffers::ByteBuffer*, ::HBMPOOLHDCD))((::PBYTE)hIl2Cpp + HBMPOOLHDCD_PIMFNMLIELO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CHGKNHBEKPE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CHGKNHBEKPE&))((::PBYTE)hIl2Cpp + HBMPOOLHDCD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMPOOLHDCD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HBMPOOLHDCD PIMFNMLIELO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HBMPOOLHDCD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBMPOOLHDCD_PIMFNMLIELO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
