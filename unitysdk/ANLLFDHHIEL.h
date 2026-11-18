#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NBAEBPKHOGC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ANLLFDHHIEL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ANLLFDHHIEL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D0230)
#define ANLLFDHHIEL_ENIGHMPBJIE_1_OFFSET UNITYSDK_OFFSET(0x18773630)
#define ANLLFDHHIEL_ENIGHMPBJIE_OFFSET UNITYSDK_OFFSET(0x18773590)
#define ANLLFDHHIEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ANLLFDHHIEL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ANLLFDHHIEL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D0270)
#define ANLLFDHHIEL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D0220)
#define ANLLFDHHIEL___INIT_OFFSET UNITYSDK_OFFSET(0x7D0200)

inline static constexpr unsigned int ANLLFDHHIEL_TypeDefinitionIndex = 10699;

struct alignas(8) ANLLFDHHIEL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLLFDHHIEL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANLLFDHHIEL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NBAEBPKHOGC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NBAEBPKHOGC&))((::PBYTE)hIl2Cpp + ANLLFDHHIEL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLLFDHHIEL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ANLLFDHHIEL ENIGHMPBJIE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ANLLFDHHIEL EIFONLCJOPG)
	{
		return ((::ANLLFDHHIEL(*)(::FlatBuffers::ByteBuffer*, ::ANLLFDHHIEL))((::PBYTE)hIl2Cpp + ANLLFDHHIEL_ENIGHMPBJIE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::ANLLFDHHIEL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ANLLFDHHIEL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANLLFDHHIEL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ANLLFDHHIEL ENIGHMPBJIE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ANLLFDHHIEL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANLLFDHHIEL_ENIGHMPBJIE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NBAEBPKHOGC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NBAEBPKHOGC&, ::System::Int32&))((::PBYTE)hIl2Cpp + ANLLFDHHIEL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLLFDHHIEL_GHKKNCCLPAN_OFFSET))(this);
	}
};
