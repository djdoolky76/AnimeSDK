#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EJCBKEODCGD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GJBNBDJJCOA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GJBNBDJJCOA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x779570)
#define GJBNBDJJCOA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GJBNBDJJCOA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GJBNBDJJCOA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x779560)
#define GJBNBDJJCOA_LOIDDHGHMHO_1_OFFSET UNITYSDK_OFFSET(0x160E4950)
#define GJBNBDJJCOA_LOIDDHGHMHO_OFFSET UNITYSDK_OFFSET(0x160E4850)
#define GJBNBDJJCOA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7795B0)
#define GJBNBDJJCOA___INIT_OFFSET UNITYSDK_OFFSET(0x779540)

inline static constexpr unsigned int GJBNBDJJCOA_TypeDefinitionIndex = 12936;

struct alignas(8) GJBNBDJJCOA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBNBDJJCOA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJBNBDJJCOA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EJCBKEODCGD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EJCBKEODCGD&, ::System::Int32&))((::PBYTE)hIl2Cpp + GJBNBDJJCOA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GJBNBDJJCOA LOIDDHGHMHO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GJBNBDJJCOA EIFONLCJOPG)
	{
		return ((::GJBNBDJJCOA(*)(::FlatBuffers::ByteBuffer*, ::GJBNBDJJCOA))((::PBYTE)hIl2Cpp + GJBNBDJJCOA_LOIDDHGHMHO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBNBDJJCOA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::GJBNBDJJCOA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GJBNBDJJCOA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJBNBDJJCOA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EJCBKEODCGD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EJCBKEODCGD&))((::PBYTE)hIl2Cpp + GJBNBDJJCOA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBNBDJJCOA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GJBNBDJJCOA LOIDDHGHMHO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GJBNBDJJCOA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJBNBDJJCOA_LOIDDHGHMHO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
