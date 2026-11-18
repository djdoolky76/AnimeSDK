#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FDNFALFPENE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OLBHFIDAFKC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OLBHFIDAFKC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85E3A0)
#define OLBHFIDAFKC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OLBHFIDAFKC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OLBHFIDAFKC_KEJJDOAONLF_1_OFFSET UNITYSDK_OFFSET(0x1CD00FB0)
#define OLBHFIDAFKC_KEJJDOAONLF_OFFSET UNITYSDK_OFFSET(0x1CD00F10)
#define OLBHFIDAFKC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x85E3F0)
#define OLBHFIDAFKC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85E3E0)
#define OLBHFIDAFKC___INIT_OFFSET UNITYSDK_OFFSET(0x85E380)

inline static constexpr unsigned int OLBHFIDAFKC_TypeDefinitionIndex = 9491;

struct alignas(8) OLBHFIDAFKC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBHFIDAFKC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLBHFIDAFKC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBHFIDAFKC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OLBHFIDAFKC KEJJDOAONLF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OLBHFIDAFKC EIFONLCJOPG)
	{
		return ((::OLBHFIDAFKC(*)(::FlatBuffers::ByteBuffer*, ::OLBHFIDAFKC))((::PBYTE)hIl2Cpp + OLBHFIDAFKC_KEJJDOAONLF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::OLBHFIDAFKC KEJJDOAONLF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OLBHFIDAFKC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLBHFIDAFKC_KEJJDOAONLF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FDNFALFPENE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FDNFALFPENE&))((::PBYTE)hIl2Cpp + OLBHFIDAFKC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::OLBHFIDAFKC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OLBHFIDAFKC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLBHFIDAFKC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBHFIDAFKC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FDNFALFPENE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FDNFALFPENE&, ::System::Int32&))((::PBYTE)hIl2Cpp + OLBHFIDAFKC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
