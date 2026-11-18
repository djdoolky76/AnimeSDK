#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DBCHHJMEIOB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KNMMFMPPCGB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KNMMFMPPCGB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x758D50)
#define KNMMFMPPCGB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KNMMFMPPCGB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KNMMFMPPCGB_GMFNMHNNKIK_1_OFFSET UNITYSDK_OFFSET(0x15309310)
#define KNMMFMPPCGB_GMFNMHNNKIK_OFFSET UNITYSDK_OFFSET(0x153092A0)
#define KNMMFMPPCGB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x758D30)
#define KNMMFMPPCGB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x758D40)
#define KNMMFMPPCGB___INIT_OFFSET UNITYSDK_OFFSET(0x758D10)

inline static constexpr unsigned int KNMMFMPPCGB_TypeDefinitionIndex = 12367;

struct alignas(8) KNMMFMPPCGB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMMFMPPCGB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNMMFMPPCGB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DBCHHJMEIOB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DBCHHJMEIOB&))((::PBYTE)hIl2Cpp + KNMMFMPPCGB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DBCHHJMEIOB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DBCHHJMEIOB&, ::System::Int32&))((::PBYTE)hIl2Cpp + KNMMFMPPCGB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMMFMPPCGB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMMFMPPCGB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KNMMFMPPCGB GMFNMHNNKIK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KNMMFMPPCGB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNMMFMPPCGB_GMFNMHNNKIK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::KNMMFMPPCGB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KNMMFMPPCGB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNMMFMPPCGB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KNMMFMPPCGB GMFNMHNNKIK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KNMMFMPPCGB EIFONLCJOPG)
	{
		return ((::KNMMFMPPCGB(*)(::FlatBuffers::ByteBuffer*, ::KNMMFMPPCGB))((::PBYTE)hIl2Cpp + KNMMFMPPCGB_GMFNMHNNKIK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
