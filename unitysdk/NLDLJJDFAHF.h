#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NLDLJJDFAHF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NLDLJJDFAHF_AJFCEHGGLFM_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NLDLJJDFAHF_BFBEIJFBBEF_OFFSET UNITYSDK_OFFSET(0x756D50)
#define NLDLJJDFAHF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NLDLJJDFAHF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NLDLJJDFAHF_IJFLMPHLGNH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NLDLJJDFAHF_NIOLACCPKHH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NLDLJJDFAHF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19121DC0)
#define NLDLJJDFAHF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NLDLJJDFAHF_TypeDefinitionIndex = 12504;

struct alignas(4) NLDLJJDFAHF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDLJJDFAHF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLDLJJDFAHF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDLJJDFAHF_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* IJFLMPHLGNH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDLJJDFAHF_IJFLMPHLGNH_OFFSET))(this);
	}

	::System::String* BFBEIJFBBEF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDLJJDFAHF_BFBEIJFBBEF_OFFSET))(this);
	}

	/*
	static ::NLDLJJDFAHF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NLDLJJDFAHF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NLDLJJDFAHF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::NLDLJJDFAHF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NLDLJJDFAHF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLDLJJDFAHF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* AJFCEHGGLFM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDLJJDFAHF_AJFCEHGGLFM_OFFSET))(this);
	}

	::System::String* NIOLACCPKHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDLJJDFAHF_NIOLACCPKHH_OFFSET))(this);
	}
};
