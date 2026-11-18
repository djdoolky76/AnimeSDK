#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MKPIAFKIEGP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DGOGIFONBCP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DGOGIFONBCP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8076B0)
#define DGOGIFONBCP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DGOGIFONBCP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DGOGIFONBCP_OHPFCGEMLPA_1_OFFSET UNITYSDK_OFFSET(0x1ADC5F20)
#define DGOGIFONBCP_OHPFCGEMLPA_OFFSET UNITYSDK_OFFSET(0x1ADC5EB0)
#define DGOGIFONBCP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8076A0)
#define DGOGIFONBCP___INIT_OFFSET UNITYSDK_OFFSET(0x807680)

inline static constexpr unsigned int DGOGIFONBCP_TypeDefinitionIndex = 10698;

struct alignas(8) DGOGIFONBCP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGOGIFONBCP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGOGIFONBCP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGOGIFONBCP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGOGIFONBCP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DGOGIFONBCP OHPFCGEMLPA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DGOGIFONBCP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGOGIFONBCP_OHPFCGEMLPA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::DGOGIFONBCP OHPFCGEMLPA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DGOGIFONBCP EIFONLCJOPG)
	{
		return ((::DGOGIFONBCP(*)(::FlatBuffers::ByteBuffer*, ::DGOGIFONBCP))((::PBYTE)hIl2Cpp + DGOGIFONBCP_OHPFCGEMLPA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MKPIAFKIEGP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MKPIAFKIEGP&))((::PBYTE)hIl2Cpp + DGOGIFONBCP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::DGOGIFONBCP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DGOGIFONBCP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGOGIFONBCP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
