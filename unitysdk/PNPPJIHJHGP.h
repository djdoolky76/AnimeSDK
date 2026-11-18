#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NCPOPLKKNFI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNPPJIHJHGP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PNPPJIHJHGP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x938600)
#define PNPPJIHJHGP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PNPPJIHJHGP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PNPPJIHJHGP_HEHAGIDMIOL_1_OFFSET UNITYSDK_OFFSET(0x1EE0B020)
#define PNPPJIHJHGP_HEHAGIDMIOL_OFFSET UNITYSDK_OFFSET(0x1EE0AFB0)
#define PNPPJIHJHGP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x9385E0)
#define PNPPJIHJHGP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x9385F0)
#define PNPPJIHJHGP___INIT_OFFSET UNITYSDK_OFFSET(0x9385C0)

inline static constexpr unsigned int PNPPJIHJHGP_TypeDefinitionIndex = 13194;

struct alignas(8) PNPPJIHJHGP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPPJIHJHGP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNPPJIHJHGP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NCPOPLKKNFI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NCPOPLKKNFI&, ::System::Int32&))((::PBYTE)hIl2Cpp + PNPPJIHJHGP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPPJIHJHGP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::PNPPJIHJHGP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNPPJIHJHGP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNPPJIHJHGP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PNPPJIHJHGP HEHAGIDMIOL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNPPJIHJHGP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNPPJIHJHGP_HEHAGIDMIOL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NCPOPLKKNFI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NCPOPLKKNFI&))((::PBYTE)hIl2Cpp + PNPPJIHJHGP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PNPPJIHJHGP HEHAGIDMIOL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PNPPJIHJHGP EIFONLCJOPG)
	{
		return ((::PNPPJIHJHGP(*)(::FlatBuffers::ByteBuffer*, ::PNPPJIHJHGP))((::PBYTE)hIl2Cpp + PNPPJIHJHGP_HEHAGIDMIOL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPPJIHJHGP_GHKKNCCLPAN_OFFSET))(this);
	}
};
