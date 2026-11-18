#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LBIBLCGKOMB_ABOCPGEMDJA_OFFSET UNITYSDK_OFFSET(0x755320)
#define LBIBLCGKOMB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LBIBLCGKOMB_CFCEHDCMAMA_OFFSET UNITYSDK_OFFSET(0x756440)
#define LBIBLCGKOMB_EHKMCADDBKH_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define LBIBLCGKOMB_FAHJPKDHNHJ_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define LBIBLCGKOMB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LBIBLCGKOMB_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LBIBLCGKOMB_GNOAJAJFKEN_OFFSET UNITYSDK_OFFSET(0x755A00)
#define LBIBLCGKOMB_GOPAOBCNFLJ_OFFSET UNITYSDK_OFFSET(0x754970)
#define LBIBLCGKOMB_ILNKMANJMGC_OFFSET UNITYSDK_OFFSET(0x761930)
#define LBIBLCGKOMB_JBOIMNAPIKG_OFFSET UNITYSDK_OFFSET(0x755890)
#define LBIBLCGKOMB_MJEGEHJBBAK_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define LBIBLCGKOMB_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LBIBLCGKOMB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x190F4F30)
#define LBIBLCGKOMB_POCFNKAPCNP_OFFSET UNITYSDK_OFFSET(0x755190)
#define LBIBLCGKOMB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LBIBLCGKOMB_TypeDefinitionIndex = 17547;

struct alignas(4) LBIBLCGKOMB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIBLCGKOMB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBIBLCGKOMB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean ILNKMANJMGC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIBLCGKOMB_ILNKMANJMGC_OFFSET))(this);
	}

	::System::Int32 CFCEHDCMAMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIBLCGKOMB_CFCEHDCMAMA_OFFSET))(this);
	}

	::System::Int32 EHKMCADDBKH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIBLCGKOMB_EHKMCADDBKH_OFFSET))(this);
	}

	::System::Int32 ABOCPGEMDJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIBLCGKOMB_ABOCPGEMDJA_OFFSET))(this);
	}

	/*
	::LBIBLCGKOMB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LBIBLCGKOMB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBIBLCGKOMB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 POCFNKAPCNP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIBLCGKOMB_POCFNKAPCNP_OFFSET))(this);
	}

	::System::Int32 MJEGEHJBBAK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIBLCGKOMB_MJEGEHJBBAK_OFFSET))(this);
	}

	::System::Int32 FAHJPKDHNHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIBLCGKOMB_FAHJPKDHNHJ_OFFSET))(this);
	}

	::System::String* GNOAJAJFKEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIBLCGKOMB_GNOAJAJFKEN_OFFSET))(this);
	}

	::System::Int32 GOPAOBCNFLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIBLCGKOMB_GOPAOBCNFLJ_OFFSET))(this);
	}

	::System::Int32 JBOIMNAPIKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIBLCGKOMB_JBOIMNAPIKG_OFFSET))(this);
	}

	/*
	static ::LBIBLCGKOMB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LBIBLCGKOMB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LBIBLCGKOMB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIBLCGKOMB_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIBLCGKOMB_NFKFHJBEPGD_OFFSET))(this);
	}
};
