#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FHBMJDECOGK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MCPMBJDJCPI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MCPMBJDJCPI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81EF10)
#define MCPMBJDJCPI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MCPMBJDJCPI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MCPMBJDJCPI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81EF50)
#define MCPMBJDJCPI_NJLLBBJKNED_1_OFFSET UNITYSDK_OFFSET(0x1C083400)
#define MCPMBJDJCPI_NJLLBBJKNED_OFFSET UNITYSDK_OFFSET(0x1C083390)
#define MCPMBJDJCPI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81EF60)
#define MCPMBJDJCPI___INIT_OFFSET UNITYSDK_OFFSET(0x81EEF0)

inline static constexpr unsigned int MCPMBJDJCPI_TypeDefinitionIndex = 16272;

struct alignas(8) MCPMBJDJCPI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCPMBJDJCPI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCPMBJDJCPI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MCPMBJDJCPI NJLLBBJKNED(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MCPMBJDJCPI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCPMBJDJCPI_NJLLBBJKNED_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FHBMJDECOGK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FHBMJDECOGK&))((::PBYTE)hIl2Cpp + MCPMBJDJCPI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MCPMBJDJCPI NJLLBBJKNED_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MCPMBJDJCPI EIFONLCJOPG)
	{
		return ((::MCPMBJDJCPI(*)(::FlatBuffers::ByteBuffer*, ::MCPMBJDJCPI))((::PBYTE)hIl2Cpp + MCPMBJDJCPI_NJLLBBJKNED_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::MCPMBJDJCPI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MCPMBJDJCPI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCPMBJDJCPI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FHBMJDECOGK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FHBMJDECOGK&, ::System::Int32&))((::PBYTE)hIl2Cpp + MCPMBJDJCPI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCPMBJDJCPI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCPMBJDJCPI_GHKKNCCLPAN_OFFSET))(this);
	}
};
