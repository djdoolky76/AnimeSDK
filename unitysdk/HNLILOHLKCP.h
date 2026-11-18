#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BPNHAPFMOJH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HNLILOHLKCP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HNLILOHLKCP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8146D0)
#define HNLILOHLKCP_FIHHCKCGIFG_1_OFFSET UNITYSDK_OFFSET(0x1B881C30)
#define HNLILOHLKCP_FIHHCKCGIFG_OFFSET UNITYSDK_OFFSET(0x1B881A90)
#define HNLILOHLKCP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HNLILOHLKCP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HNLILOHLKCP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x814710)
#define HNLILOHLKCP___INIT_OFFSET UNITYSDK_OFFSET(0x8146B0)

inline static constexpr unsigned int HNLILOHLKCP_TypeDefinitionIndex = 10805;

struct alignas(8) HNLILOHLKCP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLILOHLKCP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNLILOHLKCP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HNLILOHLKCP FIHHCKCGIFG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HNLILOHLKCP EIFONLCJOPG)
	{
		return ((::HNLILOHLKCP(*)(::FlatBuffers::ByteBuffer*, ::HNLILOHLKCP))((::PBYTE)hIl2Cpp + HNLILOHLKCP_FIHHCKCGIFG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BPNHAPFMOJH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BPNHAPFMOJH&))((::PBYTE)hIl2Cpp + HNLILOHLKCP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HNLILOHLKCP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNLILOHLKCP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNLILOHLKCP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLILOHLKCP_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLILOHLKCP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HNLILOHLKCP FIHHCKCGIFG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNLILOHLKCP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNLILOHLKCP_FIHHCKCGIFG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
