#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OLLMKOODAJM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OLLMKOODAJM_ALDNJIHMMHK_OFFSET UNITYSDK_OFFSET(0x755A00)
#define OLLMKOODAJM_AOGCCJDELGD_OFFSET UNITYSDK_OFFSET(0x7575F0)
#define OLLMKOODAJM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OLLMKOODAJM_BHMMKDGCLGB_OFFSET UNITYSDK_OFFSET(0x756D50)
#define OLLMKOODAJM_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define OLLMKOODAJM_FFAAAJFFNLJ_OFFSET UNITYSDK_OFFSET(0x755E40)
#define OLLMKOODAJM_FGLAMPMBPOI_OFFSET UNITYSDK_OFFSET(0x757690)
#define OLLMKOODAJM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OLLMKOODAJM_HAFDBIAPOOK_OFFSET UNITYSDK_OFFSET(0x757760)
#define OLLMKOODAJM_ICEPJNCOIBO_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define OLLMKOODAJM_JGMEOMJENCO_OFFSET UNITYSDK_OFFSET(0x754920)
#define OLLMKOODAJM_JIGBHDDMOFC_OFFSET UNITYSDK_OFFSET(0x755320)
#define OLLMKOODAJM_KJPFCFJHKJA_OFFSET UNITYSDK_OFFSET(0x757C10)
#define OLLMKOODAJM_LFPFCAFBOEK_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define OLLMKOODAJM_LLEGGEPBFHL_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define OLLMKOODAJM_NKPMGNIDAJE_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define OLLMKOODAJM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17369540)
#define OLLMKOODAJM_OHJGKDGHBGI_OFFSET UNITYSDK_OFFSET(0x7A6880)
#define OLLMKOODAJM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OLLMKOODAJM_TypeDefinitionIndex = 14070;

struct alignas(4) OLLMKOODAJM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMKOODAJM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLLMKOODAJM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMKOODAJM_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* LFPFCAFBOEK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMKOODAJM_LFPFCAFBOEK_OFFSET))(this);
	}

	::System::Int32 JIGBHDDMOFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMKOODAJM_JIGBHDDMOFC_OFFSET))(this);
	}

	::System::String* ALDNJIHMMHK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMKOODAJM_ALDNJIHMMHK_OFFSET))(this);
	}

	::System::String* FGLAMPMBPOI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMKOODAJM_FGLAMPMBPOI_OFFSET))(this);
	}

	::System::Int32 FFAAAJFFNLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMKOODAJM_FFAAAJFFNLJ_OFFSET))(this);
	}

	::System::Boolean AOGCCJDELGD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMKOODAJM_AOGCCJDELGD_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMKOODAJM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean OHJGKDGHBGI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMKOODAJM_OHJGKDGHBGI_OFFSET))(this);
	}

	::System::String* BHMMKDGCLGB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMKOODAJM_BHMMKDGCLGB_OFFSET))(this);
	}

	::System::Int32 JGMEOMJENCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMKOODAJM_JGMEOMJENCO_OFFSET))(this);
	}

	::System::String* HAFDBIAPOOK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMKOODAJM_HAFDBIAPOOK_OFFSET))(this);
	}

	/*
	::OLLMKOODAJM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OLLMKOODAJM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLLMKOODAJM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* LLEGGEPBFHL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMKOODAJM_LLEGGEPBFHL_OFFSET))(this);
	}

	::System::Int32 KJPFCFJHKJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMKOODAJM_KJPFCFJHKJA_OFFSET))(this);
	}

	::System::String* ICEPJNCOIBO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMKOODAJM_ICEPJNCOIBO_OFFSET))(this);
	}

	::System::String* NKPMGNIDAJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMKOODAJM_NKPMGNIDAJE_OFFSET))(this);
	}

	/*
	static ::OLLMKOODAJM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OLLMKOODAJM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OLLMKOODAJM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
