#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LAHKEFCOJFI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FJIIACFOAKA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FJIIACFOAKA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76DE10)
#define FJIIACFOAKA_EOPGCECIDHH_1_OFFSET UNITYSDK_OFFSET(0x15A772B0)
#define FJIIACFOAKA_EOPGCECIDHH_OFFSET UNITYSDK_OFFSET(0x15A77240)
#define FJIIACFOAKA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FJIIACFOAKA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FJIIACFOAKA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76DE50)
#define FJIIACFOAKA___INIT_OFFSET UNITYSDK_OFFSET(0x76DDF0)

inline static constexpr unsigned int FJIIACFOAKA_TypeDefinitionIndex = 15430;

struct alignas(8) FJIIACFOAKA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIIACFOAKA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJIIACFOAKA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FJIIACFOAKA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJIIACFOAKA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJIIACFOAKA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIIACFOAKA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LAHKEFCOJFI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LAHKEFCOJFI&))((::PBYTE)hIl2Cpp + FJIIACFOAKA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIIACFOAKA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FJIIACFOAKA EOPGCECIDHH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJIIACFOAKA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJIIACFOAKA_EOPGCECIDHH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FJIIACFOAKA EOPGCECIDHH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FJIIACFOAKA EIFONLCJOPG)
	{
		return ((::FJIIACFOAKA(*)(::FlatBuffers::ByteBuffer*, ::FJIIACFOAKA))((::PBYTE)hIl2Cpp + FJIIACFOAKA_EOPGCECIDHH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
