#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ANCEJAPLCGG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MCIGMFDGIPL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MCIGMFDGIPL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x802180)
#define MCIGMFDGIPL_FBDDKLKLPDL_1_OFFSET UNITYSDK_OFFSET(0x1AB04A60)
#define MCIGMFDGIPL_FBDDKLKLPDL_OFFSET UNITYSDK_OFFSET(0x1AB049F0)
#define MCIGMFDGIPL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MCIGMFDGIPL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MCIGMFDGIPL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8021C0)
#define MCIGMFDGIPL___INIT_OFFSET UNITYSDK_OFFSET(0x802160)

inline static constexpr unsigned int MCIGMFDGIPL_TypeDefinitionIndex = 13230;

struct alignas(8) MCIGMFDGIPL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIGMFDGIPL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCIGMFDGIPL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MCIGMFDGIPL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MCIGMFDGIPL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCIGMFDGIPL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIGMFDGIPL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MCIGMFDGIPL FBDDKLKLPDL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MCIGMFDGIPL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCIGMFDGIPL_FBDDKLKLPDL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::MCIGMFDGIPL FBDDKLKLPDL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MCIGMFDGIPL EIFONLCJOPG)
	{
		return ((::MCIGMFDGIPL(*)(::FlatBuffers::ByteBuffer*, ::MCIGMFDGIPL))((::PBYTE)hIl2Cpp + MCIGMFDGIPL_FBDDKLKLPDL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ANCEJAPLCGG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ANCEJAPLCGG&))((::PBYTE)hIl2Cpp + MCIGMFDGIPL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIGMFDGIPL_GHKKNCCLPAN_OFFSET))(this);
	}
};
