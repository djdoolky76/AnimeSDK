#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LPDCFFJFDBE_AJGFDEEMIEP_OFFSET UNITYSDK_OFFSET(0x758320)
#define LPDCFFJFDBE_BECEIOOKMOD_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define LPDCFFJFDBE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LPDCFFJFDBE_CPICOJGJMBK_OFFSET UNITYSDK_OFFSET(0x757290)
#define LPDCFFJFDBE_DBCIMHGEAEG_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define LPDCFFJFDBE_DKKINIHCLEM_OFFSET UNITYSDK_OFFSET(0x754F10)
#define LPDCFFJFDBE_DPGDELOFJOF_OFFSET UNITYSDK_OFFSET(0x756B10)
#define LPDCFFJFDBE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LPDCFFJFDBE_ILJLFLDHHCA_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define LPDCFFJFDBE_JNHIENBHHCE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LPDCFFJFDBE_LFKDMBILGPJ_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LPDCFFJFDBE_MAMJDDCKEIJ_OFFSET UNITYSDK_OFFSET(0x755A00)
#define LPDCFFJFDBE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AD69CC0)
#define LPDCFFJFDBE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LPDCFFJFDBE_TypeDefinitionIndex = 15651;

struct alignas(4) LPDCFFJFDBE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDCFFJFDBE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPDCFFJFDBE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LPDCFFJFDBE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LPDCFFJFDBE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPDCFFJFDBE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* DBCIMHGEAEG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDCFFJFDBE_DBCIMHGEAEG_OFFSET))(this);
	}

	::System::String* CPICOJGJMBK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDCFFJFDBE_CPICOJGJMBK_OFFSET))(this);
	}

	::System::Int32 ILJLFLDHHCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDCFFJFDBE_ILJLFLDHHCA_OFFSET))(this);
	}

	::System::String* AJGFDEEMIEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDCFFJFDBE_AJGFDEEMIEP_OFFSET))(this);
	}

	::System::String* DKKINIHCLEM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDCFFJFDBE_DKKINIHCLEM_OFFSET))(this);
	}

	::System::String* LFKDMBILGPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDCFFJFDBE_LFKDMBILGPJ_OFFSET))(this);
	}

	::System::String* DPGDELOFJOF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDCFFJFDBE_DPGDELOFJOF_OFFSET))(this);
	}

	::System::String* MAMJDDCKEIJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDCFFJFDBE_MAMJDDCKEIJ_OFFSET))(this);
	}

	/*
	static ::LPDCFFJFDBE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LPDCFFJFDBE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LPDCFFJFDBE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 JNHIENBHHCE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDCFFJFDBE_JNHIENBHHCE_OFFSET))(this);
	}

	::System::String* BECEIOOKMOD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDCFFJFDBE_BECEIOOKMOD_OFFSET))(this);
	}
};
