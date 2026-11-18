#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BHAEBOGLLME.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KEBLPHMJJAD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KEBLPHMJJAD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E5A90)
#define KEBLPHMJJAD_EALKJGNECMI_1_OFFSET UNITYSDK_OFFSET(0x1957B350)
#define KEBLPHMJJAD_EALKJGNECMI_OFFSET UNITYSDK_OFFSET(0x1957B2E0)
#define KEBLPHMJJAD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KEBLPHMJJAD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KEBLPHMJJAD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E5AD0)
#define KEBLPHMJJAD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E5A80)
#define KEBLPHMJJAD___INIT_OFFSET UNITYSDK_OFFSET(0x7E5A60)

inline static constexpr unsigned int KEBLPHMJJAD_TypeDefinitionIndex = 15979;

struct alignas(8) KEBLPHMJJAD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBLPHMJJAD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KEBLPHMJJAD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBLPHMJJAD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KEBLPHMJJAD EALKJGNECMI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KEBLPHMJJAD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KEBLPHMJJAD_EALKJGNECMI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::KEBLPHMJJAD EALKJGNECMI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KEBLPHMJJAD EIFONLCJOPG)
	{
		return ((::KEBLPHMJJAD(*)(::FlatBuffers::ByteBuffer*, ::KEBLPHMJJAD))((::PBYTE)hIl2Cpp + KEBLPHMJJAD_EALKJGNECMI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBLPHMJJAD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::KEBLPHMJJAD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KEBLPHMJJAD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KEBLPHMJJAD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BHAEBOGLLME& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BHAEBOGLLME&))((::PBYTE)hIl2Cpp + KEBLPHMJJAD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BHAEBOGLLME& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BHAEBOGLLME&, ::System::Int32&))((::PBYTE)hIl2Cpp + KEBLPHMJJAD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
