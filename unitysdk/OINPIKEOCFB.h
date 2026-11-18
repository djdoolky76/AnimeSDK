#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OINPIKEOCFB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OINPIKEOCFB_BELDFMFKKAE_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define OINPIKEOCFB_BFLFPJHJNHG_OFFSET UNITYSDK_OFFSET(0x762D20)
#define OINPIKEOCFB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OINPIKEOCFB_DMMKMKCPHMF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OINPIKEOCFB_EBEOOELEMHA_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define OINPIKEOCFB_ECLDACDJBEK_OFFSET UNITYSDK_OFFSET(0x76FDA0)
#define OINPIKEOCFB_ELMFFCGFBFI_OFFSET UNITYSDK_OFFSET(0x760650)
#define OINPIKEOCFB_FDBFAFOHMNO_OFFSET UNITYSDK_OFFSET(0x76FE20)
#define OINPIKEOCFB_FHECGDADENO_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define OINPIKEOCFB_FNKFDMBDMEP_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define OINPIKEOCFB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OINPIKEOCFB_IAJIMJOJEID_OFFSET UNITYSDK_OFFSET(0x754970)
#define OINPIKEOCFB_IFEFKJAJAGN_OFFSET UNITYSDK_OFFSET(0x757330)
#define OINPIKEOCFB_IOFOAFPMDFK_OFFSET UNITYSDK_OFFSET(0x756B90)
#define OINPIKEOCFB_JLHILBBGBIB_OFFSET UNITYSDK_OFFSET(0x763920)
#define OINPIKEOCFB_KAMPBHIPDCP_OFFSET UNITYSDK_OFFSET(0x77AD70)
#define OINPIKEOCFB_KGONECHOHKM_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define OINPIKEOCFB_KJOECIBJDDP_OFFSET UNITYSDK_OFFSET(0x756490)
#define OINPIKEOCFB_OPOCDCOEDHO_OFFSET UNITYSDK_OFFSET(0x754920)
#define OINPIKEOCFB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OINPIKEOCFB_TypeDefinitionIndex = 9656;

struct alignas(4) OINPIKEOCFB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OINPIKEOCFB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OINPIKEOCFB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* FNKFDMBDMEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OINPIKEOCFB_FNKFDMBDMEP_OFFSET))(this);
	}

	::System::Int32 DMMKMKCPHMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OINPIKEOCFB_DMMKMKCPHMF_OFFSET))(this);
	}

	::System::Boolean ECLDACDJBEK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OINPIKEOCFB_ECLDACDJBEK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean JLHILBBGBIB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OINPIKEOCFB_JLHILBBGBIB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean KJOECIBJDDP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OINPIKEOCFB_KJOECIBJDDP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EBEOOELEMHA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OINPIKEOCFB_EBEOOELEMHA_OFFSET))(this);
	}

	/*
	::OINPIKEOCFB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OINPIKEOCFB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OINPIKEOCFB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BFLFPJHJNHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OINPIKEOCFB_BFLFPJHJNHG_OFFSET))(this);
	}

	::System::Boolean FDBFAFOHMNO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OINPIKEOCFB_FDBFAFOHMNO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ELMFFCGFBFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OINPIKEOCFB_ELMFFCGFBFI_OFFSET))(this);
	}

	::System::Int32 OPOCDCOEDHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OINPIKEOCFB_OPOCDCOEDHO_OFFSET))(this);
	}

	::System::Boolean KAMPBHIPDCP(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + OINPIKEOCFB_KAMPBHIPDCP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OINPIKEOCFB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 KGONECHOHKM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OINPIKEOCFB_KGONECHOHKM_OFFSET))(this);
	}

	::System::Int32 IAJIMJOJEID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OINPIKEOCFB_IAJIMJOJEID_OFFSET))(this);
	}

	::System::Int32 FHECGDADENO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OINPIKEOCFB_FHECGDADENO_OFFSET))(this);
	}

	::System::Int32 BELDFMFKKAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OINPIKEOCFB_BELDFMFKKAE_OFFSET))(this);
	}

	::System::Int32 IOFOAFPMDFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OINPIKEOCFB_IOFOAFPMDFK_OFFSET))(this);
	}

	::System::Int32 IFEFKJAJAGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OINPIKEOCFB_IFEFKJAJAGN_OFFSET))(this);
	}
};
