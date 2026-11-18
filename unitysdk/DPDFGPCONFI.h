#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JAJDJEOAMCP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPDFGPCONFI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DPDFGPCONFI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x807AB0)
#define DPDFGPCONFI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DPDFGPCONFI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DPDFGPCONFI_LLBIHDKOKHK_1_OFFSET UNITYSDK_OFFSET(0x1ADCD870)
#define DPDFGPCONFI_LLBIHDKOKHK_OFFSET UNITYSDK_OFFSET(0x1ADCD800)
#define DPDFGPCONFI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x807B00)
#define DPDFGPCONFI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x807AF0)
#define DPDFGPCONFI___INIT_OFFSET UNITYSDK_OFFSET(0x807A90)

inline static constexpr unsigned int DPDFGPCONFI_TypeDefinitionIndex = 14836;

struct alignas(8) DPDFGPCONFI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDFGPCONFI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPDFGPCONFI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DPDFGPCONFI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPDFGPCONFI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPDFGPCONFI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDFGPCONFI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DPDFGPCONFI LLBIHDKOKHK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPDFGPCONFI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPDFGPCONFI_LLBIHDKOKHK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDFGPCONFI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DPDFGPCONFI LLBIHDKOKHK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DPDFGPCONFI EIFONLCJOPG)
	{
		return ((::DPDFGPCONFI(*)(::FlatBuffers::ByteBuffer*, ::DPDFGPCONFI))((::PBYTE)hIl2Cpp + DPDFGPCONFI_LLBIHDKOKHK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JAJDJEOAMCP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JAJDJEOAMCP&))((::PBYTE)hIl2Cpp + DPDFGPCONFI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JAJDJEOAMCP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JAJDJEOAMCP&, ::System::Int32&))((::PBYTE)hIl2Cpp + DPDFGPCONFI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
