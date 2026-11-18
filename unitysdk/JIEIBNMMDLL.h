#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AAOKJDEOIFC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JIEIBNMMDLL_AMFMGEEBMIM_1_OFFSET UNITYSDK_OFFSET(0x1954A410)
#define JIEIBNMMDLL_AMFMGEEBMIM_OFFSET UNITYSDK_OFFSET(0x1954A3A0)
#define JIEIBNMMDLL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JIEIBNMMDLL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E4280)
#define JIEIBNMMDLL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JIEIBNMMDLL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JIEIBNMMDLL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E42D0)
#define JIEIBNMMDLL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E42C0)
#define JIEIBNMMDLL___INIT_OFFSET UNITYSDK_OFFSET(0x7E4260)

inline static constexpr unsigned int JIEIBNMMDLL_TypeDefinitionIndex = 17264;

struct alignas(8) JIEIBNMMDLL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEIBNMMDLL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIEIBNMMDLL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AAOKJDEOIFC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AAOKJDEOIFC&))((::PBYTE)hIl2Cpp + JIEIBNMMDLL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JIEIBNMMDLL AMFMGEEBMIM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JIEIBNMMDLL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIEIBNMMDLL_AMFMGEEBMIM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::JIEIBNMMDLL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JIEIBNMMDLL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIEIBNMMDLL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JIEIBNMMDLL AMFMGEEBMIM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JIEIBNMMDLL EIFONLCJOPG)
	{
		return ((::JIEIBNMMDLL(*)(::FlatBuffers::ByteBuffer*, ::JIEIBNMMDLL))((::PBYTE)hIl2Cpp + JIEIBNMMDLL_AMFMGEEBMIM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEIBNMMDLL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEIBNMMDLL_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AAOKJDEOIFC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AAOKJDEOIFC&, ::System::Int32&))((::PBYTE)hIl2Cpp + JIEIBNMMDLL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
