#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GDDLCEFBIDP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KJLEIDNDCJH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KJLEIDNDCJH_BFHFMAPABFA_1_OFFSET UNITYSDK_OFFSET(0x1A50D0F0)
#define KJLEIDNDCJH_BFHFMAPABFA_OFFSET UNITYSDK_OFFSET(0x1A50CFF0)
#define KJLEIDNDCJH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F8FD0)
#define KJLEIDNDCJH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KJLEIDNDCJH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KJLEIDNDCJH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F9020)
#define KJLEIDNDCJH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F9010)
#define KJLEIDNDCJH___INIT_OFFSET UNITYSDK_OFFSET(0x7F8FB0)

inline static constexpr unsigned int KJLEIDNDCJH_TypeDefinitionIndex = 17697;

struct alignas(8) KJLEIDNDCJH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLEIDNDCJH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJLEIDNDCJH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLEIDNDCJH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::KJLEIDNDCJH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KJLEIDNDCJH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJLEIDNDCJH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KJLEIDNDCJH BFHFMAPABFA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KJLEIDNDCJH EIFONLCJOPG)
	{
		return ((::KJLEIDNDCJH(*)(::FlatBuffers::ByteBuffer*, ::KJLEIDNDCJH))((::PBYTE)hIl2Cpp + KJLEIDNDCJH_BFHFMAPABFA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GDDLCEFBIDP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GDDLCEFBIDP&))((::PBYTE)hIl2Cpp + KJLEIDNDCJH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KJLEIDNDCJH BFHFMAPABFA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KJLEIDNDCJH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJLEIDNDCJH_BFHFMAPABFA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLEIDNDCJH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GDDLCEFBIDP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GDDLCEFBIDP&, ::System::Int32&))((::PBYTE)hIl2Cpp + KJLEIDNDCJH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
