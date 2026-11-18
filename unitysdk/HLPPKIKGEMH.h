#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FPMAKOIHBAP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HLPPKIKGEMH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HLPPKIKGEMH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FCF30)
#define HLPPKIKGEMH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HLPPKIKGEMH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HLPPKIKGEMH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FCF20)
#define HLPPKIKGEMH_OHHJCDDHLED_1_OFFSET UNITYSDK_OFFSET(0x1A5CDAB0)
#define HLPPKIKGEMH_OHHJCDDHLED_OFFSET UNITYSDK_OFFSET(0x1A5CDA40)
#define HLPPKIKGEMH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FCF70)
#define HLPPKIKGEMH___INIT_OFFSET UNITYSDK_OFFSET(0x7FCF00)

inline static constexpr unsigned int HLPPKIKGEMH_TypeDefinitionIndex = 14482;

struct alignas(8) HLPPKIKGEMH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPPKIKGEMH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLPPKIKGEMH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HLPPKIKGEMH OHHJCDDHLED(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLPPKIKGEMH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLPPKIKGEMH_OHHJCDDHLED_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FPMAKOIHBAP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FPMAKOIHBAP&))((::PBYTE)hIl2Cpp + HLPPKIKGEMH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FPMAKOIHBAP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FPMAKOIHBAP&, ::System::Int32&))((::PBYTE)hIl2Cpp + HLPPKIKGEMH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::HLPPKIKGEMH OHHJCDDHLED_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HLPPKIKGEMH EIFONLCJOPG)
	{
		return ((::HLPPKIKGEMH(*)(::FlatBuffers::ByteBuffer*, ::HLPPKIKGEMH))((::PBYTE)hIl2Cpp + HLPPKIKGEMH_OHHJCDDHLED_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HLPPKIKGEMH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLPPKIKGEMH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLPPKIKGEMH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPPKIKGEMH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPPKIKGEMH_GHKKNCCLPAN_OFFSET))(this);
	}
};
