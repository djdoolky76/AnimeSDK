#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HOBBACEAOCJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HOBBACEAOCJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HOBBACEAOCJ_DDAPACBOLKP_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define HOBBACEAOCJ_EFFBHHELIDG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HOBBACEAOCJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HOBBACEAOCJ_GOPAOBCNFLJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HOBBACEAOCJ_JEBMBHFOLCL_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define HOBBACEAOCJ_LBLEAJLAKDG_OFFSET UNITYSDK_OFFSET(0x754920)
#define HOBBACEAOCJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17C11E30)
#define HOBBACEAOCJ_PHJEDJCKMNM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HOBBACEAOCJ_PJNFDLHGJFI_OFFSET UNITYSDK_OFFSET(0x758780)
#define HOBBACEAOCJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HOBBACEAOCJ_TypeDefinitionIndex = 15033;

struct alignas(4) HOBBACEAOCJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBBACEAOCJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOBBACEAOCJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GOPAOBCNFLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBBACEAOCJ_GOPAOBCNFLJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBBACEAOCJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* JEBMBHFOLCL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBBACEAOCJ_JEBMBHFOLCL_OFFSET))(this);
	}

	::System::String* DDAPACBOLKP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBBACEAOCJ_DDAPACBOLKP_OFFSET))(this);
	}

	::System::Int32 PHJEDJCKMNM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBBACEAOCJ_PHJEDJCKMNM_OFFSET))(this);
	}

	::System::Int32 LBLEAJLAKDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBBACEAOCJ_LBLEAJLAKDG_OFFSET))(this);
	}

	::System::Int32 EFFBHHELIDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBBACEAOCJ_EFFBHHELIDG_OFFSET))(this);
	}

	::System::Int32 PJNFDLHGJFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBBACEAOCJ_PJNFDLHGJFI_OFFSET))(this);
	}

	/*
	::HOBBACEAOCJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HOBBACEAOCJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOBBACEAOCJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HOBBACEAOCJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HOBBACEAOCJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HOBBACEAOCJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
