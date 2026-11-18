#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CKDBGOKCIDD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BBKKONBJMOH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BBKKONBJMOH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ECDD0)
#define BBKKONBJMOH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BBKKONBJMOH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BBKKONBJMOH_HEKCBMHBBCJ_1_OFFSET UNITYSDK_OFFSET(0x19BE0620)
#define BBKKONBJMOH_HEKCBMHBBCJ_OFFSET UNITYSDK_OFFSET(0x19BE05B0)
#define BBKKONBJMOH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7ECDC0)
#define BBKKONBJMOH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ECE10)
#define BBKKONBJMOH___INIT_OFFSET UNITYSDK_OFFSET(0x7ECDA0)

inline static constexpr unsigned int BBKKONBJMOH_TypeDefinitionIndex = 10203;

struct alignas(8) BBKKONBJMOH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKKONBJMOH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBKKONBJMOH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CKDBGOKCIDD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CKDBGOKCIDD&, ::System::Int32&))((::PBYTE)hIl2Cpp + BBKKONBJMOH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::BBKKONBJMOH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BBKKONBJMOH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBKKONBJMOH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKKONBJMOH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BBKKONBJMOH HEKCBMHBBCJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BBKKONBJMOH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBKKONBJMOH_HEKCBMHBBCJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::BBKKONBJMOH HEKCBMHBBCJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BBKKONBJMOH EIFONLCJOPG)
	{
		return ((::BBKKONBJMOH(*)(::FlatBuffers::ByteBuffer*, ::BBKKONBJMOH))((::PBYTE)hIl2Cpp + BBKKONBJMOH_HEKCBMHBBCJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKKONBJMOH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CKDBGOKCIDD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CKDBGOKCIDD&))((::PBYTE)hIl2Cpp + BBKKONBJMOH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
