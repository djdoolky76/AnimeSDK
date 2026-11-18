#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/POHCIPPPEON.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNPLAKJOCHF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MNPLAKJOCHF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763F50)
#define MNPLAKJOCHF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MNPLAKJOCHF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MNPLAKJOCHF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D7CF0)
#define MNPLAKJOCHF_OCFPAHHMHMO_1_OFFSET UNITYSDK_OFFSET(0x18E12340)
#define MNPLAKJOCHF_OCFPAHHMHMO_OFFSET UNITYSDK_OFFSET(0x18E122F0)
#define MNPLAKJOCHF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MNPLAKJOCHF_TypeDefinitionIndex = 11902;

struct alignas(8) MNPLAKJOCHF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPLAKJOCHF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNPLAKJOCHF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MNPLAKJOCHF OCFPAHHMHMO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNPLAKJOCHF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNPLAKJOCHF_OCFPAHHMHMO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::String* MCOHLHMKLIP, ::POHCIPPPEON& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::POHCIPPPEON&, ::System::Int32&))((::PBYTE)hIl2Cpp + MNPLAKJOCHF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPLAKJOCHF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MNPLAKJOCHF OCFPAHHMHMO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MNPLAKJOCHF EIFONLCJOPG)
	{
		return ((::MNPLAKJOCHF(*)(::FlatBuffers::ByteBuffer*, ::MNPLAKJOCHF))((::PBYTE)hIl2Cpp + MNPLAKJOCHF_OCFPAHHMHMO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::MNPLAKJOCHF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNPLAKJOCHF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNPLAKJOCHF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::POHCIPPPEON& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::POHCIPPPEON&))((::PBYTE)hIl2Cpp + MNPLAKJOCHF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
