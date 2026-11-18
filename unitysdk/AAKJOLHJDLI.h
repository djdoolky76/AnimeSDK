#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DMCLDJAKANK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AAKJOLHJDLI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AAKJOLHJDLI_BGODBDLKFLE_1_OFFSET UNITYSDK_OFFSET(0x17EE2940)
#define AAKJOLHJDLI_BGODBDLKFLE_OFFSET UNITYSDK_OFFSET(0x17EE28D0)
#define AAKJOLHJDLI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C1200)
#define AAKJOLHJDLI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AAKJOLHJDLI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AAKJOLHJDLI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C1250)
#define AAKJOLHJDLI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C1240)
#define AAKJOLHJDLI___INIT_OFFSET UNITYSDK_OFFSET(0x7C11E0)

inline static constexpr unsigned int AAKJOLHJDLI_TypeDefinitionIndex = 16843;

struct alignas(8) AAKJOLHJDLI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKJOLHJDLI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AAKJOLHJDLI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::AAKJOLHJDLI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AAKJOLHJDLI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AAKJOLHJDLI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AAKJOLHJDLI BGODBDLKFLE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AAKJOLHJDLI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AAKJOLHJDLI_BGODBDLKFLE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DMCLDJAKANK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DMCLDJAKANK&))((::PBYTE)hIl2Cpp + AAKJOLHJDLI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKJOLHJDLI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKJOLHJDLI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DMCLDJAKANK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DMCLDJAKANK&, ::System::Int32&))((::PBYTE)hIl2Cpp + AAKJOLHJDLI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::AAKJOLHJDLI BGODBDLKFLE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AAKJOLHJDLI EIFONLCJOPG)
	{
		return ((::AAKJOLHJDLI(*)(::FlatBuffers::ByteBuffer*, ::AAKJOLHJDLI))((::PBYTE)hIl2Cpp + AAKJOLHJDLI_BGODBDLKFLE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
