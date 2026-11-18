#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NNCLKNMEGED.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NOPOKMEBFJL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NOPOKMEBFJL_BFFHCBHGDCP_1_OFFSET UNITYSDK_OFFSET(0x1CCF33D0)
#define NOPOKMEBFJL_BFFHCBHGDCP_OFFSET UNITYSDK_OFFSET(0x1CCF32D0)
#define NOPOKMEBFJL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85DEA0)
#define NOPOKMEBFJL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NOPOKMEBFJL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NOPOKMEBFJL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85DE90)
#define NOPOKMEBFJL___INIT_OFFSET UNITYSDK_OFFSET(0x85DE70)

inline static constexpr unsigned int NOPOKMEBFJL_TypeDefinitionIndex = 9369;

struct alignas(8) NOPOKMEBFJL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPOKMEBFJL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NOPOKMEBFJL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NNCLKNMEGED& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NNCLKNMEGED&))((::PBYTE)hIl2Cpp + NOPOKMEBFJL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::NOPOKMEBFJL BFFHCBHGDCP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NOPOKMEBFJL EIFONLCJOPG)
	{
		return ((::NOPOKMEBFJL(*)(::FlatBuffers::ByteBuffer*, ::NOPOKMEBFJL))((::PBYTE)hIl2Cpp + NOPOKMEBFJL_BFFHCBHGDCP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPOKMEBFJL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NOPOKMEBFJL BFFHCBHGDCP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NOPOKMEBFJL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NOPOKMEBFJL_BFFHCBHGDCP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPOKMEBFJL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::NOPOKMEBFJL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NOPOKMEBFJL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NOPOKMEBFJL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
