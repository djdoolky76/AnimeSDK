#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FHIJIBKFGEL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CPEABGNNNDD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CPEABGNNNDD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D0A40)
#define CPEABGNNNDD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CPEABGNNNDD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CPEABGNNNDD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D0A90)
#define CPEABGNNNDD_OPCHDMNBKJM_1_OFFSET UNITYSDK_OFFSET(0x18794360)
#define CPEABGNNNDD_OPCHDMNBKJM_OFFSET UNITYSDK_OFFSET(0x187941A0)
#define CPEABGNNNDD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D0A80)
#define CPEABGNNNDD___INIT_OFFSET UNITYSDK_OFFSET(0x7D0A20)

inline static constexpr unsigned int CPEABGNNNDD_TypeDefinitionIndex = 15378;

struct alignas(8) CPEABGNNNDD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEABGNNNDD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPEABGNNNDD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEABGNNNDD_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FHIJIBKFGEL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FHIJIBKFGEL&))((::PBYTE)hIl2Cpp + CPEABGNNNDD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::CPEABGNNNDD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CPEABGNNNDD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPEABGNNNDD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEABGNNNDD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CPEABGNNNDD OPCHDMNBKJM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CPEABGNNNDD EIFONLCJOPG)
	{
		return ((::CPEABGNNNDD(*)(::FlatBuffers::ByteBuffer*, ::CPEABGNNNDD))((::PBYTE)hIl2Cpp + CPEABGNNNDD_OPCHDMNBKJM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FHIJIBKFGEL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FHIJIBKFGEL&, ::System::Int32&))((::PBYTE)hIl2Cpp + CPEABGNNNDD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::CPEABGNNNDD OPCHDMNBKJM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CPEABGNNNDD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPEABGNNNDD_OPCHDMNBKJM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
