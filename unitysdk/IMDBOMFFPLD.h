#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PJOLALJCJAE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IMDBOMFFPLD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IMDBOMFFPLD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E3F50)
#define IMDBOMFFPLD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IMDBOMFFPLD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IMDBOMFFPLD_JLNLHHLCMCP_1_OFFSET UNITYSDK_OFFSET(0x19542D60)
#define IMDBOMFFPLD_JLNLHHLCMCP_OFFSET UNITYSDK_OFFSET(0x19542C20)
#define IMDBOMFFPLD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E3F40)
#define IMDBOMFFPLD___INIT_OFFSET UNITYSDK_OFFSET(0x7E3F20)

inline static constexpr unsigned int IMDBOMFFPLD_TypeDefinitionIndex = 11904;

struct alignas(8) IMDBOMFFPLD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDBOMFFPLD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMDBOMFFPLD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDBOMFFPLD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IMDBOMFFPLD JLNLHHLCMCP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IMDBOMFFPLD EIFONLCJOPG)
	{
		return ((::IMDBOMFFPLD(*)(::FlatBuffers::ByteBuffer*, ::IMDBOMFFPLD))((::PBYTE)hIl2Cpp + IMDBOMFFPLD_JLNLHHLCMCP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDBOMFFPLD_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PJOLALJCJAE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PJOLALJCJAE&))((::PBYTE)hIl2Cpp + IMDBOMFFPLD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::IMDBOMFFPLD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IMDBOMFFPLD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMDBOMFFPLD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IMDBOMFFPLD JLNLHHLCMCP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IMDBOMFFPLD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMDBOMFFPLD_JLNLHHLCMCP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
