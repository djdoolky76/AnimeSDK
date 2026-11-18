#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IAELHJAONOP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GEJNPAFDPOO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GEJNPAFDPOO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x78AD50)
#define GEJNPAFDPOO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GEJNPAFDPOO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GEJNPAFDPOO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x78AD40)
#define GEJNPAFDPOO_NIHEKBIJBNP_1_OFFSET UNITYSDK_OFFSET(0x16645F20)
#define GEJNPAFDPOO_NIHEKBIJBNP_OFFSET UNITYSDK_OFFSET(0x16645D20)
#define GEJNPAFDPOO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x78AD90)
#define GEJNPAFDPOO___INIT_OFFSET UNITYSDK_OFFSET(0x78AD20)

inline static constexpr unsigned int GEJNPAFDPOO_TypeDefinitionIndex = 11712;

struct alignas(8) GEJNPAFDPOO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJNPAFDPOO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEJNPAFDPOO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IAELHJAONOP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IAELHJAONOP&))((::PBYTE)hIl2Cpp + GEJNPAFDPOO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJNPAFDPOO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GEJNPAFDPOO NIHEKBIJBNP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GEJNPAFDPOO EIFONLCJOPG)
	{
		return ((::GEJNPAFDPOO(*)(::FlatBuffers::ByteBuffer*, ::GEJNPAFDPOO))((::PBYTE)hIl2Cpp + GEJNPAFDPOO_NIHEKBIJBNP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IAELHJAONOP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IAELHJAONOP&, ::System::Int32&))((::PBYTE)hIl2Cpp + GEJNPAFDPOO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::GEJNPAFDPOO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GEJNPAFDPOO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEJNPAFDPOO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJNPAFDPOO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GEJNPAFDPOO NIHEKBIJBNP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GEJNPAFDPOO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEJNPAFDPOO_NIHEKBIJBNP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
