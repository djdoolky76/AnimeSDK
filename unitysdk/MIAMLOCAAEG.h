#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OAOIDGEGNHB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIAMLOCAAEG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MIAMLOCAAEG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81DE50)
#define MIAMLOCAAEG_FMAOGIELCPH_1_OFFSET UNITYSDK_OFFSET(0x1BF604E0)
#define MIAMLOCAAEG_FMAOGIELCPH_OFFSET UNITYSDK_OFFSET(0x1BF600D0)
#define MIAMLOCAAEG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MIAMLOCAAEG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MIAMLOCAAEG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81DE40)
#define MIAMLOCAAEG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81DE30)
#define MIAMLOCAAEG___INIT_OFFSET UNITYSDK_OFFSET(0x81DE10)

inline static constexpr unsigned int MIAMLOCAAEG_TypeDefinitionIndex = 17284;

struct alignas(8) MIAMLOCAAEG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIAMLOCAAEG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIAMLOCAAEG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIAMLOCAAEG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MIAMLOCAAEG FMAOGIELCPH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MIAMLOCAAEG EIFONLCJOPG)
	{
		return ((::MIAMLOCAAEG(*)(::FlatBuffers::ByteBuffer*, ::MIAMLOCAAEG))((::PBYTE)hIl2Cpp + MIAMLOCAAEG_FMAOGIELCPH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OAOIDGEGNHB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OAOIDGEGNHB&))((::PBYTE)hIl2Cpp + MIAMLOCAAEG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIAMLOCAAEG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OAOIDGEGNHB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OAOIDGEGNHB&, ::System::Int32&))((::PBYTE)hIl2Cpp + MIAMLOCAAEG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::MIAMLOCAAEG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MIAMLOCAAEG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIAMLOCAAEG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MIAMLOCAAEG FMAOGIELCPH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MIAMLOCAAEG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIAMLOCAAEG_FMAOGIELCPH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
