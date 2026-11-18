#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OAPGOMPLKFB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IOCAAJJMIJG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IOCAAJJMIJG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x77A900)
#define IOCAAJJMIJG_DPLDNBFNHBJ_1_OFFSET UNITYSDK_OFFSET(0x1610E610)
#define IOCAAJJMIJG_DPLDNBFNHBJ_OFFSET UNITYSDK_OFFSET(0x1610E310)
#define IOCAAJJMIJG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IOCAAJJMIJG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IOCAAJJMIJG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x77A8E0)
#define IOCAAJJMIJG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x77A8F0)
#define IOCAAJJMIJG___INIT_OFFSET UNITYSDK_OFFSET(0x77A8C0)

inline static constexpr unsigned int IOCAAJJMIJG_TypeDefinitionIndex = 15858;

struct alignas(8) IOCAAJJMIJG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCAAJJMIJG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOCAAJJMIJG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IOCAAJJMIJG DPLDNBFNHBJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IOCAAJJMIJG EIFONLCJOPG)
	{
		return ((::IOCAAJJMIJG(*)(::FlatBuffers::ByteBuffer*, ::IOCAAJJMIJG))((::PBYTE)hIl2Cpp + IOCAAJJMIJG_DPLDNBFNHBJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OAPGOMPLKFB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OAPGOMPLKFB&, ::System::Int32&))((::PBYTE)hIl2Cpp + IOCAAJJMIJG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCAAJJMIJG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OAPGOMPLKFB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OAPGOMPLKFB&))((::PBYTE)hIl2Cpp + IOCAAJJMIJG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::IOCAAJJMIJG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOCAAJJMIJG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOCAAJJMIJG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IOCAAJJMIJG DPLDNBFNHBJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOCAAJJMIJG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOCAAJJMIJG_DPLDNBFNHBJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCAAJJMIJG_GHKKNCCLPAN_OFFSET))(this);
	}
};
