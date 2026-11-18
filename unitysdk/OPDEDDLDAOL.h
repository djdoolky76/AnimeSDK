#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LLLHIBHFGGK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OPDEDDLDAOL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OPDEDDLDAOL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8ABA60)
#define OPDEDDLDAOL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OPDEDDLDAOL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OPDEDDLDAOL_IGBNFINBPMJ_1_OFFSET UNITYSDK_OFFSET(0x1D0000C0)
#define OPDEDDLDAOL_IGBNFINBPMJ_OFFSET UNITYSDK_OFFSET(0x1D000050)
#define OPDEDDLDAOL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8ABAA0)
#define OPDEDDLDAOL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8ABA50)
#define OPDEDDLDAOL___INIT_OFFSET UNITYSDK_OFFSET(0x8ABA30)

inline static constexpr unsigned int OPDEDDLDAOL_TypeDefinitionIndex = 12959;

struct alignas(8) OPDEDDLDAOL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDEDDLDAOL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPDEDDLDAOL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDEDDLDAOL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OPDEDDLDAOL IGBNFINBPMJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OPDEDDLDAOL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPDEDDLDAOL_IGBNFINBPMJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::OPDEDDLDAOL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OPDEDDLDAOL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPDEDDLDAOL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LLLHIBHFGGK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LLLHIBHFGGK&))((::PBYTE)hIl2Cpp + OPDEDDLDAOL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDEDDLDAOL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OPDEDDLDAOL IGBNFINBPMJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OPDEDDLDAOL EIFONLCJOPG)
	{
		return ((::OPDEDDLDAOL(*)(::FlatBuffers::ByteBuffer*, ::OPDEDDLDAOL))((::PBYTE)hIl2Cpp + OPDEDDLDAOL_IGBNFINBPMJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LLLHIBHFGGK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LLLHIBHFGGK&, ::System::Int32&))((::PBYTE)hIl2Cpp + OPDEDDLDAOL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
