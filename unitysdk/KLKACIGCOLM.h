#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OLANBBJEIFK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KLKACIGCOLM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KLKACIGCOLM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E4AA0)
#define KLKACIGCOLM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KLKACIGCOLM_GFFGHKGDKEA_1_OFFSET UNITYSDK_OFFSET(0x1955DFF0)
#define KLKACIGCOLM_GFFGHKGDKEA_OFFSET UNITYSDK_OFFSET(0x1955DF50)
#define KLKACIGCOLM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KLKACIGCOLM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E4A80)
#define KLKACIGCOLM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E4A90)
#define KLKACIGCOLM___INIT_OFFSET UNITYSDK_OFFSET(0x7E4A60)

inline static constexpr unsigned int KLKACIGCOLM_TypeDefinitionIndex = 10015;

struct alignas(8) KLKACIGCOLM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKACIGCOLM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLKACIGCOLM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OLANBBJEIFK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OLANBBJEIFK&, ::System::Int32&))((::PBYTE)hIl2Cpp + KLKACIGCOLM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::KLKACIGCOLM GFFGHKGDKEA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KLKACIGCOLM EIFONLCJOPG)
	{
		return ((::KLKACIGCOLM(*)(::FlatBuffers::ByteBuffer*, ::KLKACIGCOLM))((::PBYTE)hIl2Cpp + KLKACIGCOLM_GFFGHKGDKEA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::KLKACIGCOLM GFFGHKGDKEA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLKACIGCOLM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLKACIGCOLM_GFFGHKGDKEA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKACIGCOLM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OLANBBJEIFK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OLANBBJEIFK&))((::PBYTE)hIl2Cpp + KLKACIGCOLM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKACIGCOLM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::KLKACIGCOLM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLKACIGCOLM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLKACIGCOLM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
