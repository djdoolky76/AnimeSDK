#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MCIILMLCPJL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MCIILMLCPJL_AIJJPBPHCLO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define MCIILMLCPJL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MCIILMLCPJL_CPELHPALFLP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MCIILMLCPJL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MCIILMLCPJL_HCCGGDOEHKH_OFFSET UNITYSDK_OFFSET(0x758780)
#define MCIILMLCPJL_IADEPIFAMCC_OFFSET UNITYSDK_OFFSET(0x756D50)
#define MCIILMLCPJL_IDINMHHOOOK_OFFSET UNITYSDK_OFFSET(0x755C70)
#define MCIILMLCPJL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AB04C30)
#define MCIILMLCPJL_PAINFLDDDDD_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MCIILMLCPJL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MCIILMLCPJL_TypeDefinitionIndex = 10427;

struct alignas(4) MCIILMLCPJL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIILMLCPJL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCIILMLCPJL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 AIJJPBPHCLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIILMLCPJL_AIJJPBPHCLO_OFFSET))(this);
	}

	/*
	::MCIILMLCPJL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MCIILMLCPJL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCIILMLCPJL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IDINMHHOOOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIILMLCPJL_IDINMHHOOOK_OFFSET))(this);
	}

	/*
	static ::MCIILMLCPJL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MCIILMLCPJL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MCIILMLCPJL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HCCGGDOEHKH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIILMLCPJL_HCCGGDOEHKH_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIILMLCPJL_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* CPELHPALFLP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIILMLCPJL_CPELHPALFLP_OFFSET))(this);
	}

	::System::Int32 PAINFLDDDDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIILMLCPJL_PAINFLDDDDD_OFFSET))(this);
	}

	::System::String* IADEPIFAMCC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIILMLCPJL_IADEPIFAMCC_OFFSET))(this);
	}
};
