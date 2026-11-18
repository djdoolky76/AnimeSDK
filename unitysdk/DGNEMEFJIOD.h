#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PBKKKIBBBEP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DGNEMEFJIOD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DGNEMEFJIOD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C1DD0)
#define DGNEMEFJIOD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DGNEMEFJIOD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DGNEMEFJIOD_LBEBCPPDFJD_1_OFFSET UNITYSDK_OFFSET(0x17F19DD0)
#define DGNEMEFJIOD_LBEBCPPDFJD_OFFSET UNITYSDK_OFFSET(0x17F19D60)
#define DGNEMEFJIOD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C1DC0)
#define DGNEMEFJIOD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C1DB0)
#define DGNEMEFJIOD___INIT_OFFSET UNITYSDK_OFFSET(0x7C1D90)

inline static constexpr unsigned int DGNEMEFJIOD_TypeDefinitionIndex = 11692;

struct alignas(8) DGNEMEFJIOD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNEMEFJIOD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGNEMEFJIOD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DGNEMEFJIOD LBEBCPPDFJD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DGNEMEFJIOD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGNEMEFJIOD_LBEBCPPDFJD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNEMEFJIOD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PBKKKIBBBEP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PBKKKIBBBEP&, ::System::Int32&))((::PBYTE)hIl2Cpp + DGNEMEFJIOD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::DGNEMEFJIOD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DGNEMEFJIOD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGNEMEFJIOD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DGNEMEFJIOD LBEBCPPDFJD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DGNEMEFJIOD EIFONLCJOPG)
	{
		return ((::DGNEMEFJIOD(*)(::FlatBuffers::ByteBuffer*, ::DGNEMEFJIOD))((::PBYTE)hIl2Cpp + DGNEMEFJIOD_LBEBCPPDFJD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PBKKKIBBBEP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PBKKKIBBBEP&))((::PBYTE)hIl2Cpp + DGNEMEFJIOD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNEMEFJIOD_GHKKNCCLPAN_OFFSET))(this);
	}
};
