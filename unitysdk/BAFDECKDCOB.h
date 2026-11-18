#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KKOLDCLNMED.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BAFDECKDCOB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BAFDECKDCOB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x806D00)
#define BAFDECKDCOB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BAFDECKDCOB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BAFDECKDCOB_LHDJLEOFNOA_1_OFFSET UNITYSDK_OFFSET(0x1ADACEF0)
#define BAFDECKDCOB_LHDJLEOFNOA_OFFSET UNITYSDK_OFFSET(0x1ADACE90)
#define BAFDECKDCOB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x806D40)
#define BAFDECKDCOB___INIT_OFFSET UNITYSDK_OFFSET(0x806CE0)

inline static constexpr unsigned int BAFDECKDCOB_TypeDefinitionIndex = 13962;

struct alignas(8) BAFDECKDCOB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFDECKDCOB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAFDECKDCOB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BAFDECKDCOB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BAFDECKDCOB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAFDECKDCOB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFDECKDCOB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KKOLDCLNMED& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KKOLDCLNMED&))((::PBYTE)hIl2Cpp + BAFDECKDCOB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::BAFDECKDCOB LHDJLEOFNOA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BAFDECKDCOB EIFONLCJOPG)
	{
		return ((::BAFDECKDCOB(*)(::FlatBuffers::ByteBuffer*, ::BAFDECKDCOB))((::PBYTE)hIl2Cpp + BAFDECKDCOB_LHDJLEOFNOA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::BAFDECKDCOB LHDJLEOFNOA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BAFDECKDCOB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAFDECKDCOB_LHDJLEOFNOA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFDECKDCOB_PPOMNIFACOL_OFFSET))(this);
	}
};
