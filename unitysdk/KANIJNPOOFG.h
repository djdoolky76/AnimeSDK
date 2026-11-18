#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KANIJNPOOFG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KANIJNPOOFG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KANIJNPOOFG_BPOPIDFJDBK_OFFSET UNITYSDK_OFFSET(0x758780)
#define KANIJNPOOFG_DLKBPMEOGBH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KANIJNPOOFG_FCGPEBICFBB_OFFSET UNITYSDK_OFFSET(0x756D50)
#define KANIJNPOOFG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KANIJNPOOFG_JENCFBLNJBL_OFFSET UNITYSDK_OFFSET(0x756B10)
#define KANIJNPOOFG_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x755C70)
#define KANIJNPOOFG_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KANIJNPOOFG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17C2EFD0)
#define KANIJNPOOFG_PIKLHGEIHDF_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KANIJNPOOFG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KANIJNPOOFG_TypeDefinitionIndex = 15243;

struct alignas(4) KANIJNPOOFG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KANIJNPOOFG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KANIJNPOOFG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KANIJNPOOFG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KANIJNPOOFG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KANIJNPOOFG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 PIKLHGEIHDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KANIJNPOOFG_PIKLHGEIHDF_OFFSET))(this);
	}

	::System::String* FCGPEBICFBB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KANIJNPOOFG_FCGPEBICFBB_OFFSET))(this);
	}

	::System::Int32 BPOPIDFJDBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KANIJNPOOFG_BPOPIDFJDBK_OFFSET))(this);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KANIJNPOOFG_NENDAECBCEM_OFFSET))(this);
	}

	::System::String* DLKBPMEOGBH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KANIJNPOOFG_DLKBPMEOGBH_OFFSET))(this);
	}

	::System::String* JENCFBLNJBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KANIJNPOOFG_JENCFBLNJBL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KANIJNPOOFG_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::KANIJNPOOFG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KANIJNPOOFG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KANIJNPOOFG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KANIJNPOOFG_LNOBBAIGKJL_OFFSET))(this);
	}
};
