#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BNHOOADOOGL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NLKFIDPIOHB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NLKFIDPIOHB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x805870)
#define NLKFIDPIOHB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NLKFIDPIOHB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NLKFIDPIOHB_KKMLHCAEACB_1_OFFSET UNITYSDK_OFFSET(0x1AD820B0)
#define NLKFIDPIOHB_KKMLHCAEACB_OFFSET UNITYSDK_OFFSET(0x1AD82040)
#define NLKFIDPIOHB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x805850)
#define NLKFIDPIOHB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x805860)
#define NLKFIDPIOHB___INIT_OFFSET UNITYSDK_OFFSET(0x805830)

inline static constexpr unsigned int NLKFIDPIOHB_TypeDefinitionIndex = 13967;

struct alignas(8) NLKFIDPIOHB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLKFIDPIOHB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLKFIDPIOHB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLKFIDPIOHB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BNHOOADOOGL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BNHOOADOOGL&, ::System::Int32&))((::PBYTE)hIl2Cpp + NLKFIDPIOHB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NLKFIDPIOHB KKMLHCAEACB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NLKFIDPIOHB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLKFIDPIOHB_KKMLHCAEACB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BNHOOADOOGL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BNHOOADOOGL&))((::PBYTE)hIl2Cpp + NLKFIDPIOHB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::NLKFIDPIOHB KKMLHCAEACB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NLKFIDPIOHB EIFONLCJOPG)
	{
		return ((::NLKFIDPIOHB(*)(::FlatBuffers::ByteBuffer*, ::NLKFIDPIOHB))((::PBYTE)hIl2Cpp + NLKFIDPIOHB_KKMLHCAEACB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLKFIDPIOHB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::NLKFIDPIOHB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NLKFIDPIOHB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLKFIDPIOHB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
