#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EALGMECCPDN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HDKLLLAEBML_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HDKLLLAEBML_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E37C0)
#define HDKLLLAEBML_GCKIFNFNCOO_1_OFFSET UNITYSDK_OFFSET(0x1952EEA0)
#define HDKLLLAEBML_GCKIFNFNCOO_OFFSET UNITYSDK_OFFSET(0x1952EE40)
#define HDKLLLAEBML_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HDKLLLAEBML_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HDKLLLAEBML_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E37A0)
#define HDKLLLAEBML_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E37B0)
#define HDKLLLAEBML___INIT_OFFSET UNITYSDK_OFFSET(0x7E3780)

inline static constexpr unsigned int HDKLLLAEBML_TypeDefinitionIndex = 15059;

struct alignas(8) HDKLLLAEBML
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKLLLAEBML_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDKLLLAEBML___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EALGMECCPDN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EALGMECCPDN&, ::System::Int32&))((::PBYTE)hIl2Cpp + HDKLLLAEBML_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKLLLAEBML_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKLLLAEBML_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::HDKLLLAEBML BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HDKLLLAEBML(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDKLLLAEBML_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HDKLLLAEBML GCKIFNFNCOO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HDKLLLAEBML EIFONLCJOPG)
	{
		return ((::HDKLLLAEBML(*)(::FlatBuffers::ByteBuffer*, ::HDKLLLAEBML))((::PBYTE)hIl2Cpp + HDKLLLAEBML_GCKIFNFNCOO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HDKLLLAEBML GCKIFNFNCOO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HDKLLLAEBML(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDKLLLAEBML_GCKIFNFNCOO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EALGMECCPDN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EALGMECCPDN&))((::PBYTE)hIl2Cpp + HDKLLLAEBML_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
