#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DAPBHMCJOFI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPJOENCDIGD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DPJOENCDIGD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8171C0)
#define DPJOENCDIGD_DNPBEIHGDIE_1_OFFSET UNITYSDK_OFFSET(0x1B9AF080)
#define DPJOENCDIGD_DNPBEIHGDIE_OFFSET UNITYSDK_OFFSET(0x1B9AEDE0)
#define DPJOENCDIGD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DPJOENCDIGD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DPJOENCDIGD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x817200)
#define DPJOENCDIGD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x817210)
#define DPJOENCDIGD___INIT_OFFSET UNITYSDK_OFFSET(0x8171A0)

inline static constexpr unsigned int DPJOENCDIGD_TypeDefinitionIndex = 13141;

struct alignas(8) DPJOENCDIGD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJOENCDIGD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPJOENCDIGD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DPJOENCDIGD DNPBEIHGDIE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DPJOENCDIGD EIFONLCJOPG)
	{
		return ((::DPJOENCDIGD(*)(::FlatBuffers::ByteBuffer*, ::DPJOENCDIGD))((::PBYTE)hIl2Cpp + DPJOENCDIGD_DNPBEIHGDIE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::DPJOENCDIGD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPJOENCDIGD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPJOENCDIGD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DAPBHMCJOFI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DAPBHMCJOFI&, ::System::Int32&))((::PBYTE)hIl2Cpp + DPJOENCDIGD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DPJOENCDIGD DNPBEIHGDIE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPJOENCDIGD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPJOENCDIGD_DNPBEIHGDIE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJOENCDIGD_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJOENCDIGD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DAPBHMCJOFI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DAPBHMCJOFI&))((::PBYTE)hIl2Cpp + DPJOENCDIGD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
