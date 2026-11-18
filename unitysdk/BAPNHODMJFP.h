#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IHJENJCMDLK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BAPNHODMJFP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BAPNHODMJFP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AC610)
#define BAPNHODMJFP_FBHONPCOJOO_1_OFFSET UNITYSDK_OFFSET(0x17753850)
#define BAPNHODMJFP_FBHONPCOJOO_OFFSET UNITYSDK_OFFSET(0x17753550)
#define BAPNHODMJFP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BAPNHODMJFP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BAPNHODMJFP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7AC650)
#define BAPNHODMJFP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AC660)
#define BAPNHODMJFP___INIT_OFFSET UNITYSDK_OFFSET(0x7AC5F0)

inline static constexpr unsigned int BAPNHODMJFP_TypeDefinitionIndex = 10191;

struct alignas(8) BAPNHODMJFP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPNHODMJFP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAPNHODMJFP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BAPNHODMJFP FBHONPCOJOO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BAPNHODMJFP EIFONLCJOPG)
	{
		return ((::BAPNHODMJFP(*)(::FlatBuffers::ByteBuffer*, ::BAPNHODMJFP))((::PBYTE)hIl2Cpp + BAPNHODMJFP_FBHONPCOJOO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::BAPNHODMJFP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BAPNHODMJFP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAPNHODMJFP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IHJENJCMDLK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IHJENJCMDLK&, ::System::Int32&))((::PBYTE)hIl2Cpp + BAPNHODMJFP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IHJENJCMDLK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IHJENJCMDLK&))((::PBYTE)hIl2Cpp + BAPNHODMJFP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPNHODMJFP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPNHODMJFP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BAPNHODMJFP FBHONPCOJOO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BAPNHODMJFP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAPNHODMJFP_FBHONPCOJOO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
