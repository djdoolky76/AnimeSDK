#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OFDLGHDJPLH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LFLKHNKKLEG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LFLKHNKKLEG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E5280)
#define LFLKHNKKLEG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LFLKHNKKLEG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LFLKHNKKLEG_HNPPBMDNLCH_1_OFFSET UNITYSDK_OFFSET(0x19564DC0)
#define LFLKHNKKLEG_HNPPBMDNLCH_OFFSET UNITYSDK_OFFSET(0x19564D50)
#define LFLKHNKKLEG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E5260)
#define LFLKHNKKLEG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E5270)
#define LFLKHNKKLEG___INIT_OFFSET UNITYSDK_OFFSET(0x7E5240)

inline static constexpr unsigned int LFLKHNKKLEG_TypeDefinitionIndex = 9962;

struct alignas(8) LFLKHNKKLEG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLKHNKKLEG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFLKHNKKLEG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LFLKHNKKLEG HNPPBMDNLCH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LFLKHNKKLEG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFLKHNKKLEG_HNPPBMDNLCH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OFDLGHDJPLH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OFDLGHDJPLH&, ::System::Int32&))((::PBYTE)hIl2Cpp + LFLKHNKKLEG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LFLKHNKKLEG HNPPBMDNLCH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LFLKHNKKLEG EIFONLCJOPG)
	{
		return ((::LFLKHNKKLEG(*)(::FlatBuffers::ByteBuffer*, ::LFLKHNKKLEG))((::PBYTE)hIl2Cpp + LFLKHNKKLEG_HNPPBMDNLCH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLKHNKKLEG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OFDLGHDJPLH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OFDLGHDJPLH&))((::PBYTE)hIl2Cpp + LFLKHNKKLEG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLKHNKKLEG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::LFLKHNKKLEG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LFLKHNKKLEG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFLKHNKKLEG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
