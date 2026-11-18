#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LMHBLKJIOCA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EELLEKDMAPE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EELLEKDMAPE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D0F80)
#define EELLEKDMAPE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EELLEKDMAPE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EELLEKDMAPE_IPOCEGEBOLC_1_OFFSET UNITYSDK_OFFSET(0x187A73F0)
#define EELLEKDMAPE_IPOCEGEBOLC_OFFSET UNITYSDK_OFFSET(0x187A7350)
#define EELLEKDMAPE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D0FD0)
#define EELLEKDMAPE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D0FC0)
#define EELLEKDMAPE___INIT_OFFSET UNITYSDK_OFFSET(0x7D0F60)

inline static constexpr unsigned int EELLEKDMAPE_TypeDefinitionIndex = 11335;

struct alignas(8) EELLEKDMAPE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELLEKDMAPE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EELLEKDMAPE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LMHBLKJIOCA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LMHBLKJIOCA&))((::PBYTE)hIl2Cpp + EELLEKDMAPE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EELLEKDMAPE IPOCEGEBOLC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EELLEKDMAPE EIFONLCJOPG)
	{
		return ((::EELLEKDMAPE(*)(::FlatBuffers::ByteBuffer*, ::EELLEKDMAPE))((::PBYTE)hIl2Cpp + EELLEKDMAPE_IPOCEGEBOLC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::EELLEKDMAPE IPOCEGEBOLC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EELLEKDMAPE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EELLEKDMAPE_IPOCEGEBOLC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::EELLEKDMAPE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EELLEKDMAPE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EELLEKDMAPE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EELLEKDMAPE_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELLEKDMAPE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LMHBLKJIOCA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LMHBLKJIOCA&, ::System::Int32&))((::PBYTE)hIl2Cpp + EELLEKDMAPE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
