#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DBDCBAKJEGD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BPACOJBBGDP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BPACOJBBGDP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F99B0)
#define BPACOJBBGDP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BPACOJBBGDP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BPACOJBBGDP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F9990)
#define BPACOJBBGDP_PEKEFMGHBHC_1_OFFSET UNITYSDK_OFFSET(0x1A539320)
#define BPACOJBBGDP_PEKEFMGHBHC_OFFSET UNITYSDK_OFFSET(0x1A5392B0)
#define BPACOJBBGDP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F99A0)
#define BPACOJBBGDP___INIT_OFFSET UNITYSDK_OFFSET(0x7F9970)

inline static constexpr unsigned int BPACOJBBGDP_TypeDefinitionIndex = 13842;

struct alignas(8) BPACOJBBGDP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPACOJBBGDP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BPACOJBBGDP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DBDCBAKJEGD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DBDCBAKJEGD&, ::System::Int32&))((::PBYTE)hIl2Cpp + BPACOJBBGDP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPACOJBBGDP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPACOJBBGDP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DBDCBAKJEGD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DBDCBAKJEGD&))((::PBYTE)hIl2Cpp + BPACOJBBGDP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::BPACOJBBGDP PEKEFMGHBHC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BPACOJBBGDP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BPACOJBBGDP_PEKEFMGHBHC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::BPACOJBBGDP PEKEFMGHBHC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BPACOJBBGDP EIFONLCJOPG)
	{
		return ((::BPACOJBBGDP(*)(::FlatBuffers::ByteBuffer*, ::BPACOJBBGDP))((::PBYTE)hIl2Cpp + BPACOJBBGDP_PEKEFMGHBHC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::BPACOJBBGDP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BPACOJBBGDP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BPACOJBBGDP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
