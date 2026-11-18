#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AEGNCPHCMOO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCPOGMDPHIM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FCPOGMDPHIM_BHGMEJCNMCD_1_OFFSET UNITYSDK_OFFSET(0x187BAA60)
#define FCPOGMDPHIM_BHGMEJCNMCD_OFFSET UNITYSDK_OFFSET(0x187BA9F0)
#define FCPOGMDPHIM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D1540)
#define FCPOGMDPHIM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FCPOGMDPHIM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FCPOGMDPHIM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D1580)
#define FCPOGMDPHIM___INIT_OFFSET UNITYSDK_OFFSET(0x7D1520)

inline static constexpr unsigned int FCPOGMDPHIM_TypeDefinitionIndex = 15878;

struct alignas(8) FCPOGMDPHIM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPOGMDPHIM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCPOGMDPHIM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FCPOGMDPHIM BHGMEJCNMCD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCPOGMDPHIM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCPOGMDPHIM_BHGMEJCNMCD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::FCPOGMDPHIM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCPOGMDPHIM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCPOGMDPHIM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPOGMDPHIM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPOGMDPHIM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FCPOGMDPHIM BHGMEJCNMCD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FCPOGMDPHIM EIFONLCJOPG)
	{
		return ((::FCPOGMDPHIM(*)(::FlatBuffers::ByteBuffer*, ::FCPOGMDPHIM))((::PBYTE)hIl2Cpp + FCPOGMDPHIM_BHGMEJCNMCD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AEGNCPHCMOO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AEGNCPHCMOO&))((::PBYTE)hIl2Cpp + FCPOGMDPHIM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
