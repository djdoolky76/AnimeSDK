#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BIEBJJDLOGD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BIEBJJDLOGD_EHNLMMLHPKK_OFFSET UNITYSDK_OFFSET(0x755A00)
#define BIEBJJDLOGD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BIEBJJDLOGD_GGAJLLDGFMP_OFFSET UNITYSDK_OFFSET(0x755320)
#define BIEBJJDLOGD_GHKOBIMHENC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BIEBJJDLOGD_HGELKFBDJNK_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define BIEBJJDLOGD_KCHJNNGKEEK_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define BIEBJJDLOGD_LJNBIAFBMIL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BIEBJJDLOGD_MIEFKNCPBEM_OFFSET UNITYSDK_OFFSET(0x757D20)
#define BIEBJJDLOGD_NIHGEMPPPJB_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define BIEBJJDLOGD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19AC6250)
#define BIEBJJDLOGD_OKGKODNEICJ_OFFSET UNITYSDK_OFFSET(0x755890)
#define BIEBJJDLOGD_PPLFFKCDBJL_OFFSET UNITYSDK_OFFSET(0x756B10)
#define BIEBJJDLOGD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BIEBJJDLOGD_TypeDefinitionIndex = 14905;

struct alignas(4) BIEBJJDLOGD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEBJJDLOGD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIEBJJDLOGD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* MIEFKNCPBEM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEBJJDLOGD_MIEFKNCPBEM_OFFSET))(this);
	}

	::System::Int32 GHKOBIMHENC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEBJJDLOGD_GHKOBIMHENC_OFFSET))(this);
	}

	::System::Int32 KCHJNNGKEEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEBJJDLOGD_KCHJNNGKEEK_OFFSET))(this);
	}

	::System::String* PPLFFKCDBJL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEBJJDLOGD_PPLFFKCDBJL_OFFSET))(this);
	}

	/*
	::BIEBJJDLOGD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BIEBJJDLOGD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIEBJJDLOGD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OKGKODNEICJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEBJJDLOGD_OKGKODNEICJ_OFFSET))(this);
	}

	::System::Int32 LJNBIAFBMIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEBJJDLOGD_LJNBIAFBMIL_OFFSET))(this);
	}

	::System::Int32 HGELKFBDJNK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEBJJDLOGD_HGELKFBDJNK_OFFSET))(this);
	}

	::System::String* EHNLMMLHPKK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEBJJDLOGD_EHNLMMLHPKK_OFFSET))(this);
	}

	/*
	static ::BIEBJJDLOGD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BIEBJJDLOGD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BIEBJJDLOGD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NIHGEMPPPJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEBJJDLOGD_NIHGEMPPPJB_OFFSET))(this);
	}

	::System::Int32 GGAJLLDGFMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEBJJDLOGD_GGAJLLDGFMP_OFFSET))(this);
	}
};
