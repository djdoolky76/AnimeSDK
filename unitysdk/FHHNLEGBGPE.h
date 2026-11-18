#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ALOACIEGMAI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FHHNLEGBGPE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FHHNLEGBGPE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x808440)
#define FHHNLEGBGPE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FHHNLEGBGPE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FHHNLEGBGPE_KDNLMHDGPIL_1_OFFSET UNITYSDK_OFFSET(0x1ADE3E60)
#define FHHNLEGBGPE_KDNLMHDGPIL_OFFSET UNITYSDK_OFFSET(0x1ADE3DF0)
#define FHHNLEGBGPE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x808430)
#define FHHNLEGBGPE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x808480)
#define FHHNLEGBGPE___INIT_OFFSET UNITYSDK_OFFSET(0x808410)

inline static constexpr unsigned int FHHNLEGBGPE_TypeDefinitionIndex = 10688;

struct alignas(8) FHHNLEGBGPE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHNLEGBGPE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHHNLEGBGPE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ALOACIEGMAI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ALOACIEGMAI&))((::PBYTE)hIl2Cpp + FHHNLEGBGPE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FHHNLEGBGPE KDNLMHDGPIL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHHNLEGBGPE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHHNLEGBGPE_KDNLMHDGPIL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ALOACIEGMAI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ALOACIEGMAI&, ::System::Int32&))((::PBYTE)hIl2Cpp + FHHNLEGBGPE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHNLEGBGPE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::FHHNLEGBGPE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHHNLEGBGPE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHHNLEGBGPE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FHHNLEGBGPE KDNLMHDGPIL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FHHNLEGBGPE EIFONLCJOPG)
	{
		return ((::FHHNLEGBGPE(*)(::FlatBuffers::ByteBuffer*, ::FHHNLEGBGPE))((::PBYTE)hIl2Cpp + FHHNLEGBGPE_KDNLMHDGPIL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHNLEGBGPE_PPOMNIFACOL_OFFSET))(this);
	}
};
