#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DAHLPBOFCLN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FDGIHGPHECP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FDGIHGPHECP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F2840)
#define FDGIHGPHECP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FDGIHGPHECP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FDGIHGPHECP_HEPKHDJMAFN_1_OFFSET UNITYSDK_OFFSET(0x19F51F90)
#define FDGIHGPHECP_HEPKHDJMAFN_OFFSET UNITYSDK_OFFSET(0x19F51E90)
#define FDGIHGPHECP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F2880)
#define FDGIHGPHECP___INIT_OFFSET UNITYSDK_OFFSET(0x7F2820)

inline static constexpr unsigned int FDGIHGPHECP_TypeDefinitionIndex = 14707;

struct alignas(8) FDGIHGPHECP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGIHGPHECP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDGIHGPHECP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FDGIHGPHECP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FDGIHGPHECP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDGIHGPHECP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGIHGPHECP_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGIHGPHECP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FDGIHGPHECP HEPKHDJMAFN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FDGIHGPHECP EIFONLCJOPG)
	{
		return ((::FDGIHGPHECP(*)(::FlatBuffers::ByteBuffer*, ::FDGIHGPHECP))((::PBYTE)hIl2Cpp + FDGIHGPHECP_HEPKHDJMAFN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DAHLPBOFCLN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DAHLPBOFCLN&))((::PBYTE)hIl2Cpp + FDGIHGPHECP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FDGIHGPHECP HEPKHDJMAFN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FDGIHGPHECP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDGIHGPHECP_HEPKHDJMAFN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
