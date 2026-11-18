#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IDNJPAFNAGO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CFJLKFGIOCM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CFJLKFGIOCM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B1ED0)
#define CFJLKFGIOCM_FLGIAONMOHO_1_OFFSET UNITYSDK_OFFSET(0x17A862F0)
#define CFJLKFGIOCM_FLGIAONMOHO_OFFSET UNITYSDK_OFFSET(0x17A86280)
#define CFJLKFGIOCM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CFJLKFGIOCM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CFJLKFGIOCM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B1F20)
#define CFJLKFGIOCM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B1F10)
#define CFJLKFGIOCM___INIT_OFFSET UNITYSDK_OFFSET(0x7B1EB0)

inline static constexpr unsigned int CFJLKFGIOCM_TypeDefinitionIndex = 12174;

struct alignas(8) CFJLKFGIOCM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJLKFGIOCM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFJLKFGIOCM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CFJLKFGIOCM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CFJLKFGIOCM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFJLKFGIOCM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJLKFGIOCM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJLKFGIOCM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::CFJLKFGIOCM FLGIAONMOHO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CFJLKFGIOCM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFJLKFGIOCM_FLGIAONMOHO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::CFJLKFGIOCM FLGIAONMOHO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CFJLKFGIOCM EIFONLCJOPG)
	{
		return ((::CFJLKFGIOCM(*)(::FlatBuffers::ByteBuffer*, ::CFJLKFGIOCM))((::PBYTE)hIl2Cpp + CFJLKFGIOCM_FLGIAONMOHO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IDNJPAFNAGO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IDNJPAFNAGO&, ::System::Int32&))((::PBYTE)hIl2Cpp + CFJLKFGIOCM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IDNJPAFNAGO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IDNJPAFNAGO&))((::PBYTE)hIl2Cpp + CFJLKFGIOCM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
