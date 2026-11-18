#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MKGOHIIOJAH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ABMKCPPDGAB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ABMKCPPDGAB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E9910)
#define ABMKCPPDGAB_EOCLAFCLKFP_1_OFFSET UNITYSDK_OFFSET(0x19AB7A50)
#define ABMKCPPDGAB_EOCLAFCLKFP_OFFSET UNITYSDK_OFFSET(0x19AB79E0)
#define ABMKCPPDGAB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ABMKCPPDGAB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ABMKCPPDGAB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E98F0)
#define ABMKCPPDGAB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E9900)
#define ABMKCPPDGAB___INIT_OFFSET UNITYSDK_OFFSET(0x7E98D0)

inline static constexpr unsigned int ABMKCPPDGAB_TypeDefinitionIndex = 15791;

struct alignas(8) ABMKCPPDGAB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMKCPPDGAB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABMKCPPDGAB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MKGOHIIOJAH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MKGOHIIOJAH&, ::System::Int32&))((::PBYTE)hIl2Cpp + ABMKCPPDGAB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::ABMKCPPDGAB EOCLAFCLKFP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ABMKCPPDGAB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABMKCPPDGAB_EOCLAFCLKFP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MKGOHIIOJAH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MKGOHIIOJAH&))((::PBYTE)hIl2Cpp + ABMKCPPDGAB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMKCPPDGAB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ABMKCPPDGAB EOCLAFCLKFP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ABMKCPPDGAB EIFONLCJOPG)
	{
		return ((::ABMKCPPDGAB(*)(::FlatBuffers::ByteBuffer*, ::ABMKCPPDGAB))((::PBYTE)hIl2Cpp + ABMKCPPDGAB_EOCLAFCLKFP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMKCPPDGAB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::ABMKCPPDGAB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ABMKCPPDGAB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABMKCPPDGAB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
