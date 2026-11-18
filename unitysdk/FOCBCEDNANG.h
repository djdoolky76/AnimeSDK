#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FOCBCEDNANG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FOCBCEDNANG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FOCBCEDNANG_BPOLKIJNPGF_OFFSET UNITYSDK_OFFSET(0x755A00)
#define FOCBCEDNANG_ECJAFMBCEOF_OFFSET UNITYSDK_OFFSET(0x755C70)
#define FOCBCEDNANG_FBMIEJIGIED_OFFSET UNITYSDK_OFFSET(0x756D50)
#define FOCBCEDNANG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FOCBCEDNANG_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define FOCBCEDNANG_HNAOPLLHCKF_OFFSET UNITYSDK_OFFSET(0x757190)
#define FOCBCEDNANG_ICDGICCEAAF_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define FOCBCEDNANG_IEFFIMKECGK_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FOCBCEDNANG_INKFFFABICA_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define FOCBCEDNANG_JBOIMNAPIKG_OFFSET UNITYSDK_OFFSET(0x754920)
#define FOCBCEDNANG_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x758780)
#define FOCBCEDNANG_NCJOOFHIDCJ_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define FOCBCEDNANG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15A7B150)
#define FOCBCEDNANG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FOCBCEDNANG_TypeDefinitionIndex = 14913;

struct alignas(4) FOCBCEDNANG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCBCEDNANG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOCBCEDNANG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCBCEDNANG_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::String* FBMIEJIGIED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCBCEDNANG_FBMIEJIGIED_OFFSET))(this);
	}

	::System::String* NCJOOFHIDCJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCBCEDNANG_NCJOOFHIDCJ_OFFSET))(this);
	}

	::System::Int32 ECJAFMBCEOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCBCEDNANG_ECJAFMBCEOF_OFFSET))(this);
	}

	/*
	::FOCBCEDNANG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FOCBCEDNANG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOCBCEDNANG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HNAOPLLHCKF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCBCEDNANG_HNAOPLLHCKF_OFFSET))(this);
	}

	::System::String* ICDGICCEAAF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCBCEDNANG_ICDGICCEAAF_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCBCEDNANG_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* IEFFIMKECGK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCBCEDNANG_IEFFIMKECGK_OFFSET))(this);
	}

	::System::Int32 INKFFFABICA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCBCEDNANG_INKFFFABICA_OFFSET))(this);
	}

	::System::Int32 JBOIMNAPIKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCBCEDNANG_JBOIMNAPIKG_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCBCEDNANG_HKELPCLHLEC_OFFSET))(this);
	}

	/*
	static ::FOCBCEDNANG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FOCBCEDNANG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FOCBCEDNANG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* BPOLKIJNPGF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCBCEDNANG_BPOLKIJNPGF_OFFSET))(this);
	}
};
