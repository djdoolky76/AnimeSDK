#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KHMAAKJOMFL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HLEAANCOCJK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HLEAANCOCJK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B5720)
#define HLEAANCOCJK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HLEAANCOCJK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HLEAANCOCJK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B5760)
#define HLEAANCOCJK_PCKOHDGAIFC_1_OFFSET UNITYSDK_OFFSET(0x17C05A40)
#define HLEAANCOCJK_PCKOHDGAIFC_OFFSET UNITYSDK_OFFSET(0x17C059D0)
#define HLEAANCOCJK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B5710)
#define HLEAANCOCJK___INIT_OFFSET UNITYSDK_OFFSET(0x7B56F0)

inline static constexpr unsigned int HLEAANCOCJK_TypeDefinitionIndex = 12206;

struct alignas(8) HLEAANCOCJK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEAANCOCJK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLEAANCOCJK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEAANCOCJK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEAANCOCJK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::HLEAANCOCJK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLEAANCOCJK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLEAANCOCJK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HLEAANCOCJK PCKOHDGAIFC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLEAANCOCJK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLEAANCOCJK_PCKOHDGAIFC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KHMAAKJOMFL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KHMAAKJOMFL&, ::System::Int32&))((::PBYTE)hIl2Cpp + HLEAANCOCJK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::HLEAANCOCJK PCKOHDGAIFC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HLEAANCOCJK EIFONLCJOPG)
	{
		return ((::HLEAANCOCJK(*)(::FlatBuffers::ByteBuffer*, ::HLEAANCOCJK))((::PBYTE)hIl2Cpp + HLEAANCOCJK_PCKOHDGAIFC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KHMAAKJOMFL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KHMAAKJOMFL&))((::PBYTE)hIl2Cpp + HLEAANCOCJK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
