#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IILCKNIGDCJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IOCNPLNMNEG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IOCNPLNMNEG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FD4D0)
#define IOCNPLNMNEG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IOCNPLNMNEG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IOCNPLNMNEG_LKLNBBGLBNN_1_OFFSET UNITYSDK_OFFSET(0x1A5BD170)
#define IOCNPLNMNEG_LKLNBBGLBNN_OFFSET UNITYSDK_OFFSET(0x1A5E4CC0)
#define IOCNPLNMNEG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FD520)
#define IOCNPLNMNEG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FD510)
#define IOCNPLNMNEG___INIT_OFFSET UNITYSDK_OFFSET(0x7FD4B0)

inline static constexpr unsigned int IOCNPLNMNEG_TypeDefinitionIndex = 16297;

struct alignas(8) IOCNPLNMNEG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCNPLNMNEG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOCNPLNMNEG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCNPLNMNEG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IOCNPLNMNEG LKLNBBGLBNN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IOCNPLNMNEG EIFONLCJOPG)
	{
		return ((::IOCNPLNMNEG(*)(::FlatBuffers::ByteBuffer*, ::IOCNPLNMNEG))((::PBYTE)hIl2Cpp + IOCNPLNMNEG_LKLNBBGLBNN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::IOCNPLNMNEG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOCNPLNMNEG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOCNPLNMNEG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCNPLNMNEG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IOCNPLNMNEG LKLNBBGLBNN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOCNPLNMNEG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOCNPLNMNEG_LKLNBBGLBNN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IILCKNIGDCJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IILCKNIGDCJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + IOCNPLNMNEG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IILCKNIGDCJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IILCKNIGDCJ&))((::PBYTE)hIl2Cpp + IOCNPLNMNEG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
