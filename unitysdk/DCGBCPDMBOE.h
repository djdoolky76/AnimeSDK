#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GFENNLFLNJN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DCGBCPDMBOE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DCGBCPDMBOE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F5700)
#define DCGBCPDMBOE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DCGBCPDMBOE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DCGBCPDMBOE_LFNLIGHIMEH_1_OFFSET UNITYSDK_OFFSET(0x1A188FA0)
#define DCGBCPDMBOE_LFNLIGHIMEH_OFFSET UNITYSDK_OFFSET(0x1A188F00)
#define DCGBCPDMBOE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F56E0)
#define DCGBCPDMBOE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F56F0)
#define DCGBCPDMBOE___INIT_OFFSET UNITYSDK_OFFSET(0x7F56C0)

inline static constexpr unsigned int DCGBCPDMBOE_TypeDefinitionIndex = 12904;

struct alignas(8) DCGBCPDMBOE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGBCPDMBOE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCGBCPDMBOE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GFENNLFLNJN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GFENNLFLNJN&, ::System::Int32&))((::PBYTE)hIl2Cpp + DCGBCPDMBOE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGBCPDMBOE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DCGBCPDMBOE LFNLIGHIMEH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DCGBCPDMBOE EIFONLCJOPG)
	{
		return ((::DCGBCPDMBOE(*)(::FlatBuffers::ByteBuffer*, ::DCGBCPDMBOE))((::PBYTE)hIl2Cpp + DCGBCPDMBOE_LFNLIGHIMEH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::DCGBCPDMBOE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DCGBCPDMBOE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCGBCPDMBOE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GFENNLFLNJN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GFENNLFLNJN&))((::PBYTE)hIl2Cpp + DCGBCPDMBOE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGBCPDMBOE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DCGBCPDMBOE LFNLIGHIMEH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DCGBCPDMBOE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCGBCPDMBOE_LFNLIGHIMEH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
