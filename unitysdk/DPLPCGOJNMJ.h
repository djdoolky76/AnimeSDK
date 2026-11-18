#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OFFLJEDAJHA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPLPCGOJNMJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DPLPCGOJNMJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E2F30)
#define DPLPCGOJNMJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DPLPCGOJNMJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DPLPCGOJNMJ_IHEKJKLJIAB_1_OFFSET UNITYSDK_OFFSET(0x19515970)
#define DPLPCGOJNMJ_IHEKJKLJIAB_OFFSET UNITYSDK_OFFSET(0x19515900)
#define DPLPCGOJNMJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E2F70)
#define DPLPCGOJNMJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E2F20)
#define DPLPCGOJNMJ___INIT_OFFSET UNITYSDK_OFFSET(0x7E2F00)

inline static constexpr unsigned int DPLPCGOJNMJ_TypeDefinitionIndex = 10357;

struct alignas(8) DPLPCGOJNMJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLPCGOJNMJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPLPCGOJNMJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OFFLJEDAJHA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OFFLJEDAJHA&))((::PBYTE)hIl2Cpp + DPLPCGOJNMJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DPLPCGOJNMJ IHEKJKLJIAB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPLPCGOJNMJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPLPCGOJNMJ_IHEKJKLJIAB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLPCGOJNMJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLPCGOJNMJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::DPLPCGOJNMJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPLPCGOJNMJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPLPCGOJNMJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OFFLJEDAJHA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OFFLJEDAJHA&, ::System::Int32&))((::PBYTE)hIl2Cpp + DPLPCGOJNMJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DPLPCGOJNMJ IHEKJKLJIAB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DPLPCGOJNMJ EIFONLCJOPG)
	{
		return ((::DPLPCGOJNMJ(*)(::FlatBuffers::ByteBuffer*, ::DPLPCGOJNMJ))((::PBYTE)hIl2Cpp + DPLPCGOJNMJ_IHEKJKLJIAB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
