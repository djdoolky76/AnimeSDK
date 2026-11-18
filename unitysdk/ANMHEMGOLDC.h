#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AFJGFDGEIDJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ANMHEMGOLDC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ANMHEMGOLDC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763F50)
#define ANMHEMGOLDC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ANMHEMGOLDC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ANMHEMGOLDC_IPIEFBDIJHN_1_OFFSET UNITYSDK_OFFSET(0x15775EA0)
#define ANMHEMGOLDC_IPIEFBDIJHN_OFFSET UNITYSDK_OFFSET(0x15775E50)
#define ANMHEMGOLDC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x763F80)
#define ANMHEMGOLDC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ANMHEMGOLDC_TypeDefinitionIndex = 14015;

struct alignas(8) ANMHEMGOLDC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMHEMGOLDC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANMHEMGOLDC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ANMHEMGOLDC IPIEFBDIJHN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ANMHEMGOLDC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANMHEMGOLDC_IPIEFBDIJHN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::ANMHEMGOLDC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ANMHEMGOLDC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANMHEMGOLDC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMHEMGOLDC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::String* MCOHLHMKLIP, ::AFJGFDGEIDJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::AFJGFDGEIDJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + ANMHEMGOLDC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AFJGFDGEIDJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AFJGFDGEIDJ&))((::PBYTE)hIl2Cpp + ANMHEMGOLDC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ANMHEMGOLDC IPIEFBDIJHN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ANMHEMGOLDC EIFONLCJOPG)
	{
		return ((::ANMHEMGOLDC(*)(::FlatBuffers::ByteBuffer*, ::ANMHEMGOLDC))((::PBYTE)hIl2Cpp + ANMHEMGOLDC_IPIEFBDIJHN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
