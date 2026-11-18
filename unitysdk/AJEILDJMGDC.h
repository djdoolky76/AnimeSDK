#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CHAMHAJDKNL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AJEILDJMGDC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AJEILDJMGDC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D0140)
#define AJEILDJMGDC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AJEILDJMGDC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AJEILDJMGDC_GOAOKIFLJLD_1_OFFSET UNITYSDK_OFFSET(0x1876EAB0)
#define AJEILDJMGDC_GOAOKIFLJLD_OFFSET UNITYSDK_OFFSET(0x1876E970)
#define AJEILDJMGDC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D0190)
#define AJEILDJMGDC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D0180)
#define AJEILDJMGDC___INIT_OFFSET UNITYSDK_OFFSET(0x7D0120)

inline static constexpr unsigned int AJEILDJMGDC_TypeDefinitionIndex = 15750;

struct alignas(8) AJEILDJMGDC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEILDJMGDC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJEILDJMGDC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEILDJMGDC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AJEILDJMGDC GOAOKIFLJLD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AJEILDJMGDC EIFONLCJOPG)
	{
		return ((::AJEILDJMGDC(*)(::FlatBuffers::ByteBuffer*, ::AJEILDJMGDC))((::PBYTE)hIl2Cpp + AJEILDJMGDC_GOAOKIFLJLD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CHAMHAJDKNL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CHAMHAJDKNL&))((::PBYTE)hIl2Cpp + AJEILDJMGDC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::AJEILDJMGDC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AJEILDJMGDC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJEILDJMGDC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AJEILDJMGDC GOAOKIFLJLD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AJEILDJMGDC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJEILDJMGDC_GOAOKIFLJLD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEILDJMGDC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CHAMHAJDKNL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CHAMHAJDKNL&, ::System::Int32&))((::PBYTE)hIl2Cpp + AJEILDJMGDC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
