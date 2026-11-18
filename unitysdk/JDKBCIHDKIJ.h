#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OMEKLCMOBOD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JDKBCIHDKIJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JDKBCIHDKIJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x814DF0)
#define JDKBCIHDKIJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JDKBCIHDKIJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JDKBCIHDKIJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x814E40)
#define JDKBCIHDKIJ_MKIKMOIHGDI_1_OFFSET UNITYSDK_OFFSET(0x1B892E80)
#define JDKBCIHDKIJ_MKIKMOIHGDI_OFFSET UNITYSDK_OFFSET(0x1B892E10)
#define JDKBCIHDKIJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x814E30)
#define JDKBCIHDKIJ___INIT_OFFSET UNITYSDK_OFFSET(0x814DD0)

inline static constexpr unsigned int JDKBCIHDKIJ_TypeDefinitionIndex = 12530;

struct alignas(8) JDKBCIHDKIJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKBCIHDKIJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDKBCIHDKIJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JDKBCIHDKIJ MKIKMOIHGDI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JDKBCIHDKIJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDKBCIHDKIJ_MKIKMOIHGDI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::JDKBCIHDKIJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JDKBCIHDKIJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDKBCIHDKIJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JDKBCIHDKIJ MKIKMOIHGDI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JDKBCIHDKIJ EIFONLCJOPG)
	{
		return ((::JDKBCIHDKIJ(*)(::FlatBuffers::ByteBuffer*, ::JDKBCIHDKIJ))((::PBYTE)hIl2Cpp + JDKBCIHDKIJ_MKIKMOIHGDI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OMEKLCMOBOD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OMEKLCMOBOD&))((::PBYTE)hIl2Cpp + JDKBCIHDKIJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKBCIHDKIJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKBCIHDKIJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OMEKLCMOBOD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OMEKLCMOBOD&, ::System::Int32&))((::PBYTE)hIl2Cpp + JDKBCIHDKIJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
