#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MKGDALKNGBG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EKBKEPDEPAA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EKBKEPDEPAA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x807CA0)
#define EKBKEPDEPAA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EKBKEPDEPAA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EKBKEPDEPAA_JEGIIGJGNFL_1_OFFSET UNITYSDK_OFFSET(0x1ADD5190)
#define EKBKEPDEPAA_JEGIIGJGNFL_OFFSET UNITYSDK_OFFSET(0x1ADD5120)
#define EKBKEPDEPAA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x807CE0)
#define EKBKEPDEPAA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x807C90)
#define EKBKEPDEPAA___INIT_OFFSET UNITYSDK_OFFSET(0x807C70)

inline static constexpr unsigned int EKBKEPDEPAA_TypeDefinitionIndex = 14129;

struct alignas(8) EKBKEPDEPAA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBKEPDEPAA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EKBKEPDEPAA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBKEPDEPAA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::EKBKEPDEPAA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EKBKEPDEPAA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EKBKEPDEPAA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MKGDALKNGBG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MKGDALKNGBG&))((::PBYTE)hIl2Cpp + EKBKEPDEPAA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MKGDALKNGBG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MKGDALKNGBG&, ::System::Int32&))((::PBYTE)hIl2Cpp + EKBKEPDEPAA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBKEPDEPAA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EKBKEPDEPAA JEGIIGJGNFL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EKBKEPDEPAA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EKBKEPDEPAA_JEGIIGJGNFL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::EKBKEPDEPAA JEGIIGJGNFL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EKBKEPDEPAA EIFONLCJOPG)
	{
		return ((::EKBKEPDEPAA(*)(::FlatBuffers::ByteBuffer*, ::EKBKEPDEPAA))((::PBYTE)hIl2Cpp + EKBKEPDEPAA_JEGIIGJGNFL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
