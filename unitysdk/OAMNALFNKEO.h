#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BFAENEIHIMN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OAMNALFNKEO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OAMNALFNKEO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81E3A0)
#define OAMNALFNKEO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OAMNALFNKEO_GHEEFCENJLH_1_OFFSET UNITYSDK_OFFSET(0x1BF741E0)
#define OAMNALFNKEO_GHEEFCENJLH_OFFSET UNITYSDK_OFFSET(0x1BF74170)
#define OAMNALFNKEO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OAMNALFNKEO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81E3F0)
#define OAMNALFNKEO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81E3E0)
#define OAMNALFNKEO___INIT_OFFSET UNITYSDK_OFFSET(0x81E380)

inline static constexpr unsigned int OAMNALFNKEO_TypeDefinitionIndex = 12632;

struct alignas(8) OAMNALFNKEO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMNALFNKEO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAMNALFNKEO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OAMNALFNKEO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OAMNALFNKEO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAMNALFNKEO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMNALFNKEO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OAMNALFNKEO GHEEFCENJLH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OAMNALFNKEO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAMNALFNKEO_GHEEFCENJLH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMNALFNKEO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OAMNALFNKEO GHEEFCENJLH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OAMNALFNKEO EIFONLCJOPG)
	{
		return ((::OAMNALFNKEO(*)(::FlatBuffers::ByteBuffer*, ::OAMNALFNKEO))((::PBYTE)hIl2Cpp + OAMNALFNKEO_GHEEFCENJLH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BFAENEIHIMN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BFAENEIHIMN&))((::PBYTE)hIl2Cpp + OAMNALFNKEO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BFAENEIHIMN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BFAENEIHIMN&, ::System::Int32&))((::PBYTE)hIl2Cpp + OAMNALFNKEO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
