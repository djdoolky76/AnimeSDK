#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DFBCFHELHGD_APAGOLCLAIL_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DFBCFHELHGD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DFBCFHELHGD_BKJGLNMFDHH_OFFSET UNITYSDK_OFFSET(0x760F60)
#define DFBCFHELHGD_BLKIAJAOILD_OFFSET UNITYSDK_OFFSET(0x754920)
#define DFBCFHELHGD_CHCAKOFMPFM_OFFSET UNITYSDK_OFFSET(0x7EDBA0)
#define DFBCFHELHGD_CNAGJAEMPLB_OFFSET UNITYSDK_OFFSET(0x757710)
#define DFBCFHELHGD_DFFGDIFNJEB_OFFSET UNITYSDK_OFFSET(0x7794D0)
#define DFBCFHELHGD_FKGHIGBMBEP_OFFSET UNITYSDK_OFFSET(0x761710)
#define DFBCFHELHGD_GCCJNIGBOIP_OFFSET UNITYSDK_OFFSET(0x758780)
#define DFBCFHELHGD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DFBCFHELHGD_GGFIOHCPGEE_OFFSET UNITYSDK_OFFSET(0x755710)
#define DFBCFHELHGD_HCNKOCIOOLE_OFFSET UNITYSDK_OFFSET(0x755C70)
#define DFBCFHELHGD_IMCGHOKHENE_OFFSET UNITYSDK_OFFSET(0x760910)
#define DFBCFHELHGD_IMJGBEDHCCF_OFFSET UNITYSDK_OFFSET(0x757450)
#define DFBCFHELHGD_KALADOFBEGH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DFBCFHELHGD_KEGPJIPHJJE_OFFSET UNITYSDK_OFFSET(0x7EDBF0)
#define DFBCFHELHGD_LPMGBOEMEDH_OFFSET UNITYSDK_OFFSET(0x779440)
#define DFBCFHELHGD_NCPJNCGIHEN_OFFSET UNITYSDK_OFFSET(0x757C10)
#define DFBCFHELHGD_NHGDOHLGEPI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DFBCFHELHGD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19C04430)
#define DFBCFHELHGD_OFPHMADLNIK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DFBCFHELHGD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DFBCFHELHGD_TypeDefinitionIndex = 14995;

struct alignas(4) DFBCFHELHGD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBCFHELHGD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFBCFHELHGD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DFBCFHELHGD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DFBCFHELHGD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DFBCFHELHGD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* GGFIOHCPGEE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBCFHELHGD_GGFIOHCPGEE_OFFSET))(this);
	}

	::System::UInt64 CHCAKOFMPFM()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBCFHELHGD_CHCAKOFMPFM_OFFSET))(this);
	}

	::System::String* FKGHIGBMBEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBCFHELHGD_FKGHIGBMBEP_OFFSET))(this);
	}

	::System::Int32 HCNKOCIOOLE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBCFHELHGD_HCNKOCIOOLE_OFFSET))(this);
	}

	::System::Boolean LPMGBOEMEDH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBCFHELHGD_LPMGBOEMEDH_OFFSET))(this);
	}

	::System::Boolean DFFGDIFNJEB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBCFHELHGD_DFFGDIFNJEB_OFFSET))(this);
	}

	/*
	::DFBCFHELHGD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFBCFHELHGD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFBCFHELHGD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* NHGDOHLGEPI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBCFHELHGD_NHGDOHLGEPI_OFFSET))(this);
	}

	::System::Boolean BKJGLNMFDHH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBCFHELHGD_BKJGLNMFDHH_OFFSET))(this);
	}

	::System::Int32 BLKIAJAOILD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBCFHELHGD_BLKIAJAOILD_OFFSET))(this);
	}

	::System::Int32 OFPHMADLNIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBCFHELHGD_OFPHMADLNIK_OFFSET))(this);
	}

	::System::Int32 NCPJNCGIHEN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBCFHELHGD_NCPJNCGIHEN_OFFSET))(this);
	}

	::System::Int32 IMCGHOKHENE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBCFHELHGD_IMCGHOKHENE_OFFSET))(this);
	}

	::System::String* APAGOLCLAIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBCFHELHGD_APAGOLCLAIL_OFFSET))(this);
	}

	::System::Int32 KALADOFBEGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBCFHELHGD_KALADOFBEGH_OFFSET))(this);
	}

	::System::UInt64 KEGPJIPHJJE()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBCFHELHGD_KEGPJIPHJJE_OFFSET))(this);
	}

	::System::Int32 GCCJNIGBOIP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBCFHELHGD_GCCJNIGBOIP_OFFSET))(this);
	}

	::System::Int32 IMJGBEDHCCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBCFHELHGD_IMJGBEDHCCF_OFFSET))(this);
	}

	::System::Boolean CNAGJAEMPLB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBCFHELHGD_CNAGJAEMPLB_OFFSET))(this);
	}
};
