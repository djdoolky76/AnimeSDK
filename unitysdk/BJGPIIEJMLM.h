#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DPILLANBHML.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BJGPIIEJMLM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BJGPIIEJMLM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x764370)
#define BJGPIIEJMLM_GEGBPNHEEJI_1_OFFSET UNITYSDK_OFFSET(0x15781580)
#define BJGPIIEJMLM_GEGBPNHEEJI_OFFSET UNITYSDK_OFFSET(0x15781510)
#define BJGPIIEJMLM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BJGPIIEJMLM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BJGPIIEJMLM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x764360)
#define BJGPIIEJMLM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x764350)
#define BJGPIIEJMLM___INIT_OFFSET UNITYSDK_OFFSET(0x764330)

inline static constexpr unsigned int BJGPIIEJMLM_TypeDefinitionIndex = 14557;

struct alignas(8) BJGPIIEJMLM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGPIIEJMLM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BJGPIIEJMLM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGPIIEJMLM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BJGPIIEJMLM GEGBPNHEEJI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BJGPIIEJMLM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BJGPIIEJMLM_GEGBPNHEEJI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::BJGPIIEJMLM GEGBPNHEEJI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BJGPIIEJMLM EIFONLCJOPG)
	{
		return ((::BJGPIIEJMLM(*)(::FlatBuffers::ByteBuffer*, ::BJGPIIEJMLM))((::PBYTE)hIl2Cpp + BJGPIIEJMLM_GEGBPNHEEJI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DPILLANBHML& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DPILLANBHML&, ::System::Int32&))((::PBYTE)hIl2Cpp + BJGPIIEJMLM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DPILLANBHML& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DPILLANBHML&))((::PBYTE)hIl2Cpp + BJGPIIEJMLM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::BJGPIIEJMLM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BJGPIIEJMLM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BJGPIIEJMLM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGPIIEJMLM_GHKKNCCLPAN_OFFSET))(this);
	}
};
