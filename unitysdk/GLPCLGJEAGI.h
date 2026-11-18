#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GLPCLGJEAGI_AIDEICBDPPH_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define GLPCLGJEAGI_AIMJPFIHJIB_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define GLPCLGJEAGI_BDNHHHONACL_OFFSET UNITYSDK_OFFSET(0x757190)
#define GLPCLGJEAGI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GLPCLGJEAGI_CAOBCCDNPFK_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define GLPCLGJEAGI_CHFCDNKDMOJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GLPCLGJEAGI_EBCKHIOOHFO_OFFSET UNITYSDK_OFFSET(0x757290)
#define GLPCLGJEAGI_ELGEIFHENIF_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define GLPCLGJEAGI_FGNHJNGANAF_1_OFFSET UNITYSDK_OFFSET(0x1A5C3860)
#define GLPCLGJEAGI_FGNHJNGANAF_OFFSET UNITYSDK_OFFSET(0x1A5C3820)
#define GLPCLGJEAGI_FNCPCFPGLLK_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define GLPCLGJEAGI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GLPCLGJEAGI_GGFIIAHCAKD_OFFSET UNITYSDK_OFFSET(0x757C10)
#define GLPCLGJEAGI_MAODJLLBACK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GLPCLGJEAGI_ONAJIAJPMGD_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define GLPCLGJEAGI_PFMEJDPOPEG_OFFSET UNITYSDK_OFFSET(0x756440)
#define GLPCLGJEAGI_PLBKCLPGFEF_OFFSET UNITYSDK_OFFSET(0x757D20)
#define GLPCLGJEAGI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GLPCLGJEAGI_TypeDefinitionIndex = 15372;

struct alignas(4) GLPCLGJEAGI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCLGJEAGI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLPCLGJEAGI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 AIMJPFIHJIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCLGJEAGI_AIMJPFIHJIB_OFFSET))(this);
	}

	::System::Int32 GGFIIAHCAKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCLGJEAGI_GGFIIAHCAKD_OFFSET))(this);
	}

	/*
	static ::GLPCLGJEAGI FGNHJNGANAF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLPCLGJEAGI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLPCLGJEAGI_FGNHJNGANAF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::String* PLBKCLPGFEF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCLGJEAGI_PLBKCLPGFEF_OFFSET))(this);
	}

	::System::String* EBCKHIOOHFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCLGJEAGI_EBCKHIOOHFO_OFFSET))(this);
	}

	::System::Int32 CHFCDNKDMOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCLGJEAGI_CHFCDNKDMOJ_OFFSET))(this);
	}

	::System::String* BDNHHHONACL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCLGJEAGI_BDNHHHONACL_OFFSET))(this);
	}

	::System::Int32 PFMEJDPOPEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCLGJEAGI_PFMEJDPOPEG_OFFSET))(this);
	}

	::System::Int32 FNCPCFPGLLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCLGJEAGI_FNCPCFPGLLK_OFFSET))(this);
	}

	/*
	::GLPCLGJEAGI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLPCLGJEAGI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLPCLGJEAGI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MAODJLLBACK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCLGJEAGI_MAODJLLBACK_OFFSET))(this);
	}

	::System::String* ONAJIAJPMGD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCLGJEAGI_ONAJIAJPMGD_OFFSET))(this);
	}

	/*
	static ::GLPCLGJEAGI FGNHJNGANAF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GLPCLGJEAGI EIFONLCJOPG)
	{
		return ((::GLPCLGJEAGI(*)(::FlatBuffers::ByteBuffer*, ::GLPCLGJEAGI))((::PBYTE)hIl2Cpp + GLPCLGJEAGI_FGNHJNGANAF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::String* ELGEIFHENIF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCLGJEAGI_ELGEIFHENIF_OFFSET))(this);
	}

	::System::String* AIDEICBDPPH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCLGJEAGI_AIDEICBDPPH_OFFSET))(this);
	}

	::System::String* CAOBCCDNPFK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCLGJEAGI_CAOBCCDNPFK_OFFSET))(this);
	}
};
