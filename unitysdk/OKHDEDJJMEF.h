#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IJLICDACADC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OKHDEDJJMEF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OKHDEDJJMEF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x936F20)
#define OKHDEDJJMEF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OKHDEDJJMEF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OKHDEDJJMEF_JCDPBJEIAPJ_1_OFFSET UNITYSDK_OFFSET(0x1EDB4EF0)
#define OKHDEDJJMEF_JCDPBJEIAPJ_OFFSET UNITYSDK_OFFSET(0x1EDB4E80)
#define OKHDEDJJMEF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x936F10)
#define OKHDEDJJMEF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x936F00)
#define OKHDEDJJMEF___INIT_OFFSET UNITYSDK_OFFSET(0x936EE0)

inline static constexpr unsigned int OKHDEDJJMEF_TypeDefinitionIndex = 16099;

struct alignas(8) OKHDEDJJMEF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHDEDJJMEF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OKHDEDJJMEF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IJLICDACADC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IJLICDACADC&))((::PBYTE)hIl2Cpp + OKHDEDJJMEF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHDEDJJMEF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHDEDJJMEF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IJLICDACADC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IJLICDACADC&, ::System::Int32&))((::PBYTE)hIl2Cpp + OKHDEDJJMEF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::OKHDEDJJMEF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OKHDEDJJMEF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OKHDEDJJMEF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OKHDEDJJMEF JCDPBJEIAPJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OKHDEDJJMEF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OKHDEDJJMEF_JCDPBJEIAPJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::OKHDEDJJMEF JCDPBJEIAPJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OKHDEDJJMEF EIFONLCJOPG)
	{
		return ((::OKHDEDJJMEF(*)(::FlatBuffers::ByteBuffer*, ::OKHDEDJJMEF))((::PBYTE)hIl2Cpp + OKHDEDJJMEF_JCDPBJEIAPJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
