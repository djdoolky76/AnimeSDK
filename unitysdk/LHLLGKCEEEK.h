#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CGMNNENJPMP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LHLLGKCEEEK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LHLLGKCEEEK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80B3F0)
#define LHLLGKCEEEK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LHLLGKCEEEK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LHLLGKCEEEK_LACCPENPHON_1_OFFSET UNITYSDK_OFFSET(0x1B302CF0)
#define LHLLGKCEEEK_LACCPENPHON_OFFSET UNITYSDK_OFFSET(0x1B302C50)
#define LHLLGKCEEEK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80B3E0)
#define LHLLGKCEEEK___INIT_OFFSET UNITYSDK_OFFSET(0x80B3C0)

inline static constexpr unsigned int LHLLGKCEEEK_TypeDefinitionIndex = 13463;

struct alignas(8) LHLLGKCEEEK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLLGKCEEEK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHLLGKCEEEK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLLGKCEEEK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LHLLGKCEEEK LACCPENPHON(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LHLLGKCEEEK EIFONLCJOPG)
	{
		return ((::LHLLGKCEEEK(*)(::FlatBuffers::ByteBuffer*, ::LHLLGKCEEEK))((::PBYTE)hIl2Cpp + LHLLGKCEEEK_LACCPENPHON_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLLGKCEEEK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::LHLLGKCEEEK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LHLLGKCEEEK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHLLGKCEEEK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LHLLGKCEEEK LACCPENPHON_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LHLLGKCEEEK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHLLGKCEEEK_LACCPENPHON_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CGMNNENJPMP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CGMNNENJPMP&))((::PBYTE)hIl2Cpp + LHLLGKCEEEK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
