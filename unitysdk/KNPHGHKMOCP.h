#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NHHPGEINJBD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KNPHGHKMOCP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KNPHGHKMOCP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8101C0)
#define KNPHGHKMOCP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KNPHGHKMOCP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KNPHGHKMOCP_MGKBNLGNEPA_1_OFFSET UNITYSDK_OFFSET(0x1B6454E0)
#define KNPHGHKMOCP_MGKBNLGNEPA_OFFSET UNITYSDK_OFFSET(0x1B645440)
#define KNPHGHKMOCP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8101B0)
#define KNPHGHKMOCP___INIT_OFFSET UNITYSDK_OFFSET(0x810190)

inline static constexpr unsigned int KNPHGHKMOCP_TypeDefinitionIndex = 16166;

struct alignas(8) KNPHGHKMOCP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPHGHKMOCP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNPHGHKMOCP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPHGHKMOCP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KNPHGHKMOCP MGKBNLGNEPA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KNPHGHKMOCP EIFONLCJOPG)
	{
		return ((::KNPHGHKMOCP(*)(::FlatBuffers::ByteBuffer*, ::KNPHGHKMOCP))((::PBYTE)hIl2Cpp + KNPHGHKMOCP_MGKBNLGNEPA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::KNPHGHKMOCP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KNPHGHKMOCP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNPHGHKMOCP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KNPHGHKMOCP MGKBNLGNEPA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KNPHGHKMOCP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNPHGHKMOCP_MGKBNLGNEPA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPHGHKMOCP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NHHPGEINJBD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NHHPGEINJBD&))((::PBYTE)hIl2Cpp + KNPHGHKMOCP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
