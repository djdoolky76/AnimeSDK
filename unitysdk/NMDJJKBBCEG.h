#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LJPKOOMNIDD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMDJJKBBCEG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NMDJJKBBCEG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85DDD0)
#define NMDJJKBBCEG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NMDJJKBBCEG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NMDJJKBBCEG_IBPGNKGHBNP_1_OFFSET UNITYSDK_OFFSET(0x1CCEF660)
#define NMDJJKBBCEG_IBPGNKGHBNP_OFFSET UNITYSDK_OFFSET(0x1CCEF400)
#define NMDJJKBBCEG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x85DE10)
#define NMDJJKBBCEG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85DE20)
#define NMDJJKBBCEG___INIT_OFFSET UNITYSDK_OFFSET(0x85DDB0)

inline static constexpr unsigned int NMDJJKBBCEG_TypeDefinitionIndex = 16075;

struct alignas(8) NMDJJKBBCEG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDJJKBBCEG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMDJJKBBCEG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NMDJJKBBCEG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMDJJKBBCEG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMDJJKBBCEG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDJJKBBCEG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NMDJJKBBCEG IBPGNKGHBNP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NMDJJKBBCEG EIFONLCJOPG)
	{
		return ((::NMDJJKBBCEG(*)(::FlatBuffers::ByteBuffer*, ::NMDJJKBBCEG))((::PBYTE)hIl2Cpp + NMDJJKBBCEG_IBPGNKGHBNP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LJPKOOMNIDD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LJPKOOMNIDD&))((::PBYTE)hIl2Cpp + NMDJJKBBCEG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LJPKOOMNIDD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LJPKOOMNIDD&, ::System::Int32&))((::PBYTE)hIl2Cpp + NMDJJKBBCEG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NMDJJKBBCEG IBPGNKGHBNP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMDJJKBBCEG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMDJJKBBCEG_IBPGNKGHBNP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDJJKBBCEG_PPOMNIFACOL_OFFSET))(this);
	}
};
