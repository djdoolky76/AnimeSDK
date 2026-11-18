#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HCIAOLNLOBJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JGIONGAKCLI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JGIONGAKCLI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76FA00)
#define JGIONGAKCLI_FNLKEGGFEKJ_1_OFFSET UNITYSDK_OFFSET(0x15AA9630)
#define JGIONGAKCLI_FNLKEGGFEKJ_OFFSET UNITYSDK_OFFSET(0x15AA95C0)
#define JGIONGAKCLI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JGIONGAKCLI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JGIONGAKCLI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76F9F0)
#define JGIONGAKCLI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76FA40)
#define JGIONGAKCLI___INIT_OFFSET UNITYSDK_OFFSET(0x76F9D0)

inline static constexpr unsigned int JGIONGAKCLI_TypeDefinitionIndex = 17727;

struct alignas(8) JGIONGAKCLI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGIONGAKCLI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGIONGAKCLI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HCIAOLNLOBJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HCIAOLNLOBJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + JGIONGAKCLI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::JGIONGAKCLI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JGIONGAKCLI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGIONGAKCLI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGIONGAKCLI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JGIONGAKCLI FNLKEGGFEKJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JGIONGAKCLI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGIONGAKCLI_FNLKEGGFEKJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HCIAOLNLOBJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HCIAOLNLOBJ&))((::PBYTE)hIl2Cpp + JGIONGAKCLI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JGIONGAKCLI FNLKEGGFEKJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JGIONGAKCLI EIFONLCJOPG)
	{
		return ((::JGIONGAKCLI(*)(::FlatBuffers::ByteBuffer*, ::JGIONGAKCLI))((::PBYTE)hIl2Cpp + JGIONGAKCLI_FNLKEGGFEKJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGIONGAKCLI_PPOMNIFACOL_OFFSET))(this);
	}
};
