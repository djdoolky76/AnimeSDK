#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MAJLBFFBJNP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MAJLBFFBJNP_BEPLKKHMJCN_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MAJLBFFBJNP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MAJLBFFBJNP_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MAJLBFFBJNP_FCICGEALCFA_OFFSET UNITYSDK_OFFSET(0x755C70)
#define MAJLBFFBJNP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MAJLBFFBJNP_GFIPPFMGAPC_OFFSET UNITYSDK_OFFSET(0x756220)
#define MAJLBFFBJNP_HOBFMMLPLGD_OFFSET UNITYSDK_OFFSET(0x756B10)
#define MAJLBFFBJNP_JBPOEAMIMGJ_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define MAJLBFFBJNP_KGMDDJHHODA_OFFSET UNITYSDK_OFFSET(0x757190)
#define MAJLBFFBJNP_LDIENHMALPL_OFFSET UNITYSDK_OFFSET(0x754970)
#define MAJLBFFBJNP_MHBPIBHBLGK_OFFSET UNITYSDK_OFFSET(0x756570)
#define MAJLBFFBJNP_NPEDOGCFCOJ_OFFSET UNITYSDK_OFFSET(0x758780)
#define MAJLBFFBJNP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C080210)
#define MAJLBFFBJNP_ONKPHKCKFOG_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MAJLBFFBJNP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MAJLBFFBJNP_TypeDefinitionIndex = 17310;

struct alignas(4) MAJLBFFBJNP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJLBFFBJNP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MAJLBFFBJNP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean MHBPIBHBLGK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MAJLBFFBJNP_MHBPIBHBLGK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MAJLBFFBJNP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MAJLBFFBJNP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MAJLBFFBJNP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LDIENHMALPL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJLBFFBJNP_LDIENHMALPL_OFFSET))(this);
	}

	::System::String* ONKPHKCKFOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJLBFFBJNP_ONKPHKCKFOG_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJLBFFBJNP_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 NPEDOGCFCOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJLBFFBJNP_NPEDOGCFCOJ_OFFSET))(this);
	}

	/*
	::MAJLBFFBJNP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MAJLBFFBJNP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MAJLBFFBJNP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HOBFMMLPLGD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJLBFFBJNP_HOBFMMLPLGD_OFFSET))(this);
	}

	::System::Int32 BEPLKKHMJCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJLBFFBJNP_BEPLKKHMJCN_OFFSET))(this);
	}

	::System::Int32 FCICGEALCFA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJLBFFBJNP_FCICGEALCFA_OFFSET))(this);
	}

	::System::Int32 GFIPPFMGAPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJLBFFBJNP_GFIPPFMGAPC_OFFSET))(this);
	}

	::System::Int32 JBPOEAMIMGJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJLBFFBJNP_JBPOEAMIMGJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJLBFFBJNP_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* KGMDDJHHODA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJLBFFBJNP_KGMDDJHHODA_OFFSET))(this);
	}
};
