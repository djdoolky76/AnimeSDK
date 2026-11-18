#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DIMNAFIDHOL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONMBGEOIDBG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ONMBGEOIDBG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x805DD0)
#define ONMBGEOIDBG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ONMBGEOIDBG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ONMBGEOIDBG_IPIHFBGENDF_1_OFFSET UNITYSDK_OFFSET(0x1AD90FC0)
#define ONMBGEOIDBG_IPIHFBGENDF_OFFSET UNITYSDK_OFFSET(0x1AD90F50)
#define ONMBGEOIDBG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x805E10)
#define ONMBGEOIDBG___INIT_OFFSET UNITYSDK_OFFSET(0x805DB0)

inline static constexpr unsigned int ONMBGEOIDBG_TypeDefinitionIndex = 16095;

struct alignas(8) ONMBGEOIDBG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMBGEOIDBG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONMBGEOIDBG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ONMBGEOIDBG IPIHFBGENDF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONMBGEOIDBG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONMBGEOIDBG_IPIHFBGENDF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::ONMBGEOIDBG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONMBGEOIDBG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONMBGEOIDBG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ONMBGEOIDBG IPIHFBGENDF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ONMBGEOIDBG EIFONLCJOPG)
	{
		return ((::ONMBGEOIDBG(*)(::FlatBuffers::ByteBuffer*, ::ONMBGEOIDBG))((::PBYTE)hIl2Cpp + ONMBGEOIDBG_IPIHFBGENDF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMBGEOIDBG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DIMNAFIDHOL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DIMNAFIDHOL&))((::PBYTE)hIl2Cpp + ONMBGEOIDBG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMBGEOIDBG_GHKKNCCLPAN_OFFSET))(this);
	}
};
