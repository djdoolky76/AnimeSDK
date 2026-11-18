#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FMPGHCLGMPI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMFLNJNLNBF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AMFLNJNLNBF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F4A00)
#define AMFLNJNLNBF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AMFLNJNLNBF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AMFLNJNLNBF_GKBBIKOCDMO_1_OFFSET UNITYSDK_OFFSET(0x1A161930)
#define AMFLNJNLNBF_GKBBIKOCDMO_OFFSET UNITYSDK_OFFSET(0x1A1617F0)
#define AMFLNJNLNBF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F49F0)
#define AMFLNJNLNBF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F49E0)
#define AMFLNJNLNBF___INIT_OFFSET UNITYSDK_OFFSET(0x7F49C0)

inline static constexpr unsigned int AMFLNJNLNBF_TypeDefinitionIndex = 16701;

struct alignas(8) AMFLNJNLNBF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFLNJNLNBF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMFLNJNLNBF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AMFLNJNLNBF GKBBIKOCDMO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AMFLNJNLNBF EIFONLCJOPG)
	{
		return ((::AMFLNJNLNBF(*)(::FlatBuffers::ByteBuffer*, ::AMFLNJNLNBF))((::PBYTE)hIl2Cpp + AMFLNJNLNBF_GKBBIKOCDMO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FMPGHCLGMPI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FMPGHCLGMPI&))((::PBYTE)hIl2Cpp + AMFLNJNLNBF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::AMFLNJNLNBF GKBBIKOCDMO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMFLNJNLNBF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMFLNJNLNBF_GKBBIKOCDMO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFLNJNLNBF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FMPGHCLGMPI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FMPGHCLGMPI&, ::System::Int32&))((::PBYTE)hIl2Cpp + AMFLNJNLNBF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::AMFLNJNLNBF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMFLNJNLNBF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMFLNJNLNBF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFLNJNLNBF_GHKKNCCLPAN_OFFSET))(this);
	}
};
