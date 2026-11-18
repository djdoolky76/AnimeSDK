#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PIFJJFOBAOP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MHCHHEHAEND_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MHCHHEHAEND_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A5B20)
#define MHCHHEHAEND_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MHCHHEHAEND_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MHCHHEHAEND_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A5B00)
#define MHCHHEHAEND_PCNNLODPCOH_1_OFFSET UNITYSDK_OFFSET(0x17345360)
#define MHCHHEHAEND_PCNNLODPCOH_OFFSET UNITYSDK_OFFSET(0x173452C0)
#define MHCHHEHAEND_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A5B10)
#define MHCHHEHAEND___INIT_OFFSET UNITYSDK_OFFSET(0x7A5AE0)

inline static constexpr unsigned int MHCHHEHAEND_TypeDefinitionIndex = 14630;

struct alignas(8) MHCHHEHAEND
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCHHEHAEND_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHCHHEHAEND___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MHCHHEHAEND PCNNLODPCOH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MHCHHEHAEND EIFONLCJOPG)
	{
		return ((::MHCHHEHAEND(*)(::FlatBuffers::ByteBuffer*, ::MHCHHEHAEND))((::PBYTE)hIl2Cpp + MHCHHEHAEND_PCNNLODPCOH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::MHCHHEHAEND PCNNLODPCOH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MHCHHEHAEND(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHCHHEHAEND_PCNNLODPCOH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PIFJJFOBAOP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PIFJJFOBAOP&))((::PBYTE)hIl2Cpp + MHCHHEHAEND_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PIFJJFOBAOP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PIFJJFOBAOP&, ::System::Int32&))((::PBYTE)hIl2Cpp + MHCHHEHAEND_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCHHEHAEND_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCHHEHAEND_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MHCHHEHAEND BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MHCHHEHAEND(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHCHHEHAEND_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
