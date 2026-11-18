#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ADAJLLHFFLG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GKOGILCMDHA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GKOGILCMDHA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B4F50)
#define GKOGILCMDHA_FFGIHJKNJMA_1_OFFSET UNITYSDK_OFFSET(0x17BF2100)
#define GKOGILCMDHA_FFGIHJKNJMA_OFFSET UNITYSDK_OFFSET(0x17BF2090)
#define GKOGILCMDHA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GKOGILCMDHA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GKOGILCMDHA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B4F90)
#define GKOGILCMDHA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B4FA0)
#define GKOGILCMDHA___INIT_OFFSET UNITYSDK_OFFSET(0x7B4F30)

inline static constexpr unsigned int GKOGILCMDHA_TypeDefinitionIndex = 10870;

struct alignas(8) GKOGILCMDHA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOGILCMDHA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKOGILCMDHA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GKOGILCMDHA FFGIHJKNJMA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GKOGILCMDHA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKOGILCMDHA_FFGIHJKNJMA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::GKOGILCMDHA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GKOGILCMDHA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKOGILCMDHA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ADAJLLHFFLG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ADAJLLHFFLG&, ::System::Int32&))((::PBYTE)hIl2Cpp + GKOGILCMDHA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GKOGILCMDHA FFGIHJKNJMA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GKOGILCMDHA EIFONLCJOPG)
	{
		return ((::GKOGILCMDHA(*)(::FlatBuffers::ByteBuffer*, ::GKOGILCMDHA))((::PBYTE)hIl2Cpp + GKOGILCMDHA_FFGIHJKNJMA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOGILCMDHA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ADAJLLHFFLG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ADAJLLHFFLG&))((::PBYTE)hIl2Cpp + GKOGILCMDHA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOGILCMDHA_GHKKNCCLPAN_OFFSET))(this);
	}
};
