#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ABAMPPDJJPI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ABAMPPDJJPI_AIAFBEEOEIJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define ABAMPPDJJPI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ABAMPPDJJPI_CFIDANLMJJI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define ABAMPPDJJPI_DCEPCLDKFFM_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define ABAMPPDJJPI_GBOLDFJEGEO_OFFSET UNITYSDK_OFFSET(0x754920)
#define ABAMPPDJJPI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ABAMPPDJJPI_GNDHECGOINM_OFFSET UNITYSDK_OFFSET(0x758780)
#define ABAMPPDJJPI_IOGKEONEHAG_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define ABAMPPDJJPI_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x755E40)
#define ABAMPPDJJPI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A6A910)
#define ABAMPPDJJPI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ABAMPPDJJPI_TypeDefinitionIndex = 14759;

struct alignas(4) ABAMPPDJJPI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAMPPDJJPI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABAMPPDJJPI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ABAMPPDJJPI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ABAMPPDJJPI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABAMPPDJJPI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GBOLDFJEGEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAMPPDJJPI_GBOLDFJEGEO_OFFSET))(this);
	}

	::System::String* CFIDANLMJJI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAMPPDJJPI_CFIDANLMJJI_OFFSET))(this);
	}

	::System::Int32 AIAFBEEOEIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAMPPDJJPI_AIAFBEEOEIJ_OFFSET))(this);
	}

	::System::String* DCEPCLDKFFM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAMPPDJJPI_DCEPCLDKFFM_OFFSET))(this);
	}

	::System::Int32 GNDHECGOINM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAMPPDJJPI_GNDHECGOINM_OFFSET))(this);
	}

	/*
	static ::ABAMPPDJJPI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ABAMPPDJJPI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ABAMPPDJJPI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAMPPDJJPI_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAMPPDJJPI_NLAIFNFGGMA_OFFSET))(this);
	}

	::System::String* IOGKEONEHAG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAMPPDJJPI_IOGKEONEHAG_OFFSET))(this);
	}
};
