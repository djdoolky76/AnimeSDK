#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JFMGLDNHHDA_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x755890)
#define JFMGLDNHHDA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JFMGLDNHHDA_DFIGJOKOPNC_OFFSET UNITYSDK_OFFSET(0x755A00)
#define JFMGLDNHHDA_DHDIOCOGIDP_OFFSET UNITYSDK_OFFSET(0x755C70)
#define JFMGLDNHHDA_DMIPOCPIEJF_OFFSET UNITYSDK_OFFSET(0x756B10)
#define JFMGLDNHHDA_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x755190)
#define JFMGLDNHHDA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JFMGLDNHHDA_HKIDKOCDCFL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JFMGLDNHHDA_JBDFIODADMN_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JFMGLDNHHDA_JFBHIGJAOGB_OFFSET UNITYSDK_OFFSET(0x757190)
#define JFMGLDNHHDA_KKJBOOCKLJE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JFMGLDNHHDA_LLAJDBBDAMJ_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define JFMGLDNHHDA_LMLPFBHKOIL_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define JFMGLDNHHDA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19548DD0)
#define JFMGLDNHHDA_ONNMDGIEFOD_OFFSET UNITYSDK_OFFSET(0x754970)
#define JFMGLDNHHDA_PMBCAKACFJP_OFFSET UNITYSDK_OFFSET(0x757290)
#define JFMGLDNHHDA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JFMGLDNHHDA_TypeDefinitionIndex = 17327;

struct alignas(4) JFMGLDNHHDA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMGLDNHHDA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFMGLDNHHDA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* PMBCAKACFJP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMGLDNHHDA_PMBCAKACFJP_OFFSET))(this);
	}

	::System::Int32 ONNMDGIEFOD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMGLDNHHDA_ONNMDGIEFOD_OFFSET))(this);
	}

	::System::Int32 JBDFIODADMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMGLDNHHDA_JBDFIODADMN_OFFSET))(this);
	}

	::System::Int32 DHDIOCOGIDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMGLDNHHDA_DHDIOCOGIDP_OFFSET))(this);
	}

	::System::String* KKJBOOCKLJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMGLDNHHDA_KKJBOOCKLJE_OFFSET))(this);
	}

	::System::String* DMIPOCPIEJF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMGLDNHHDA_DMIPOCPIEJF_OFFSET))(this);
	}

	::System::String* DFIGJOKOPNC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMGLDNHHDA_DFIGJOKOPNC_OFFSET))(this);
	}

	/*
	static ::JFMGLDNHHDA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JFMGLDNHHDA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JFMGLDNHHDA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LMLPFBHKOIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMGLDNHHDA_LMLPFBHKOIL_OFFSET))(this);
	}

	::System::String* JFBHIGJAOGB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMGLDNHHDA_JFBHIGJAOGB_OFFSET))(this);
	}

	::System::Int32 LLAJDBBDAMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMGLDNHHDA_LLAJDBBDAMJ_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMGLDNHHDA_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMGLDNHHDA_DNKLBHKEDEM_OFFSET))(this);
	}

	/*
	::JFMGLDNHHDA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JFMGLDNHHDA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFMGLDNHHDA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HKIDKOCDCFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMGLDNHHDA_HKIDKOCDCFL_OFFSET))(this);
	}
};
