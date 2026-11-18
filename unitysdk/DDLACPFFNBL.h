#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DDLACPFFNBL_BBDDDBILPDG_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DDLACPFFNBL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DDLACPFFNBL_CIADMPMDAEJ_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DDLACPFFNBL_FMOLANGCPDH_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define DDLACPFFNBL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DDLACPFFNBL_GNKIIJKJFLG_OFFSET UNITYSDK_OFFSET(0x756B10)
#define DDLACPFFNBL_JKPDKNPBGHO_OFFSET UNITYSDK_OFFSET(0x756360)
#define DDLACPFFNBL_KKAGCCFGEDD_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define DDLACPFFNBL_MJHBBFEIPDK_OFFSET UNITYSDK_OFFSET(0x7F5760)
#define DDLACPFFNBL_NHGNDEENIIA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DDLACPFFNBL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A18BD10)
#define DDLACPFFNBL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DDLACPFFNBL_TypeDefinitionIndex = 17739;

struct alignas(4) DDLACPFFNBL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLACPFFNBL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DDLACPFFNBL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NHGNDEENIIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLACPFFNBL_NHGNDEENIIA_OFFSET))(this);
	}

	::System::String* GNKIIJKJFLG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLACPFFNBL_GNKIIJKJFLG_OFFSET))(this);
	}

	::System::Int32 BBDDDBILPDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLACPFFNBL_BBDDDBILPDG_OFFSET))(this);
	}

	/*
	::DDLACPFFNBL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DDLACPFFNBL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DDLACPFFNBL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KKAGCCFGEDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLACPFFNBL_KKAGCCFGEDD_OFFSET))(this);
	}

	/*
	static ::DDLACPFFNBL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 HGDPCOKCCFO, ::System::Int32 DOHBINBLJDJ, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DDLACPFFNBL(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DDLACPFFNBL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, HGDPCOKCCFO, DOHBINBLJDJ, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean JKPDKNPBGHO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DDLACPFFNBL_JKPDKNPBGHO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 FMOLANGCPDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLACPFFNBL_FMOLANGCPDH_OFFSET))(this);
	}

	::System::Boolean MJHBBFEIPDK(::System::Int32 HPMEONKHFGG, ::System::Boolean& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + DDLACPFFNBL_MJHBBFEIPDK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* CIADMPMDAEJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLACPFFNBL_CIADMPMDAEJ_OFFSET))(this);
	}
};
