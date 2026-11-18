#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CJDABOCHMHK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JIDFHHPPPPB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JIDFHHPPPPB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81C1B0)
#define JIDFHHPPPPB_CAFDIKCELFD_1_OFFSET UNITYSDK_OFFSET(0x1BAF8B30)
#define JIDFHHPPPPB_CAFDIKCELFD_OFFSET UNITYSDK_OFFSET(0x1BAF8AC0)
#define JIDFHHPPPPB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JIDFHHPPPPB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JIDFHHPPPPB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81C1F0)
#define JIDFHHPPPPB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81C200)
#define JIDFHHPPPPB___INIT_OFFSET UNITYSDK_OFFSET(0x81C190)

inline static constexpr unsigned int JIDFHHPPPPB_TypeDefinitionIndex = 9949;

struct alignas(8) JIDFHHPPPPB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDFHHPPPPB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIDFHHPPPPB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JIDFHHPPPPB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JIDFHHPPPPB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIDFHHPPPPB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JIDFHHPPPPB CAFDIKCELFD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JIDFHHPPPPB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIDFHHPPPPB_CAFDIKCELFD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::JIDFHHPPPPB CAFDIKCELFD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JIDFHHPPPPB EIFONLCJOPG)
	{
		return ((::JIDFHHPPPPB(*)(::FlatBuffers::ByteBuffer*, ::JIDFHHPPPPB))((::PBYTE)hIl2Cpp + JIDFHHPPPPB_CAFDIKCELFD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CJDABOCHMHK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CJDABOCHMHK&, ::System::Int32&))((::PBYTE)hIl2Cpp + JIDFHHPPPPB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CJDABOCHMHK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CJDABOCHMHK&))((::PBYTE)hIl2Cpp + JIDFHHPPPPB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDFHHPPPPB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDFHHPPPPB_GHKKNCCLPAN_OFFSET))(this);
	}
};
