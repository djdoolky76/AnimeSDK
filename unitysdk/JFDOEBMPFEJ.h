#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ONGDBLHDJFI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JFDOEBMPFEJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JFDOEBMPFEJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76F950)
#define JFDOEBMPFEJ_BJAILEMEFOD_1_OFFSET UNITYSDK_OFFSET(0x15AA78B0)
#define JFDOEBMPFEJ_BJAILEMEFOD_OFFSET UNITYSDK_OFFSET(0x15AA7840)
#define JFDOEBMPFEJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JFDOEBMPFEJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JFDOEBMPFEJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76F9A0)
#define JFDOEBMPFEJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76F990)
#define JFDOEBMPFEJ___INIT_OFFSET UNITYSDK_OFFSET(0x76F930)

inline static constexpr unsigned int JFDOEBMPFEJ_TypeDefinitionIndex = 16085;

struct alignas(8) JFDOEBMPFEJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDOEBMPFEJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFDOEBMPFEJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JFDOEBMPFEJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JFDOEBMPFEJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFDOEBMPFEJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JFDOEBMPFEJ BJAILEMEFOD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JFDOEBMPFEJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFDOEBMPFEJ_BJAILEMEFOD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::JFDOEBMPFEJ BJAILEMEFOD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JFDOEBMPFEJ EIFONLCJOPG)
	{
		return ((::JFDOEBMPFEJ(*)(::FlatBuffers::ByteBuffer*, ::JFDOEBMPFEJ))((::PBYTE)hIl2Cpp + JFDOEBMPFEJ_BJAILEMEFOD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDOEBMPFEJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ONGDBLHDJFI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ONGDBLHDJFI&))((::PBYTE)hIl2Cpp + JFDOEBMPFEJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ONGDBLHDJFI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ONGDBLHDJFI&, ::System::Int32&))((::PBYTE)hIl2Cpp + JFDOEBMPFEJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDOEBMPFEJ_GHKKNCCLPAN_OFFSET))(this);
	}
};
