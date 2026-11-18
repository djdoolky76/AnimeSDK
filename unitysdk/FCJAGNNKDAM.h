#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/COKLMMOBOGN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCJAGNNKDAM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FCJAGNNKDAM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D14B0)
#define FCJAGNNKDAM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FCJAGNNKDAM_GGMPIEMDOAF_1_OFFSET UNITYSDK_OFFSET(0x187B5820)
#define FCJAGNNKDAM_GGMPIEMDOAF_OFFSET UNITYSDK_OFFSET(0x187B57B0)
#define FCJAGNNKDAM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FCJAGNNKDAM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D14A0)
#define FCJAGNNKDAM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D14F0)
#define FCJAGNNKDAM___INIT_OFFSET UNITYSDK_OFFSET(0x7D1480)

inline static constexpr unsigned int FCJAGNNKDAM_TypeDefinitionIndex = 15349;

struct alignas(8) FCJAGNNKDAM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCJAGNNKDAM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCJAGNNKDAM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FCJAGNNKDAM GGMPIEMDOAF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCJAGNNKDAM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCJAGNNKDAM_GGMPIEMDOAF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::COKLMMOBOGN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::COKLMMOBOGN&, ::System::Int32&))((::PBYTE)hIl2Cpp + FCJAGNNKDAM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::FCJAGNNKDAM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCJAGNNKDAM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCJAGNNKDAM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCJAGNNKDAM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCJAGNNKDAM_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::COKLMMOBOGN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::COKLMMOBOGN&))((::PBYTE)hIl2Cpp + FCJAGNNKDAM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FCJAGNNKDAM GGMPIEMDOAF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FCJAGNNKDAM EIFONLCJOPG)
	{
		return ((::FCJAGNNKDAM(*)(::FlatBuffers::ByteBuffer*, ::FCJAGNNKDAM))((::PBYTE)hIl2Cpp + FCJAGNNKDAM_GGMPIEMDOAF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
