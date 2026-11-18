#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DEGFLLEFDHD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BNIKCEOJLID_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BNIKCEOJLID_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B1BB0)
#define BNIKCEOJLID_BOHGJADKCNM_1_OFFSET UNITYSDK_OFFSET(0x17A7E4A0)
#define BNIKCEOJLID_BOHGJADKCNM_OFFSET UNITYSDK_OFFSET(0x17A7E240)
#define BNIKCEOJLID_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BNIKCEOJLID_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BNIKCEOJLID_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B1BF0)
#define BNIKCEOJLID_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B1BA0)
#define BNIKCEOJLID___INIT_OFFSET UNITYSDK_OFFSET(0x7B1B80)

inline static constexpr unsigned int BNIKCEOJLID_TypeDefinitionIndex = 16487;

struct alignas(8) BNIKCEOJLID
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIKCEOJLID_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNIKCEOJLID___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIKCEOJLID_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::BNIKCEOJLID BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BNIKCEOJLID(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNIKCEOJLID_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BNIKCEOJLID BOHGJADKCNM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BNIKCEOJLID EIFONLCJOPG)
	{
		return ((::BNIKCEOJLID(*)(::FlatBuffers::ByteBuffer*, ::BNIKCEOJLID))((::PBYTE)hIl2Cpp + BNIKCEOJLID_BOHGJADKCNM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DEGFLLEFDHD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DEGFLLEFDHD&, ::System::Int32&))((::PBYTE)hIl2Cpp + BNIKCEOJLID_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::BNIKCEOJLID BOHGJADKCNM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BNIKCEOJLID(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNIKCEOJLID_BOHGJADKCNM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DEGFLLEFDHD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DEGFLLEFDHD&))((::PBYTE)hIl2Cpp + BNIKCEOJLID_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIKCEOJLID_GHKKNCCLPAN_OFFSET))(this);
	}
};
