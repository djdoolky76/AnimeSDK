#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ICCOFCKLNAP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MAJDJFIFDJI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MAJDJFIFDJI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C3EB0)
#define MAJDJFIFDJI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MAJDJFIFDJI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MAJDJFIFDJI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C3EA0)
#define MAJDJFIFDJI_OMLOEJAFOMI_1_OFFSET UNITYSDK_OFFSET(0x17FC16D0)
#define MAJDJFIFDJI_OMLOEJAFOMI_OFFSET UNITYSDK_OFFSET(0x17FC1630)
#define MAJDJFIFDJI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C3EF0)
#define MAJDJFIFDJI___INIT_OFFSET UNITYSDK_OFFSET(0x7C3E80)

inline static constexpr unsigned int MAJDJFIFDJI_TypeDefinitionIndex = 11145;

struct alignas(8) MAJDJFIFDJI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJDJFIFDJI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MAJDJFIFDJI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ICCOFCKLNAP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ICCOFCKLNAP&, ::System::Int32&))((::PBYTE)hIl2Cpp + MAJDJFIFDJI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MAJDJFIFDJI OMLOEJAFOMI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MAJDJFIFDJI EIFONLCJOPG)
	{
		return ((::MAJDJFIFDJI(*)(::FlatBuffers::ByteBuffer*, ::MAJDJFIFDJI))((::PBYTE)hIl2Cpp + MAJDJFIFDJI_OMLOEJAFOMI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::MAJDJFIFDJI OMLOEJAFOMI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MAJDJFIFDJI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MAJDJFIFDJI_OMLOEJAFOMI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::MAJDJFIFDJI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MAJDJFIFDJI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MAJDJFIFDJI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ICCOFCKLNAP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ICCOFCKLNAP&))((::PBYTE)hIl2Cpp + MAJDJFIFDJI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJDJFIFDJI_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJDJFIFDJI_PPOMNIFACOL_OFFSET))(this);
	}
};
