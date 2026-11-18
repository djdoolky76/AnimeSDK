#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FFGAIHGFEBG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DHAMNFHHOEO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DHAMNFHHOEO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B2400)
#define DHAMNFHHOEO_ELNJENAFHKA_1_OFFSET UNITYSDK_OFFSET(0x17A98B20)
#define DHAMNFHHOEO_ELNJENAFHKA_OFFSET UNITYSDK_OFFSET(0x17A98AB0)
#define DHAMNFHHOEO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DHAMNFHHOEO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DHAMNFHHOEO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B2440)
#define DHAMNFHHOEO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B23F0)
#define DHAMNFHHOEO___INIT_OFFSET UNITYSDK_OFFSET(0x7B23D0)

inline static constexpr unsigned int DHAMNFHHOEO_TypeDefinitionIndex = 14353;

struct alignas(8) DHAMNFHHOEO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHAMNFHHOEO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHAMNFHHOEO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHAMNFHHOEO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DHAMNFHHOEO ELNJENAFHKA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DHAMNFHHOEO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHAMNFHHOEO_ELNJENAFHKA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHAMNFHHOEO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::DHAMNFHHOEO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DHAMNFHHOEO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHAMNFHHOEO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DHAMNFHHOEO ELNJENAFHKA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DHAMNFHHOEO EIFONLCJOPG)
	{
		return ((::DHAMNFHHOEO(*)(::FlatBuffers::ByteBuffer*, ::DHAMNFHHOEO))((::PBYTE)hIl2Cpp + DHAMNFHHOEO_ELNJENAFHKA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FFGAIHGFEBG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FFGAIHGFEBG&, ::System::Int32&))((::PBYTE)hIl2Cpp + DHAMNFHHOEO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FFGAIHGFEBG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FFGAIHGFEBG&))((::PBYTE)hIl2Cpp + DHAMNFHHOEO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
