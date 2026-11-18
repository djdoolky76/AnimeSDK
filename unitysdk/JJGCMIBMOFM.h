#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JJGCMIBMOFM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JJGCMIBMOFM_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define JJGCMIBMOFM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JJGCMIBMOFM_DAAFDIOFIIO_OFFSET UNITYSDK_OFFSET(0x757290)
#define JJGCMIBMOFM_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JJGCMIBMOFM_FJOLPGBLBBH_OFFSET UNITYSDK_OFFSET(0x755E40)
#define JJGCMIBMOFM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JJGCMIBMOFM_HFEEGONHPED_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define JJGCMIBMOFM_IFNFHPIFMEH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JJGCMIBMOFM_JGMEOMJENCO_OFFSET UNITYSDK_OFFSET(0x754970)
#define JJGCMIBMOFM_NGNNKLIOEMF_OFFSET UNITYSDK_OFFSET(0x755C70)
#define JJGCMIBMOFM_NHMNNHJOMPK_OFFSET UNITYSDK_OFFSET(0x7E24F0)
#define JJGCMIBMOFM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B13D480)
#define JJGCMIBMOFM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JJGCMIBMOFM_TypeDefinitionIndex = 16358;

struct alignas(4) JJGCMIBMOFM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGCMIBMOFM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJGCMIBMOFM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGCMIBMOFM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean NHMNNHJOMPK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGCMIBMOFM_NHMNNHJOMPK_OFFSET))(this);
	}

	::System::String* DAAFDIOFIIO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGCMIBMOFM_DAAFDIOFIIO_OFFSET))(this);
	}

	::System::Int32 NGNNKLIOEMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGCMIBMOFM_NGNNKLIOEMF_OFFSET))(this);
	}

	::System::Int32 JGMEOMJENCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGCMIBMOFM_JGMEOMJENCO_OFFSET))(this);
	}

	/*
	::JJGCMIBMOFM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JJGCMIBMOFM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJGCMIBMOFM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HFEEGONHPED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGCMIBMOFM_HFEEGONHPED_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGCMIBMOFM_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 IFNFHPIFMEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGCMIBMOFM_IFNFHPIFMEH_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGCMIBMOFM_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Int32 FJOLPGBLBBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGCMIBMOFM_FJOLPGBLBBH_OFFSET))(this);
	}

	/*
	static ::JJGCMIBMOFM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JJGCMIBMOFM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JJGCMIBMOFM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
