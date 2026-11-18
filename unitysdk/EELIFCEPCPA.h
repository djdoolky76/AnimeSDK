#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EELIFCEPCPA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EELIFCEPCPA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EELIFCEPCPA_BKMPOONFPMC_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define EELIFCEPCPA_CHCIKEGPLJD_OFFSET UNITYSDK_OFFSET(0x755710)
#define EELIFCEPCPA_FICHOGCNHMJ_OFFSET UNITYSDK_OFFSET(0x756B10)
#define EELIFCEPCPA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EELIFCEPCPA_IGKFAFBGBAP_OFFSET UNITYSDK_OFFSET(0x755890)
#define EELIFCEPCPA_JOLEPHBDENF_OFFSET UNITYSDK_OFFSET(0x757760)
#define EELIFCEPCPA_KGBHJICIINB_OFFSET UNITYSDK_OFFSET(0x756D50)
#define EELIFCEPCPA_LCEGOIJNDIB_OFFSET UNITYSDK_OFFSET(0x755670)
#define EELIFCEPCPA_MKELBHKBKDC_OFFSET UNITYSDK_OFFSET(0x757E20)
#define EELIFCEPCPA_NAEDMMJNDBB_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define EELIFCEPCPA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B0FAAC0)
#define EELIFCEPCPA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EELIFCEPCPA_TypeDefinitionIndex = 16930;

struct alignas(4) EELIFCEPCPA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELIFCEPCPA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EELIFCEPCPA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* MKELBHKBKDC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELIFCEPCPA_MKELBHKBKDC_OFFSET))(this);
	}

	::System::String* JOLEPHBDENF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELIFCEPCPA_JOLEPHBDENF_OFFSET))(this);
	}

	::System::String* KGBHJICIINB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELIFCEPCPA_KGBHJICIINB_OFFSET))(this);
	}

	/*
	::EELIFCEPCPA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EELIFCEPCPA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EELIFCEPCPA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LCEGOIJNDIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EELIFCEPCPA_LCEGOIJNDIB_OFFSET))(this);
	}

	::System::Int32 BKMPOONFPMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EELIFCEPCPA_BKMPOONFPMC_OFFSET))(this);
	}

	::System::Int32 IGKFAFBGBAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EELIFCEPCPA_IGKFAFBGBAP_OFFSET))(this);
	}

	::System::String* NAEDMMJNDBB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELIFCEPCPA_NAEDMMJNDBB_OFFSET))(this);
	}

	::System::String* FICHOGCNHMJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELIFCEPCPA_FICHOGCNHMJ_OFFSET))(this);
	}

	/*
	static ::EELIFCEPCPA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EELIFCEPCPA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EELIFCEPCPA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EELIFCEPCPA_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* CHCIKEGPLJD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELIFCEPCPA_CHCIKEGPLJD_OFFSET))(this);
	}
};
