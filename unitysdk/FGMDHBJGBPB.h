#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CPIIKNHKAHP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FGMDHBJGBPB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FGMDHBJGBPB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A79A0)
#define FGMDHBJGBPB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FGMDHBJGBPB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FGMDHBJGBPB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A79E0)
#define FGMDHBJGBPB_MEEMDBBACOO_1_OFFSET UNITYSDK_OFFSET(0x1745E380)
#define FGMDHBJGBPB_MEEMDBBACOO_OFFSET UNITYSDK_OFFSET(0x1745E2E0)
#define FGMDHBJGBPB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A7990)
#define FGMDHBJGBPB___INIT_OFFSET UNITYSDK_OFFSET(0x7A7970)

inline static constexpr unsigned int FGMDHBJGBPB_TypeDefinitionIndex = 11755;

struct alignas(8) FGMDHBJGBPB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMDHBJGBPB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGMDHBJGBPB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CPIIKNHKAHP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CPIIKNHKAHP&))((::PBYTE)hIl2Cpp + FGMDHBJGBPB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FGMDHBJGBPB MEEMDBBACOO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FGMDHBJGBPB EIFONLCJOPG)
	{
		return ((::FGMDHBJGBPB(*)(::FlatBuffers::ByteBuffer*, ::FGMDHBJGBPB))((::PBYTE)hIl2Cpp + FGMDHBJGBPB_MEEMDBBACOO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::FGMDHBJGBPB MEEMDBBACOO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FGMDHBJGBPB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGMDHBJGBPB_MEEMDBBACOO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMDHBJGBPB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMDHBJGBPB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::FGMDHBJGBPB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FGMDHBJGBPB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGMDHBJGBPB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CPIIKNHKAHP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CPIIKNHKAHP&, ::System::Int32&))((::PBYTE)hIl2Cpp + FGMDHBJGBPB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
