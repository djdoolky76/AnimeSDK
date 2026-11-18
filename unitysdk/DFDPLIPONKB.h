#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DFDPLIPONKB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DFDPLIPONKB_ANNHHHEGPOA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DFDPLIPONKB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DFDPLIPONKB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DFDPLIPONKB_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DFDPLIPONKB_IHDIGBLHPGK_OFFSET UNITYSDK_OFFSET(0x755C70)
#define DFDPLIPONKB_IOCNEHIGCOA_OFFSET UNITYSDK_OFFSET(0x756D50)
#define DFDPLIPONKB_LJNBIAFBMIL_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DFDPLIPONKB_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x754920)
#define DFDPLIPONKB_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x758780)
#define DFDPLIPONKB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19AD3680)
#define DFDPLIPONKB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DFDPLIPONKB_TypeDefinitionIndex = 17206;

struct alignas(4) DFDPLIPONKB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDPLIPONKB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFDPLIPONKB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDPLIPONKB_GPBFENDAJMF_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDPLIPONKB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDPLIPONKB_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Int32 IHDIGBLHPGK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDPLIPONKB_IHDIGBLHPGK_OFFSET))(this);
	}

	/*
	static ::DFDPLIPONKB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DFDPLIPONKB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DFDPLIPONKB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* IOCNEHIGCOA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDPLIPONKB_IOCNEHIGCOA_OFFSET))(this);
	}

	::System::Int32 LJNBIAFBMIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDPLIPONKB_LJNBIAFBMIL_OFFSET))(this);
	}

	::System::Int32 ANNHHHEGPOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDPLIPONKB_ANNHHHEGPOA_OFFSET))(this);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDPLIPONKB_NENDAECBCEM_OFFSET))(this);
	}

	/*
	::DFDPLIPONKB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFDPLIPONKB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFDPLIPONKB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
