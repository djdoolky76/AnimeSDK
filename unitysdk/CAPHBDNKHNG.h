#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KBGGJELAAOG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CAPHBDNKHNG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CAPHBDNKHNG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F1AC0)
#define CAPHBDNKHNG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CAPHBDNKHNG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CAPHBDNKHNG_KKBHLCGNLAC_1_OFFSET UNITYSDK_OFFSET(0x19F275A0)
#define CAPHBDNKHNG_KKBHLCGNLAC_OFFSET UNITYSDK_OFFSET(0x19F27530)
#define CAPHBDNKHNG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F1AA0)
#define CAPHBDNKHNG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F1AB0)
#define CAPHBDNKHNG___INIT_OFFSET UNITYSDK_OFFSET(0x7F1A80)

inline static constexpr unsigned int CAPHBDNKHNG_TypeDefinitionIndex = 9892;

struct alignas(8) CAPHBDNKHNG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPHBDNKHNG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAPHBDNKHNG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPHBDNKHNG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KBGGJELAAOG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KBGGJELAAOG&))((::PBYTE)hIl2Cpp + CAPHBDNKHNG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CAPHBDNKHNG KKBHLCGNLAC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CAPHBDNKHNG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAPHBDNKHNG_KKBHLCGNLAC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KBGGJELAAOG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KBGGJELAAOG&, ::System::Int32&))((::PBYTE)hIl2Cpp + CAPHBDNKHNG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPHBDNKHNG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::CAPHBDNKHNG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CAPHBDNKHNG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAPHBDNKHNG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CAPHBDNKHNG KKBHLCGNLAC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CAPHBDNKHNG EIFONLCJOPG)
	{
		return ((::CAPHBDNKHNG(*)(::FlatBuffers::ByteBuffer*, ::CAPHBDNKHNG))((::PBYTE)hIl2Cpp + CAPHBDNKHNG_KKBHLCGNLAC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
