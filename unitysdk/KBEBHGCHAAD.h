#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DCMEEGFMMGP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KBEBHGCHAAD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KBEBHGCHAAD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76FEE0)
#define KBEBHGCHAAD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KBEBHGCHAAD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KBEBHGCHAAD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76FF30)
#define KBEBHGCHAAD_PLJCEJJENKC_1_OFFSET UNITYSDK_OFFSET(0x15AB1F40)
#define KBEBHGCHAAD_PLJCEJJENKC_OFFSET UNITYSDK_OFFSET(0x15AB1ED0)
#define KBEBHGCHAAD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76FF20)
#define KBEBHGCHAAD___INIT_OFFSET UNITYSDK_OFFSET(0x76FEC0)

inline static constexpr unsigned int KBEBHGCHAAD_TypeDefinitionIndex = 9342;

struct alignas(8) KBEBHGCHAAD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEBHGCHAAD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBEBHGCHAAD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KBEBHGCHAAD PLJCEJJENKC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KBEBHGCHAAD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBEBHGCHAAD_PLJCEJJENKC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::KBEBHGCHAAD PLJCEJJENKC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KBEBHGCHAAD EIFONLCJOPG)
	{
		return ((::KBEBHGCHAAD(*)(::FlatBuffers::ByteBuffer*, ::KBEBHGCHAAD))((::PBYTE)hIl2Cpp + KBEBHGCHAAD_PLJCEJJENKC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::KBEBHGCHAAD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KBEBHGCHAAD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBEBHGCHAAD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DCMEEGFMMGP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DCMEEGFMMGP&))((::PBYTE)hIl2Cpp + KBEBHGCHAAD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEBHGCHAAD_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEBHGCHAAD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::UInt32 MCOHLHMKLIP, ::DCMEEGFMMGP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::DCMEEGFMMGP&, ::System::Int32&))((::PBYTE)hIl2Cpp + KBEBHGCHAAD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
