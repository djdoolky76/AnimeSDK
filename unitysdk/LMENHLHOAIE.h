#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JECJEHKHKNJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LMENHLHOAIE_APPKCNKIFBF_1_OFFSET UNITYSDK_OFFSET(0x1BF57B00)
#define LMENHLHOAIE_APPKCNKIFBF_OFFSET UNITYSDK_OFFSET(0x1BF57A90)
#define LMENHLHOAIE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LMENHLHOAIE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81DA10)
#define LMENHLHOAIE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LMENHLHOAIE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LMENHLHOAIE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81DA00)
#define LMENHLHOAIE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81DA50)
#define LMENHLHOAIE___INIT_OFFSET UNITYSDK_OFFSET(0x81D9E0)

inline static constexpr unsigned int LMENHLHOAIE_TypeDefinitionIndex = 14892;

struct alignas(8) LMENHLHOAIE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMENHLHOAIE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMENHLHOAIE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JECJEHKHKNJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JECJEHKHKNJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + LMENHLHOAIE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LMENHLHOAIE APPKCNKIFBF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LMENHLHOAIE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMENHLHOAIE_APPKCNKIFBF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JECJEHKHKNJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JECJEHKHKNJ&))((::PBYTE)hIl2Cpp + LMENHLHOAIE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LMENHLHOAIE APPKCNKIFBF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LMENHLHOAIE EIFONLCJOPG)
	{
		return ((::LMENHLHOAIE(*)(::FlatBuffers::ByteBuffer*, ::LMENHLHOAIE))((::PBYTE)hIl2Cpp + LMENHLHOAIE_APPKCNKIFBF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LMENHLHOAIE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LMENHLHOAIE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMENHLHOAIE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMENHLHOAIE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMENHLHOAIE_GHKKNCCLPAN_OFFSET))(this);
	}
};
