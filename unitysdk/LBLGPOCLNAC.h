#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MMFKBEKGLGH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LBLGPOCLNAC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LBLGPOCLNAC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x810270)
#define LBLGPOCLNAC_CGFELBCPKPL_1_OFFSET UNITYSDK_OFFSET(0x1B646DA0)
#define LBLGPOCLNAC_CGFELBCPKPL_OFFSET UNITYSDK_OFFSET(0x1B620840)
#define LBLGPOCLNAC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LBLGPOCLNAC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LBLGPOCLNAC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8102B0)
#define LBLGPOCLNAC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x810260)
#define LBLGPOCLNAC___INIT_OFFSET UNITYSDK_OFFSET(0x810240)

inline static constexpr unsigned int LBLGPOCLNAC_TypeDefinitionIndex = 16770;

struct alignas(8) LBLGPOCLNAC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBLGPOCLNAC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBLGPOCLNAC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBLGPOCLNAC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MMFKBEKGLGH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MMFKBEKGLGH&))((::PBYTE)hIl2Cpp + LBLGPOCLNAC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::LBLGPOCLNAC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LBLGPOCLNAC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBLGPOCLNAC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LBLGPOCLNAC CGFELBCPKPL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LBLGPOCLNAC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBLGPOCLNAC_CGFELBCPKPL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MMFKBEKGLGH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MMFKBEKGLGH&, ::System::Int32&))((::PBYTE)hIl2Cpp + LBLGPOCLNAC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LBLGPOCLNAC CGFELBCPKPL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LBLGPOCLNAC EIFONLCJOPG)
	{
		return ((::LBLGPOCLNAC(*)(::FlatBuffers::ByteBuffer*, ::LBLGPOCLNAC))((::PBYTE)hIl2Cpp + LBLGPOCLNAC_CGFELBCPKPL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBLGPOCLNAC_GHKKNCCLPAN_OFFSET))(this);
	}
};
