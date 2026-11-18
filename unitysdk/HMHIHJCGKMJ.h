#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JALFJJNEIJL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HMHIHJCGKMJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HMHIHJCGKMJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E39B0)
#define HMHIHJCGKMJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HMHIHJCGKMJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HMHIHJCGKMJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E39F0)
#define HMHIHJCGKMJ_PEPFMDOMEBN_1_OFFSET UNITYSDK_OFFSET(0x195368A0)
#define HMHIHJCGKMJ_PEPFMDOMEBN_OFFSET UNITYSDK_OFFSET(0x19536830)
#define HMHIHJCGKMJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E3A00)
#define HMHIHJCGKMJ___INIT_OFFSET UNITYSDK_OFFSET(0x7E3990)

inline static constexpr unsigned int HMHIHJCGKMJ_TypeDefinitionIndex = 14552;

struct alignas(8) HMHIHJCGKMJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHIHJCGKMJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMHIHJCGKMJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HMHIHJCGKMJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HMHIHJCGKMJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMHIHJCGKMJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HMHIHJCGKMJ PEPFMDOMEBN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HMHIHJCGKMJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMHIHJCGKMJ_PEPFMDOMEBN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::HMHIHJCGKMJ PEPFMDOMEBN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HMHIHJCGKMJ EIFONLCJOPG)
	{
		return ((::HMHIHJCGKMJ(*)(::FlatBuffers::ByteBuffer*, ::HMHIHJCGKMJ))((::PBYTE)hIl2Cpp + HMHIHJCGKMJ_PEPFMDOMEBN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JALFJJNEIJL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JALFJJNEIJL&, ::System::Int32&))((::PBYTE)hIl2Cpp + HMHIHJCGKMJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHIHJCGKMJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JALFJJNEIJL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JALFJJNEIJL&))((::PBYTE)hIl2Cpp + HMHIHJCGKMJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHIHJCGKMJ_PPOMNIFACOL_OFFSET))(this);
	}
};
