#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DKDKMGMJJJB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CMNHCAPJGPL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CMNHCAPJGPL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x816C00)
#define CMNHCAPJGPL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CMNHCAPJGPL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CMNHCAPJGPL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x816C40)
#define CMNHCAPJGPL_MPDJKGBEPGE_1_OFFSET UNITYSDK_OFFSET(0x1B99D350)
#define CMNHCAPJGPL_MPDJKGBEPGE_OFFSET UNITYSDK_OFFSET(0x1B99D2E0)
#define CMNHCAPJGPL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x816C50)
#define CMNHCAPJGPL___INIT_OFFSET UNITYSDK_OFFSET(0x816BE0)

inline static constexpr unsigned int CMNHCAPJGPL_TypeDefinitionIndex = 10185;

struct alignas(8) CMNHCAPJGPL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNHCAPJGPL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMNHCAPJGPL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CMNHCAPJGPL MPDJKGBEPGE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMNHCAPJGPL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMNHCAPJGPL_MPDJKGBEPGE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DKDKMGMJJJB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DKDKMGMJJJB&))((::PBYTE)hIl2Cpp + CMNHCAPJGPL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::CMNHCAPJGPL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMNHCAPJGPL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMNHCAPJGPL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DKDKMGMJJJB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DKDKMGMJJJB&, ::System::Int32&))((::PBYTE)hIl2Cpp + CMNHCAPJGPL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::CMNHCAPJGPL MPDJKGBEPGE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CMNHCAPJGPL EIFONLCJOPG)
	{
		return ((::CMNHCAPJGPL(*)(::FlatBuffers::ByteBuffer*, ::CMNHCAPJGPL))((::PBYTE)hIl2Cpp + CMNHCAPJGPL_MPDJKGBEPGE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNHCAPJGPL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNHCAPJGPL_GHKKNCCLPAN_OFFSET))(this);
	}
};
