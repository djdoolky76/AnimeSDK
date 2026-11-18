#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CPHGDCPKCCC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IEHJLGGNHJB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IEHJLGGNHJB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80E1B0)
#define IEHJLGGNHJB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IEHJLGGNHJB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IEHJLGGNHJB_MPOMMELMHOA_1_OFFSET UNITYSDK_OFFSET(0x1B4EC070)
#define IEHJLGGNHJB_MPOMMELMHOA_OFFSET UNITYSDK_OFFSET(0x1B4EBED0)
#define IEHJLGGNHJB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80E1A0)
#define IEHJLGGNHJB___INIT_OFFSET UNITYSDK_OFFSET(0x80E180)

inline static constexpr unsigned int IEHJLGGNHJB_TypeDefinitionIndex = 17734;

struct alignas(8) IEHJLGGNHJB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEHJLGGNHJB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IEHJLGGNHJB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IEHJLGGNHJB MPOMMELMHOA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IEHJLGGNHJB EIFONLCJOPG)
	{
		return ((::IEHJLGGNHJB(*)(::FlatBuffers::ByteBuffer*, ::IEHJLGGNHJB))((::PBYTE)hIl2Cpp + IEHJLGGNHJB_MPOMMELMHOA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEHJLGGNHJB_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEHJLGGNHJB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CPHGDCPKCCC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CPHGDCPKCCC&))((::PBYTE)hIl2Cpp + IEHJLGGNHJB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IEHJLGGNHJB MPOMMELMHOA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IEHJLGGNHJB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IEHJLGGNHJB_MPOMMELMHOA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::IEHJLGGNHJB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IEHJLGGNHJB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IEHJLGGNHJB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
