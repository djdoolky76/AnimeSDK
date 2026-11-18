#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FEKDICKMGGN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DJIIHDIEBJB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DJIIHDIEBJB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C1E50)
#define DJIIHDIEBJB_BLFKCEIHMNN_1_OFFSET UNITYSDK_OFFSET(0x17F1F7A0)
#define DJIIHDIEBJB_BLFKCEIHMNN_OFFSET UNITYSDK_OFFSET(0x17F1F730)
#define DJIIHDIEBJB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DJIIHDIEBJB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DJIIHDIEBJB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C1EA0)
#define DJIIHDIEBJB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C1E90)
#define DJIIHDIEBJB___INIT_OFFSET UNITYSDK_OFFSET(0x7C1E30)

inline static constexpr unsigned int DJIIHDIEBJB_TypeDefinitionIndex = 13091;

struct alignas(8) DJIIHDIEBJB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIIHDIEBJB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJIIHDIEBJB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIIHDIEBJB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::DJIIHDIEBJB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DJIIHDIEBJB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJIIHDIEBJB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DJIIHDIEBJB BLFKCEIHMNN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DJIIHDIEBJB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJIIHDIEBJB_BLFKCEIHMNN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FEKDICKMGGN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FEKDICKMGGN&))((::PBYTE)hIl2Cpp + DJIIHDIEBJB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIIHDIEBJB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FEKDICKMGGN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FEKDICKMGGN&, ::System::Int32&))((::PBYTE)hIl2Cpp + DJIIHDIEBJB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DJIIHDIEBJB BLFKCEIHMNN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DJIIHDIEBJB EIFONLCJOPG)
	{
		return ((::DJIIHDIEBJB(*)(::FlatBuffers::ByteBuffer*, ::DJIIHDIEBJB))((::PBYTE)hIl2Cpp + DJIIHDIEBJB_BLFKCEIHMNN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
