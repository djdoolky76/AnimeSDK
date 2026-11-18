#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DJLEBAJIIDE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DCNNIJAPDHB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DCNNIJAPDHB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x788A40)
#define DCNNIJAPDHB_CMILPHFEFEI_1_OFFSET UNITYSDK_OFFSET(0x166164F0)
#define DCNNIJAPDHB_CMILPHFEFEI_OFFSET UNITYSDK_OFFSET(0x16616450)
#define DCNNIJAPDHB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DCNNIJAPDHB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DCNNIJAPDHB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x788A30)
#define DCNNIJAPDHB___INIT_OFFSET UNITYSDK_OFFSET(0x788A10)

inline static constexpr unsigned int DCNNIJAPDHB_TypeDefinitionIndex = 15519;

struct alignas(8) DCNNIJAPDHB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNNIJAPDHB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCNNIJAPDHB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DJLEBAJIIDE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DJLEBAJIIDE&))((::PBYTE)hIl2Cpp + DCNNIJAPDHB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNNIJAPDHB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DCNNIJAPDHB CMILPHFEFEI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DCNNIJAPDHB EIFONLCJOPG)
	{
		return ((::DCNNIJAPDHB(*)(::FlatBuffers::ByteBuffer*, ::DCNNIJAPDHB))((::PBYTE)hIl2Cpp + DCNNIJAPDHB_CMILPHFEFEI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::DCNNIJAPDHB CMILPHFEFEI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DCNNIJAPDHB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCNNIJAPDHB_CMILPHFEFEI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNNIJAPDHB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::DCNNIJAPDHB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DCNNIJAPDHB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCNNIJAPDHB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
