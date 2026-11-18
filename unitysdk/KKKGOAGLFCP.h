#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KFDOHPEFCBL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKKGOAGLFCP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KKKGOAGLFCP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DFD10)
#define KKKGOAGLFCP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KKKGOAGLFCP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KKKGOAGLFCP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DFD00)
#define KKKGOAGLFCP_MLBKJOADGPG_1_OFFSET UNITYSDK_OFFSET(0x1936CC10)
#define KKKGOAGLFCP_MLBKJOADGPG_OFFSET UNITYSDK_OFFSET(0x1936CBA0)
#define KKKGOAGLFCP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DFCF0)
#define KKKGOAGLFCP___INIT_OFFSET UNITYSDK_OFFSET(0x7DFCD0)

inline static constexpr unsigned int KKKGOAGLFCP_TypeDefinitionIndex = 17578;

struct alignas(8) KKKGOAGLFCP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKGOAGLFCP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKKGOAGLFCP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KKKGOAGLFCP MLBKJOADGPG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KKKGOAGLFCP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKKGOAGLFCP_MLBKJOADGPG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KFDOHPEFCBL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KFDOHPEFCBL&))((::PBYTE)hIl2Cpp + KKKGOAGLFCP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKGOAGLFCP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KFDOHPEFCBL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KFDOHPEFCBL&, ::System::Int32&))((::PBYTE)hIl2Cpp + KKKGOAGLFCP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKGOAGLFCP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KKKGOAGLFCP MLBKJOADGPG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KKKGOAGLFCP EIFONLCJOPG)
	{
		return ((::KKKGOAGLFCP(*)(::FlatBuffers::ByteBuffer*, ::KKKGOAGLFCP))((::PBYTE)hIl2Cpp + KKKGOAGLFCP_MLBKJOADGPG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::KKKGOAGLFCP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KKKGOAGLFCP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKKGOAGLFCP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
