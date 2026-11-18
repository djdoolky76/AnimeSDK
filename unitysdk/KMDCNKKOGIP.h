#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JOGKPLDAPMN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KMDCNKKOGIP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KMDCNKKOGIP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x758C90)
#define KMDCNKKOGIP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KMDCNKKOGIP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KMDCNKKOGIP_ILJFKPCMALE_1_OFFSET UNITYSDK_OFFSET(0x152DED00)
#define KMDCNKKOGIP_ILJFKPCMALE_OFFSET UNITYSDK_OFFSET(0x15306E30)
#define KMDCNKKOGIP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x758CE0)
#define KMDCNKKOGIP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x758CD0)
#define KMDCNKKOGIP___INIT_OFFSET UNITYSDK_OFFSET(0x758C70)

inline static constexpr unsigned int KMDCNKKOGIP_TypeDefinitionIndex = 16834;

struct alignas(8) KMDCNKKOGIP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDCNKKOGIP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMDCNKKOGIP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KMDCNKKOGIP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KMDCNKKOGIP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMDCNKKOGIP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDCNKKOGIP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDCNKKOGIP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JOGKPLDAPMN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JOGKPLDAPMN&))((::PBYTE)hIl2Cpp + KMDCNKKOGIP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JOGKPLDAPMN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JOGKPLDAPMN&, ::System::Int32&))((::PBYTE)hIl2Cpp + KMDCNKKOGIP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::KMDCNKKOGIP ILJFKPCMALE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KMDCNKKOGIP EIFONLCJOPG)
	{
		return ((::KMDCNKKOGIP(*)(::FlatBuffers::ByteBuffer*, ::KMDCNKKOGIP))((::PBYTE)hIl2Cpp + KMDCNKKOGIP_ILJFKPCMALE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::KMDCNKKOGIP ILJFKPCMALE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KMDCNKKOGIP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMDCNKKOGIP_ILJFKPCMALE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
