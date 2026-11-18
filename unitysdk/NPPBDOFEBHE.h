#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FMDBAFAJMAO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPPBDOFEBHE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NPPBDOFEBHE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A65A0)
#define NPPBDOFEBHE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NPPBDOFEBHE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NPPBDOFEBHE_MOIPOANLCGJ_1_OFFSET UNITYSDK_OFFSET(0x1735E260)
#define NPPBDOFEBHE_MOIPOANLCGJ_OFFSET UNITYSDK_OFFSET(0x1735E1F0)
#define NPPBDOFEBHE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A65E0)
#define NPPBDOFEBHE___INIT_OFFSET UNITYSDK_OFFSET(0x7A6580)

inline static constexpr unsigned int NPPBDOFEBHE_TypeDefinitionIndex = 16391;

struct alignas(8) NPPBDOFEBHE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPBDOFEBHE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPPBDOFEBHE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NPPBDOFEBHE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NPPBDOFEBHE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPPBDOFEBHE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NPPBDOFEBHE MOIPOANLCGJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NPPBDOFEBHE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPPBDOFEBHE_MOIPOANLCGJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::NPPBDOFEBHE MOIPOANLCGJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NPPBDOFEBHE EIFONLCJOPG)
	{
		return ((::NPPBDOFEBHE(*)(::FlatBuffers::ByteBuffer*, ::NPPBDOFEBHE))((::PBYTE)hIl2Cpp + NPPBDOFEBHE_MOIPOANLCGJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPBDOFEBHE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FMDBAFAJMAO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FMDBAFAJMAO&))((::PBYTE)hIl2Cpp + NPPBDOFEBHE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPBDOFEBHE_GHKKNCCLPAN_OFFSET))(this);
	}
};
