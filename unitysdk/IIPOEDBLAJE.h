#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DFELOGHMKKB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IIPOEDBLAJE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IIPOEDBLAJE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E3EA0)
#define IIPOEDBLAJE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IIPOEDBLAJE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IIPOEDBLAJE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E3E90)
#define IIPOEDBLAJE_OLHBHBLKPFH_1_OFFSET UNITYSDK_OFFSET(0x19541E70)
#define IIPOEDBLAJE_OLHBHBLKPFH_OFFSET UNITYSDK_OFFSET(0x19541E00)
#define IIPOEDBLAJE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E3E80)
#define IIPOEDBLAJE___INIT_OFFSET UNITYSDK_OFFSET(0x7E3E60)

inline static constexpr unsigned int IIPOEDBLAJE_TypeDefinitionIndex = 16360;

struct alignas(8) IIPOEDBLAJE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPOEDBLAJE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIPOEDBLAJE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IIPOEDBLAJE OLHBHBLKPFH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IIPOEDBLAJE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIPOEDBLAJE_OLHBHBLKPFH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPOEDBLAJE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DFELOGHMKKB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DFELOGHMKKB&, ::System::Int32&))((::PBYTE)hIl2Cpp + IIPOEDBLAJE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPOEDBLAJE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::IIPOEDBLAJE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IIPOEDBLAJE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIPOEDBLAJE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IIPOEDBLAJE OLHBHBLKPFH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IIPOEDBLAJE EIFONLCJOPG)
	{
		return ((::IIPOEDBLAJE(*)(::FlatBuffers::ByteBuffer*, ::IIPOEDBLAJE))((::PBYTE)hIl2Cpp + IIPOEDBLAJE_OLHBHBLKPFH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DFELOGHMKKB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DFELOGHMKKB&))((::PBYTE)hIl2Cpp + IIPOEDBLAJE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
