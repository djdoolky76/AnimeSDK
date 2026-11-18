#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PFFFIEGEDPE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBADOPNJEPL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IBADOPNJEPL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80DFC0)
#define IBADOPNJEPL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IBADOPNJEPL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IBADOPNJEPL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80DFB0)
#define IBADOPNJEPL_MJMKMHEMLAO_1_OFFSET UNITYSDK_OFFSET(0x1B4E8E20)
#define IBADOPNJEPL_MJMKMHEMLAO_OFFSET UNITYSDK_OFFSET(0x1B4E8D80)
#define IBADOPNJEPL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80E000)
#define IBADOPNJEPL___INIT_OFFSET UNITYSDK_OFFSET(0x80DF90)

inline static constexpr unsigned int IBADOPNJEPL_TypeDefinitionIndex = 12166;

struct alignas(8) IBADOPNJEPL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBADOPNJEPL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBADOPNJEPL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PFFFIEGEDPE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PFFFIEGEDPE&, ::System::Int32&))((::PBYTE)hIl2Cpp + IBADOPNJEPL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::IBADOPNJEPL MJMKMHEMLAO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IBADOPNJEPL EIFONLCJOPG)
	{
		return ((::IBADOPNJEPL(*)(::FlatBuffers::ByteBuffer*, ::IBADOPNJEPL))((::PBYTE)hIl2Cpp + IBADOPNJEPL_MJMKMHEMLAO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::IBADOPNJEPL MJMKMHEMLAO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBADOPNJEPL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBADOPNJEPL_MJMKMHEMLAO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::IBADOPNJEPL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBADOPNJEPL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBADOPNJEPL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PFFFIEGEDPE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PFFFIEGEDPE&))((::PBYTE)hIl2Cpp + IBADOPNJEPL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBADOPNJEPL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBADOPNJEPL_GHKKNCCLPAN_OFFSET))(this);
	}
};
