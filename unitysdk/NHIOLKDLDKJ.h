#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GKPHNFEGOLG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NHIOLKDLDKJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NHIOLKDLDKJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81F360)
#define NHIOLKDLDKJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NHIOLKDLDKJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NHIOLKDLDKJ_IFLHCDKICFA_1_OFFSET UNITYSDK_OFFSET(0x1C094400)
#define NHIOLKDLDKJ_IFLHCDKICFA_OFFSET UNITYSDK_OFFSET(0x1C0943A0)
#define NHIOLKDLDKJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81F3A0)
#define NHIOLKDLDKJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81F3B0)
#define NHIOLKDLDKJ___INIT_OFFSET UNITYSDK_OFFSET(0x81F340)

inline static constexpr unsigned int NHIOLKDLDKJ_TypeDefinitionIndex = 16781;

struct alignas(8) NHIOLKDLDKJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIOLKDLDKJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHIOLKDLDKJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIOLKDLDKJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::NHIOLKDLDKJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NHIOLKDLDKJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHIOLKDLDKJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GKPHNFEGOLG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GKPHNFEGOLG&))((::PBYTE)hIl2Cpp + NHIOLKDLDKJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GKPHNFEGOLG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GKPHNFEGOLG&, ::System::Int32&))((::PBYTE)hIl2Cpp + NHIOLKDLDKJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIOLKDLDKJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NHIOLKDLDKJ IFLHCDKICFA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NHIOLKDLDKJ EIFONLCJOPG)
	{
		return ((::NHIOLKDLDKJ(*)(::FlatBuffers::ByteBuffer*, ::NHIOLKDLDKJ))((::PBYTE)hIl2Cpp + NHIOLKDLDKJ_IFLHCDKICFA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NHIOLKDLDKJ IFLHCDKICFA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NHIOLKDLDKJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHIOLKDLDKJ_IFLHCDKICFA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
