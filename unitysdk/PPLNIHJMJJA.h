#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BJNPFEABOGL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PPLNIHJMJJA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PPLNIHJMJJA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8213A0)
#define PPLNIHJMJJA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PPLNIHJMJJA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PPLNIHJMJJA_IDJJKBALOIJ_1_OFFSET UNITYSDK_OFFSET(0x1C1B5800)
#define PPLNIHJMJJA_IDJJKBALOIJ_OFFSET UNITYSDK_OFFSET(0x1C1B57A0)
#define PPLNIHJMJJA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x821390)
#define PPLNIHJMJJA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x821380)
#define PPLNIHJMJJA___INIT_OFFSET UNITYSDK_OFFSET(0x821360)

inline static constexpr unsigned int PPLNIHJMJJA_TypeDefinitionIndex = 11647;

struct alignas(8) PPLNIHJMJJA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLNIHJMJJA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPLNIHJMJJA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLNIHJMJJA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BJNPFEABOGL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BJNPFEABOGL&, ::System::Int32&))((::PBYTE)hIl2Cpp + PPLNIHJMJJA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLNIHJMJJA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::PPLNIHJMJJA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PPLNIHJMJJA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPLNIHJMJJA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PPLNIHJMJJA IDJJKBALOIJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PPLNIHJMJJA EIFONLCJOPG)
	{
		return ((::PPLNIHJMJJA(*)(::FlatBuffers::ByteBuffer*, ::PPLNIHJMJJA))((::PBYTE)hIl2Cpp + PPLNIHJMJJA_IDJJKBALOIJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::PPLNIHJMJJA IDJJKBALOIJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PPLNIHJMJJA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPLNIHJMJJA_IDJJKBALOIJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BJNPFEABOGL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BJNPFEABOGL&))((::PBYTE)hIl2Cpp + PPLNIHJMJJA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
