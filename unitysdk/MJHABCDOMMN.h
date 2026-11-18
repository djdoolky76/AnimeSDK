#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HJAFHELDAPG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MJHABCDOMMN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MJHABCDOMMN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AE930)
#define MJHABCDOMMN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MJHABCDOMMN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MJHABCDOMMN_GOIIJHNIGOJ_1_OFFSET UNITYSDK_OFFSET(0x1D0B7210)
#define MJHABCDOMMN_GOIIJHNIGOJ_OFFSET UNITYSDK_OFFSET(0x1D0B7070)
#define MJHABCDOMMN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AE980)
#define MJHABCDOMMN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AE970)
#define MJHABCDOMMN___INIT_OFFSET UNITYSDK_OFFSET(0x8AE910)

inline static constexpr unsigned int MJHABCDOMMN_TypeDefinitionIndex = 14664;

struct alignas(8) MJHABCDOMMN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHABCDOMMN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJHABCDOMMN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MJHABCDOMMN GOIIJHNIGOJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MJHABCDOMMN EIFONLCJOPG)
	{
		return ((::MJHABCDOMMN(*)(::FlatBuffers::ByteBuffer*, ::MJHABCDOMMN))((::PBYTE)hIl2Cpp + MJHABCDOMMN_GOIIJHNIGOJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HJAFHELDAPG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HJAFHELDAPG&))((::PBYTE)hIl2Cpp + MJHABCDOMMN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::MJHABCDOMMN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJHABCDOMMN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJHABCDOMMN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHABCDOMMN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MJHABCDOMMN GOIIJHNIGOJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJHABCDOMMN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJHABCDOMMN_GOIIJHNIGOJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HJAFHELDAPG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HJAFHELDAPG&, ::System::Int32&))((::PBYTE)hIl2Cpp + MJHABCDOMMN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHABCDOMMN_GHKKNCCLPAN_OFFSET))(this);
	}
};
