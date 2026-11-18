#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FEHKIIBFNEH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OGLFGAEOHFP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OGLFGAEOHFP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81F8B0)
#define OGLFGAEOHFP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OGLFGAEOHFP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OGLFGAEOHFP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81F900)
#define OGLFGAEOHFP_OJOMFFAHFML_1_OFFSET UNITYSDK_OFFSET(0x1C0A06E0)
#define OGLFGAEOHFP_OJOMFFAHFML_OFFSET UNITYSDK_OFFSET(0x1C0A0620)
#define OGLFGAEOHFP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81F8F0)
#define OGLFGAEOHFP___INIT_OFFSET UNITYSDK_OFFSET(0x81F890)

inline static constexpr unsigned int OGLFGAEOHFP_TypeDefinitionIndex = 9455;

struct alignas(8) OGLFGAEOHFP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLFGAEOHFP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGLFGAEOHFP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OGLFGAEOHFP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGLFGAEOHFP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGLFGAEOHFP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FEHKIIBFNEH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FEHKIIBFNEH&))((::PBYTE)hIl2Cpp + OGLFGAEOHFP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::OGLFGAEOHFP OJOMFFAHFML(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OGLFGAEOHFP EIFONLCJOPG)
	{
		return ((::OGLFGAEOHFP(*)(::FlatBuffers::ByteBuffer*, ::OGLFGAEOHFP))((::PBYTE)hIl2Cpp + OGLFGAEOHFP_OJOMFFAHFML_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLFGAEOHFP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLFGAEOHFP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OGLFGAEOHFP OJOMFFAHFML_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGLFGAEOHFP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGLFGAEOHFP_OJOMFFAHFML_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FEHKIIBFNEH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FEHKIIBFNEH&, ::System::Int32&))((::PBYTE)hIl2Cpp + OGLFGAEOHFP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
