#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HCNIKHKNBHM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EPCLDCAEIAM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EPCLDCAEIAM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8080D0)
#define EPCLDCAEIAM_EBMAGDMOOKN_1_OFFSET UNITYSDK_OFFSET(0x1ADDBF80)
#define EPCLDCAEIAM_EBMAGDMOOKN_OFFSET UNITYSDK_OFFSET(0x1ADDBF10)
#define EPCLDCAEIAM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EPCLDCAEIAM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EPCLDCAEIAM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8080C0)
#define EPCLDCAEIAM___INIT_OFFSET UNITYSDK_OFFSET(0x8080A0)

inline static constexpr unsigned int EPCLDCAEIAM_TypeDefinitionIndex = 13796;

struct alignas(8) EPCLDCAEIAM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCLDCAEIAM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPCLDCAEIAM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCLDCAEIAM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCLDCAEIAM_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HCNIKHKNBHM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HCNIKHKNBHM&))((::PBYTE)hIl2Cpp + EPCLDCAEIAM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::EPCLDCAEIAM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EPCLDCAEIAM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPCLDCAEIAM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EPCLDCAEIAM EBMAGDMOOKN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EPCLDCAEIAM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPCLDCAEIAM_EBMAGDMOOKN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::EPCLDCAEIAM EBMAGDMOOKN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EPCLDCAEIAM EIFONLCJOPG)
	{
		return ((::EPCLDCAEIAM(*)(::FlatBuffers::ByteBuffer*, ::EPCLDCAEIAM))((::PBYTE)hIl2Cpp + EPCLDCAEIAM_EBMAGDMOOKN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
