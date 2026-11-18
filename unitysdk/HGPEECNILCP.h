#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KIJMAMJKLBD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HGPEECNILCP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HGPEECNILCP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x779E80)
#define HGPEECNILCP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HGPEECNILCP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HGPEECNILCP_JJPGNKEEKEC_1_OFFSET UNITYSDK_OFFSET(0x160F50C0)
#define HGPEECNILCP_JJPGNKEEKEC_OFFSET UNITYSDK_OFFSET(0x160F4FC0)
#define HGPEECNILCP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x779EC0)
#define HGPEECNILCP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x779E70)
#define HGPEECNILCP___INIT_OFFSET UNITYSDK_OFFSET(0x779E50)

inline static constexpr unsigned int HGPEECNILCP_TypeDefinitionIndex = 15763;

struct alignas(8) HGPEECNILCP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPEECNILCP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGPEECNILCP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HGPEECNILCP JJPGNKEEKEC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HGPEECNILCP EIFONLCJOPG)
	{
		return ((::HGPEECNILCP(*)(::FlatBuffers::ByteBuffer*, ::HGPEECNILCP))((::PBYTE)hIl2Cpp + HGPEECNILCP_JJPGNKEEKEC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPEECNILCP_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPEECNILCP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HGPEECNILCP JJPGNKEEKEC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HGPEECNILCP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGPEECNILCP_JJPGNKEEKEC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::HGPEECNILCP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HGPEECNILCP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGPEECNILCP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KIJMAMJKLBD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KIJMAMJKLBD&, ::System::Int32&))((::PBYTE)hIl2Cpp + HGPEECNILCP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KIJMAMJKLBD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KIJMAMJKLBD&))((::PBYTE)hIl2Cpp + HGPEECNILCP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
