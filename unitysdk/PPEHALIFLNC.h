#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MIGCDDJFLNN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PPEHALIFLNC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PPEHALIFLNC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AF790)
#define PPEHALIFLNC_CGGCMMOBPJG_1_OFFSET UNITYSDK_OFFSET(0x1D0E0D70)
#define PPEHALIFLNC_CGGCMMOBPJG_OFFSET UNITYSDK_OFFSET(0x1D0C7F20)
#define PPEHALIFLNC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PPEHALIFLNC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PPEHALIFLNC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AF780)
#define PPEHALIFLNC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AF770)
#define PPEHALIFLNC___INIT_OFFSET UNITYSDK_OFFSET(0x8AF750)

inline static constexpr unsigned int PPEHALIFLNC_TypeDefinitionIndex = 11625;

struct alignas(8) PPEHALIFLNC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEHALIFLNC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPEHALIFLNC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEHALIFLNC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MIGCDDJFLNN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MIGCDDJFLNN&, ::System::Int32&))((::PBYTE)hIl2Cpp + PPEHALIFLNC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MIGCDDJFLNN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MIGCDDJFLNN&))((::PBYTE)hIl2Cpp + PPEHALIFLNC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEHALIFLNC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PPEHALIFLNC CGGCMMOBPJG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PPEHALIFLNC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPEHALIFLNC_CGGCMMOBPJG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::PPEHALIFLNC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PPEHALIFLNC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPEHALIFLNC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PPEHALIFLNC CGGCMMOBPJG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PPEHALIFLNC EIFONLCJOPG)
	{
		return ((::PPEHALIFLNC(*)(::FlatBuffers::ByteBuffer*, ::PPEHALIFLNC))((::PBYTE)hIl2Cpp + PPEHALIFLNC_CGGCMMOBPJG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
