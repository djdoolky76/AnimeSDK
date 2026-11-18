#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BDDELDIPKMN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BDDELDIPKMN_AIJINBGGNMB_OFFSET UNITYSDK_OFFSET(0x757C10)
#define BDDELDIPKMN_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x755E40)
#define BDDELDIPKMN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BDDELDIPKMN_CEJHNEKECNK_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define BDDELDIPKMN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BDDELDIPKMN_IGCBOJCDNOG_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define BDDELDIPKMN_IGLFKIBEGGH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BDDELDIPKMN_JGPANAKFCDP_OFFSET UNITYSDK_OFFSET(0x755890)
#define BDDELDIPKMN_OABPOKLHILI_OFFSET UNITYSDK_OFFSET(0x755190)
#define BDDELDIPKMN_OAGCILEMKGF_OFFSET UNITYSDK_OFFSET(0x755840)
#define BDDELDIPKMN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17757540)
#define BDDELDIPKMN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BDDELDIPKMN_TypeDefinitionIndex = 16096;

struct alignas(4) BDDELDIPKMN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDELDIPKMN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDDELDIPKMN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 AIJINBGGNMB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDELDIPKMN_AIJINBGGNMB_OFFSET))(this);
	}

	::System::Int32 IGLFKIBEGGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDELDIPKMN_IGLFKIBEGGH_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDELDIPKMN_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* CEJHNEKECNK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDELDIPKMN_CEJHNEKECNK_OFFSET))(this);
	}

	::System::Int32 JGPANAKFCDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDELDIPKMN_JGPANAKFCDP_OFFSET))(this);
	}

	::System::Int32 OAGCILEMKGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDELDIPKMN_OAGCILEMKGF_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDELDIPKMN_APCKPKCNFJE_OFFSET))(this);
	}

	/*
	static ::BDDELDIPKMN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BDDELDIPKMN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BDDELDIPKMN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 IGCBOJCDNOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDELDIPKMN_IGCBOJCDNOG_OFFSET))(this);
	}

	/*
	::BDDELDIPKMN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BDDELDIPKMN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDDELDIPKMN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OABPOKLHILI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDELDIPKMN_OABPOKLHILI_OFFSET))(this);
	}
};
