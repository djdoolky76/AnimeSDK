#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DPCGFCFBKOI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LMONLDFBOJA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LMONLDFBOJA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A57D0)
#define LMONLDFBOJA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LMONLDFBOJA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LMONLDFBOJA_JPLBEAOEHAD_1_OFFSET UNITYSDK_OFFSET(0x1733C770)
#define LMONLDFBOJA_JPLBEAOEHAD_OFFSET UNITYSDK_OFFSET(0x1733C700)
#define LMONLDFBOJA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A57C0)
#define LMONLDFBOJA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A5810)
#define LMONLDFBOJA___INIT_OFFSET UNITYSDK_OFFSET(0x7A57A0)

inline static constexpr unsigned int LMONLDFBOJA_TypeDefinitionIndex = 15377;

struct alignas(8) LMONLDFBOJA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMONLDFBOJA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMONLDFBOJA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DPCGFCFBKOI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DPCGFCFBKOI&))((::PBYTE)hIl2Cpp + LMONLDFBOJA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMONLDFBOJA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LMONLDFBOJA JPLBEAOEHAD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LMONLDFBOJA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMONLDFBOJA_JPLBEAOEHAD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 JGKNCPMELON, ::System::Int32 BFPCCIHCFIK, ::DPCGFCFBKOI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::DPCGFCFBKOI&, ::System::Int32&))((::PBYTE)hIl2Cpp + LMONLDFBOJA_LLGCOCLACNA_OFFSET))(this, JGKNCPMELON, BFPCCIHCFIK, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LMONLDFBOJA JPLBEAOEHAD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LMONLDFBOJA EIFONLCJOPG)
	{
		return ((::LMONLDFBOJA(*)(::FlatBuffers::ByteBuffer*, ::LMONLDFBOJA))((::PBYTE)hIl2Cpp + LMONLDFBOJA_JPLBEAOEHAD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LMONLDFBOJA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LMONLDFBOJA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMONLDFBOJA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMONLDFBOJA_PPOMNIFACOL_OFFSET))(this);
	}
};
