#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MPNCKNMJGIF_ABNJABLFOGN_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define MPNCKNMJGIF_ABPCHJMNBCI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MPNCKNMJGIF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MPNCKNMJGIF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MPNCKNMJGIF_FPPDNKFNLMM_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define MPNCKNMJGIF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MPNCKNMJGIF_LPLFMGONDPJ_OFFSET UNITYSDK_OFFSET(0x756B10)
#define MPNCKNMJGIF_MNBGAIEPADE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MPNCKNMJGIF_MPIBHCOGNMH_OFFSET UNITYSDK_OFFSET(0x758780)
#define MPNCKNMJGIF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AB11D90)
#define MPNCKNMJGIF_OCHJBPKMMFE_OFFSET UNITYSDK_OFFSET(0x756D50)
#define MPNCKNMJGIF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MPNCKNMJGIF_TypeDefinitionIndex = 9202;

struct alignas(4) MPNCKNMJGIF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNCKNMJGIF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPNCKNMJGIF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ABNJABLFOGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNCKNMJGIF_ABNJABLFOGN_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNCKNMJGIF_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* ABPCHJMNBCI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNCKNMJGIF_ABPCHJMNBCI_OFFSET))(this);
	}

	::System::String* FPPDNKFNLMM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNCKNMJGIF_FPPDNKFNLMM_OFFSET))(this);
	}

	::System::String* MNBGAIEPADE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNCKNMJGIF_MNBGAIEPADE_OFFSET))(this);
	}

	::System::String* OCHJBPKMMFE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNCKNMJGIF_OCHJBPKMMFE_OFFSET))(this);
	}

	/*
	static ::MPNCKNMJGIF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MPNCKNMJGIF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MPNCKNMJGIF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::MPNCKNMJGIF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPNCKNMJGIF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPNCKNMJGIF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MPIBHCOGNMH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNCKNMJGIF_MPIBHCOGNMH_OFFSET))(this);
	}

	::System::String* LPLFMGONDPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNCKNMJGIF_LPLFMGONDPJ_OFFSET))(this);
	}
};
