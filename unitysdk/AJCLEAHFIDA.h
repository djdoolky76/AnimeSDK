#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FFCCKNLIDBN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AJCLEAHFIDA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AJCLEAHFIDA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F48B0)
#define AJCLEAHFIDA_FONFAFBCEMN_1_OFFSET UNITYSDK_OFFSET(0x1A15E6A0)
#define AJCLEAHFIDA_FONFAFBCEMN_OFFSET UNITYSDK_OFFSET(0x1A15E630)
#define AJCLEAHFIDA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AJCLEAHFIDA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AJCLEAHFIDA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F48F0)
#define AJCLEAHFIDA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F48A0)
#define AJCLEAHFIDA___INIT_OFFSET UNITYSDK_OFFSET(0x7F4880)

inline static constexpr unsigned int AJCLEAHFIDA_TypeDefinitionIndex = 13294;

struct alignas(8) AJCLEAHFIDA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCLEAHFIDA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJCLEAHFIDA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AJCLEAHFIDA FONFAFBCEMN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AJCLEAHFIDA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJCLEAHFIDA_FONFAFBCEMN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCLEAHFIDA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FFCCKNLIDBN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FFCCKNLIDBN&))((::PBYTE)hIl2Cpp + AJCLEAHFIDA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::AJCLEAHFIDA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AJCLEAHFIDA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJCLEAHFIDA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCLEAHFIDA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FFCCKNLIDBN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FFCCKNLIDBN&, ::System::Int32&))((::PBYTE)hIl2Cpp + AJCLEAHFIDA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::AJCLEAHFIDA FONFAFBCEMN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AJCLEAHFIDA EIFONLCJOPG)
	{
		return ((::AJCLEAHFIDA(*)(::FlatBuffers::ByteBuffer*, ::AJCLEAHFIDA))((::PBYTE)hIl2Cpp + AJCLEAHFIDA_FONFAFBCEMN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
