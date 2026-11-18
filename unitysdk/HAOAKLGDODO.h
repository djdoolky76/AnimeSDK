#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/POMJPDHIJKO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HAOAKLGDODO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HAOAKLGDODO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B5260)
#define HAOAKLGDODO_GCBFCNFAFLD_1_OFFSET UNITYSDK_OFFSET(0x17BF5AA0)
#define HAOAKLGDODO_GCBFCNFAFLD_OFFSET UNITYSDK_OFFSET(0x17BF5A30)
#define HAOAKLGDODO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HAOAKLGDODO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HAOAKLGDODO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B52B0)
#define HAOAKLGDODO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B52A0)
#define HAOAKLGDODO___INIT_OFFSET UNITYSDK_OFFSET(0x7B5240)

inline static constexpr unsigned int HAOAKLGDODO_TypeDefinitionIndex = 16203;

struct alignas(8) HAOAKLGDODO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOAKLGDODO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAOAKLGDODO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HAOAKLGDODO GCBFCNFAFLD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HAOAKLGDODO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAOAKLGDODO_GCBFCNFAFLD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::HAOAKLGDODO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HAOAKLGDODO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAOAKLGDODO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOAKLGDODO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOAKLGDODO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HAOAKLGDODO GCBFCNFAFLD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HAOAKLGDODO EIFONLCJOPG)
	{
		return ((::HAOAKLGDODO(*)(::FlatBuffers::ByteBuffer*, ::HAOAKLGDODO))((::PBYTE)hIl2Cpp + HAOAKLGDODO_GCBFCNFAFLD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::POMJPDHIJKO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::POMJPDHIJKO&, ::System::Int32&))((::PBYTE)hIl2Cpp + HAOAKLGDODO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::POMJPDHIJKO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::POMJPDHIJKO&))((::PBYTE)hIl2Cpp + HAOAKLGDODO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
