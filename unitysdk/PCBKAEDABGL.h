#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HBFIKDDKHDA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PCBKAEDABGL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PCBKAEDABGL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81EA40)
#define PCBKAEDABGL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PCBKAEDABGL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PCBKAEDABGL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81EA20)
#define PCBKAEDABGL_MJJCGCJIGFI_1_OFFSET UNITYSDK_OFFSET(0x1BF886B0)
#define PCBKAEDABGL_MJJCGCJIGFI_OFFSET UNITYSDK_OFFSET(0x1BF88610)
#define PCBKAEDABGL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81EA30)
#define PCBKAEDABGL___INIT_OFFSET UNITYSDK_OFFSET(0x81EA00)

inline static constexpr unsigned int PCBKAEDABGL_TypeDefinitionIndex = 16896;

struct alignas(8) PCBKAEDABGL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBKAEDABGL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PCBKAEDABGL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HBFIKDDKHDA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HBFIKDDKHDA&, ::System::Int32&))((::PBYTE)hIl2Cpp + PCBKAEDABGL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::PCBKAEDABGL MJJCGCJIGFI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PCBKAEDABGL EIFONLCJOPG)
	{
		return ((::PCBKAEDABGL(*)(::FlatBuffers::ByteBuffer*, ::PCBKAEDABGL))((::PBYTE)hIl2Cpp + PCBKAEDABGL_MJJCGCJIGFI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::PCBKAEDABGL MJJCGCJIGFI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PCBKAEDABGL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PCBKAEDABGL_MJJCGCJIGFI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBKAEDABGL_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HBFIKDDKHDA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HBFIKDDKHDA&))((::PBYTE)hIl2Cpp + PCBKAEDABGL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBKAEDABGL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::PCBKAEDABGL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PCBKAEDABGL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PCBKAEDABGL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
