#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CCAMLNFCKFO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GEJBNNNACKL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GEJBNNNACKL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80D780)
#define GEJBNNNACKL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GEJBNNNACKL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GEJBNNNACKL_JFDHJKHMDFI_1_OFFSET UNITYSDK_OFFSET(0x1B4D1640)
#define GEJBNNNACKL_JFDHJKHMDFI_OFFSET UNITYSDK_OFFSET(0x1B4D15E0)
#define GEJBNNNACKL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80D760)
#define GEJBNNNACKL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80D770)
#define GEJBNNNACKL___INIT_OFFSET UNITYSDK_OFFSET(0x80D740)

inline static constexpr unsigned int GEJBNNNACKL_TypeDefinitionIndex = 16093;

struct alignas(8) GEJBNNNACKL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJBNNNACKL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEJBNNNACKL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CCAMLNFCKFO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CCAMLNFCKFO&, ::System::Int32&))((::PBYTE)hIl2Cpp + GEJBNNNACKL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJBNNNACKL_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJBNNNACKL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CCAMLNFCKFO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CCAMLNFCKFO&))((::PBYTE)hIl2Cpp + GEJBNNNACKL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GEJBNNNACKL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GEJBNNNACKL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEJBNNNACKL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GEJBNNNACKL JFDHJKHMDFI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GEJBNNNACKL EIFONLCJOPG)
	{
		return ((::GEJBNNNACKL(*)(::FlatBuffers::ByteBuffer*, ::GEJBNNNACKL))((::PBYTE)hIl2Cpp + GEJBNNNACKL_JFDHJKHMDFI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::GEJBNNNACKL JFDHJKHMDFI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GEJBNNNACKL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEJBNNNACKL_JFDHJKHMDFI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
