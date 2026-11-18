#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LHBJNJJCBPP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OOBHGLENAGO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OOBHGLENAGO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x805E70)
#define OOBHGLENAGO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OOBHGLENAGO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OOBHGLENAGO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x805E60)
#define OOBHGLENAGO_OKBMBHABDNJ_1_OFFSET UNITYSDK_OFFSET(0x1AD91890)
#define OOBHGLENAGO_OKBMBHABDNJ_OFFSET UNITYSDK_OFFSET(0x1AD91820)
#define OOBHGLENAGO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x805EB0)
#define OOBHGLENAGO___INIT_OFFSET UNITYSDK_OFFSET(0x805E40)

inline static constexpr unsigned int OOBHGLENAGO_TypeDefinitionIndex = 15820;

struct alignas(8) OOBHGLENAGO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBHGLENAGO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OOBHGLENAGO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBHGLENAGO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LHBJNJJCBPP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHBJNJJCBPP&, ::System::Int32&))((::PBYTE)hIl2Cpp + OOBHGLENAGO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LHBJNJJCBPP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHBJNJJCBPP&))((::PBYTE)hIl2Cpp + OOBHGLENAGO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::OOBHGLENAGO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OOBHGLENAGO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OOBHGLENAGO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OOBHGLENAGO OKBMBHABDNJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OOBHGLENAGO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OOBHGLENAGO_OKBMBHABDNJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBHGLENAGO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OOBHGLENAGO OKBMBHABDNJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OOBHGLENAGO EIFONLCJOPG)
	{
		return ((::OOBHGLENAGO(*)(::FlatBuffers::ByteBuffer*, ::OOBHGLENAGO))((::PBYTE)hIl2Cpp + OOBHGLENAGO_OKBMBHABDNJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
