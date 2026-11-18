#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FDIIHAOLPOP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CJMNGMNHFDM_ADAHIBGKHLE_1_OFFSET UNITYSDK_OFFSET(0x1A588240)
#define CJMNGMNHFDM_ADAHIBGKHLE_OFFSET UNITYSDK_OFFSET(0x1A5881D0)
#define CJMNGMNHFDM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CJMNGMNHFDM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FB5F0)
#define CJMNGMNHFDM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CJMNGMNHFDM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CJMNGMNHFDM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FB5E0)
#define CJMNGMNHFDM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FB5D0)
#define CJMNGMNHFDM___INIT_OFFSET UNITYSDK_OFFSET(0x7FB5B0)

inline static constexpr unsigned int CJMNGMNHFDM_TypeDefinitionIndex = 11336;

struct alignas(8) CJMNGMNHFDM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJMNGMNHFDM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJMNGMNHFDM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJMNGMNHFDM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FDIIHAOLPOP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FDIIHAOLPOP&, ::System::Int32&))((::PBYTE)hIl2Cpp + CJMNGMNHFDM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::CJMNGMNHFDM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CJMNGMNHFDM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJMNGMNHFDM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJMNGMNHFDM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::CJMNGMNHFDM ADAHIBGKHLE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CJMNGMNHFDM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJMNGMNHFDM_ADAHIBGKHLE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FDIIHAOLPOP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FDIIHAOLPOP&))((::PBYTE)hIl2Cpp + CJMNGMNHFDM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CJMNGMNHFDM ADAHIBGKHLE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CJMNGMNHFDM EIFONLCJOPG)
	{
		return ((::CJMNGMNHFDM(*)(::FlatBuffers::ByteBuffer*, ::CJMNGMNHFDM))((::PBYTE)hIl2Cpp + CJMNGMNHFDM_ADAHIBGKHLE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
