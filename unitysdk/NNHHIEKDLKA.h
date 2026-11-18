#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OAMFBPHIEGI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NNHHIEKDLKA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NNHHIEKDLKA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81F670)
#define NNHHIEKDLKA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NNHHIEKDLKA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NNHHIEKDLKA_JFLKJFMIIHP_1_OFFSET UNITYSDK_OFFSET(0x1C097AC0)
#define NNHHIEKDLKA_JFLKJFMIIHP_OFFSET UNITYSDK_OFFSET(0x1C097A50)
#define NNHHIEKDLKA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81F6B0)
#define NNHHIEKDLKA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81F6C0)
#define NNHHIEKDLKA___INIT_OFFSET UNITYSDK_OFFSET(0x81F650)

inline static constexpr unsigned int NNHHIEKDLKA_TypeDefinitionIndex = 16533;

struct alignas(8) NNHHIEKDLKA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHHIEKDLKA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNHHIEKDLKA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NNHHIEKDLKA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NNHHIEKDLKA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNHHIEKDLKA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OAMFBPHIEGI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OAMFBPHIEGI&))((::PBYTE)hIl2Cpp + NNHHIEKDLKA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OAMFBPHIEGI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OAMFBPHIEGI&, ::System::Int32&))((::PBYTE)hIl2Cpp + NNHHIEKDLKA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NNHHIEKDLKA JFLKJFMIIHP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NNHHIEKDLKA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNHHIEKDLKA_JFLKJFMIIHP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHHIEKDLKA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHHIEKDLKA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NNHHIEKDLKA JFLKJFMIIHP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NNHHIEKDLKA EIFONLCJOPG)
	{
		return ((::NNHHIEKDLKA(*)(::FlatBuffers::ByteBuffer*, ::NNHHIEKDLKA))((::PBYTE)hIl2Cpp + NNHHIEKDLKA_JFLKJFMIIHP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
