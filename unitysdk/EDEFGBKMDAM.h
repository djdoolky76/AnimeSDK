#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CIJMABNLCBO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EDEFGBKMDAM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EDEFGBKMDAM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x817480)
#define EDEFGBKMDAM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EDEFGBKMDAM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EDEFGBKMDAM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x817460)
#define EDEFGBKMDAM_PLFJBAKFMLF_1_OFFSET UNITYSDK_OFFSET(0x1B9B3510)
#define EDEFGBKMDAM_PLFJBAKFMLF_OFFSET UNITYSDK_OFFSET(0x1B9B34A0)
#define EDEFGBKMDAM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x817470)
#define EDEFGBKMDAM___INIT_OFFSET UNITYSDK_OFFSET(0x817440)

inline static constexpr unsigned int EDEFGBKMDAM_TypeDefinitionIndex = 15736;

struct alignas(8) EDEFGBKMDAM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEFGBKMDAM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDEFGBKMDAM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EDEFGBKMDAM PLFJBAKFMLF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EDEFGBKMDAM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDEFGBKMDAM_PLFJBAKFMLF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CIJMABNLCBO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CIJMABNLCBO&, ::System::Int32&))((::PBYTE)hIl2Cpp + EDEFGBKMDAM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::EDEFGBKMDAM PLFJBAKFMLF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EDEFGBKMDAM EIFONLCJOPG)
	{
		return ((::EDEFGBKMDAM(*)(::FlatBuffers::ByteBuffer*, ::EDEFGBKMDAM))((::PBYTE)hIl2Cpp + EDEFGBKMDAM_PLFJBAKFMLF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEFGBKMDAM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CIJMABNLCBO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CIJMABNLCBO&))((::PBYTE)hIl2Cpp + EDEFGBKMDAM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::EDEFGBKMDAM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EDEFGBKMDAM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDEFGBKMDAM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEFGBKMDAM_GHKKNCCLPAN_OFFSET))(this);
	}
};
