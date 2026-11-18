#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KACOGGMAOCL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PACNFFPPCKE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PACNFFPPCKE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x937200)
#define PACNFFPPCKE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PACNFFPPCKE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PACNFFPPCKE_HOAANHFHEHH_1_OFFSET UNITYSDK_OFFSET(0x1EDBB320)
#define PACNFFPPCKE_HOAANHFHEHH_OFFSET UNITYSDK_OFFSET(0x1EDBB2B0)
#define PACNFFPPCKE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x937250)
#define PACNFFPPCKE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x937240)
#define PACNFFPPCKE___INIT_OFFSET UNITYSDK_OFFSET(0x9371E0)

inline static constexpr unsigned int PACNFFPPCKE_TypeDefinitionIndex = 15518;

struct alignas(8) PACNFFPPCKE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PACNFFPPCKE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PACNFFPPCKE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PACNFFPPCKE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PACNFFPPCKE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PACNFFPPCKE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PACNFFPPCKE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PACNFFPPCKE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PACNFFPPCKE HOAANHFHEHH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PACNFFPPCKE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PACNFFPPCKE_HOAANHFHEHH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KACOGGMAOCL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KACOGGMAOCL&, ::System::Int32&))((::PBYTE)hIl2Cpp + PACNFFPPCKE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KACOGGMAOCL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KACOGGMAOCL&))((::PBYTE)hIl2Cpp + PACNFFPPCKE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PACNFFPPCKE HOAANHFHEHH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PACNFFPPCKE EIFONLCJOPG)
	{
		return ((::PACNFFPPCKE(*)(::FlatBuffers::ByteBuffer*, ::PACNFFPPCKE))((::PBYTE)hIl2Cpp + PACNFFPPCKE_HOAANHFHEHH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
