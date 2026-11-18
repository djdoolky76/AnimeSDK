#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LEMABFCHHCB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DLKDPOGHNHB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DLKDPOGHNHB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ADC50)
#define DLKDPOGHNHB_EKFEPLKPLKE_1_OFFSET UNITYSDK_OFFSET(0x17785850)
#define DLKDPOGHNHB_EKFEPLKPLKE_OFFSET UNITYSDK_OFFSET(0x17785750)
#define DLKDPOGHNHB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DLKDPOGHNHB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DLKDPOGHNHB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ADC40)
#define DLKDPOGHNHB___INIT_OFFSET UNITYSDK_OFFSET(0x7ADC20)

inline static constexpr unsigned int DLKDPOGHNHB_TypeDefinitionIndex = 16074;

struct alignas(8) DLKDPOGHNHB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKDPOGHNHB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLKDPOGHNHB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKDPOGHNHB_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKDPOGHNHB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::DLKDPOGHNHB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DLKDPOGHNHB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLKDPOGHNHB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DLKDPOGHNHB EKFEPLKPLKE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DLKDPOGHNHB EIFONLCJOPG)
	{
		return ((::DLKDPOGHNHB(*)(::FlatBuffers::ByteBuffer*, ::DLKDPOGHNHB))((::PBYTE)hIl2Cpp + DLKDPOGHNHB_EKFEPLKPLKE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LEMABFCHHCB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LEMABFCHHCB&))((::PBYTE)hIl2Cpp + DLKDPOGHNHB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DLKDPOGHNHB EKFEPLKPLKE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DLKDPOGHNHB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLKDPOGHNHB_EKFEPLKPLKE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
