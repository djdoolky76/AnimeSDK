#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GFEMPAOGMGF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GFEMPAOGMGF_COKGLHCGLIM_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define GFEMPAOGMGF_DHPNLFNDKJE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define GFEMPAOGMGF_EPIPJHAOOFP_OFFSET UNITYSDK_OFFSET(0x754970)
#define GFEMPAOGMGF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GFEMPAOGMGF_GHKNFHOABCO_OFFSET UNITYSDK_OFFSET(0x757290)
#define GFEMPAOGMGF_IAGIGNGNGDF_OFFSET UNITYSDK_OFFSET(0x754920)
#define GFEMPAOGMGF_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GFEMPAOGMGF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B4D1C60)
#define GFEMPAOGMGF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GFEMPAOGMGF_TypeDefinitionIndex = 11076;

struct alignas(4) GFEMPAOGMGF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEMPAOGMGF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFEMPAOGMGF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GFEMPAOGMGF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GFEMPAOGMGF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GFEMPAOGMGF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* GHKNFHOABCO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEMPAOGMGF_GHKNFHOABCO_OFFSET))(this);
	}

	::System::Int32 DHPNLFNDKJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEMPAOGMGF_DHPNLFNDKJE_OFFSET))(this);
	}

	::System::Int32 EPIPJHAOOFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEMPAOGMGF_EPIPJHAOOFP_OFFSET))(this);
	}

	/*
	::GFEMPAOGMGF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GFEMPAOGMGF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFEMPAOGMGF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* COKGLHCGLIM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEMPAOGMGF_COKGLHCGLIM_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEMPAOGMGF_NKCNGLADFNA_OFFSET))(this);
	}

	::System::Int32 IAGIGNGNGDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEMPAOGMGF_IAGIGNGNGDF_OFFSET))(this);
	}
};
