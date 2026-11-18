#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LPAINBAPDBL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LPAINBAPDBL_BDGCAOBNDHJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LPAINBAPDBL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LPAINBAPDBL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LPAINBAPDBL_GIJGALKAMHI_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LPAINBAPDBL_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x756B10)
#define LPAINBAPDBL_IOHIHIFBFAN_OFFSET UNITYSDK_OFFSET(0x754970)
#define LPAINBAPDBL_KLCNIHEJMBF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LPAINBAPDBL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AB029B0)
#define LPAINBAPDBL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LPAINBAPDBL_TypeDefinitionIndex = 16337;

struct alignas(4) LPAINBAPDBL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAINBAPDBL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPAINBAPDBL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GIJGALKAMHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAINBAPDBL_GIJGALKAMHI_OFFSET))(this);
	}

	/*
	static ::LPAINBAPDBL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LPAINBAPDBL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LPAINBAPDBL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BDGCAOBNDHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAINBAPDBL_BDGCAOBNDHJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAINBAPDBL_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::LPAINBAPDBL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LPAINBAPDBL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPAINBAPDBL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IOHIHIFBFAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAINBAPDBL_IOHIHIFBFAN_OFFSET))(this);
	}

	::System::Int32 KLCNIHEJMBF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAINBAPDBL_KLCNIHEJMBF_OFFSET))(this);
	}

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAINBAPDBL_GPBFENDAJMF_OFFSET))(this);
	}
};
