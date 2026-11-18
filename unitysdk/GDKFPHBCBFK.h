#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GCEPOGKKDEF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDKFPHBCBFK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GDKFPHBCBFK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x813CA0)
#define GDKFPHBCBFK_CNLNALHIDEB_1_OFFSET UNITYSDK_OFFSET(0x1B86BDF0)
#define GDKFPHBCBFK_CNLNALHIDEB_OFFSET UNITYSDK_OFFSET(0x1B86BCF0)
#define GDKFPHBCBFK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GDKFPHBCBFK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GDKFPHBCBFK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x813C80)
#define GDKFPHBCBFK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x813C90)
#define GDKFPHBCBFK___INIT_OFFSET UNITYSDK_OFFSET(0x813C60)

inline static constexpr unsigned int GDKFPHBCBFK_TypeDefinitionIndex = 11882;

struct alignas(8) GDKFPHBCBFK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKFPHBCBFK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDKFPHBCBFK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GCEPOGKKDEF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GCEPOGKKDEF&, ::System::Int32&))((::PBYTE)hIl2Cpp + GDKFPHBCBFK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GDKFPHBCBFK CNLNALHIDEB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GDKFPHBCBFK EIFONLCJOPG)
	{
		return ((::GDKFPHBCBFK(*)(::FlatBuffers::ByteBuffer*, ::GDKFPHBCBFK))((::PBYTE)hIl2Cpp + GDKFPHBCBFK_CNLNALHIDEB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKFPHBCBFK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKFPHBCBFK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::GDKFPHBCBFK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDKFPHBCBFK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDKFPHBCBFK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GCEPOGKKDEF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GCEPOGKKDEF&))((::PBYTE)hIl2Cpp + GDKFPHBCBFK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GDKFPHBCBFK CNLNALHIDEB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDKFPHBCBFK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDKFPHBCBFK_CNLNALHIDEB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
