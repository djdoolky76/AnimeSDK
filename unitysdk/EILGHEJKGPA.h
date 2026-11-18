#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EILGHEJKGPA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EILGHEJKGPA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EILGHEJKGPA_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define EILGHEJKGPA_CHIHBMFAPCN_OFFSET UNITYSDK_OFFSET(0x757290)
#define EILGHEJKGPA_EPKHFGDILDG_OFFSET UNITYSDK_OFFSET(0x755A00)
#define EILGHEJKGPA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EILGHEJKGPA_IHHPENFLKIF_OFFSET UNITYSDK_OFFSET(0x756B10)
#define EILGHEJKGPA_JLKNALIKFCB_OFFSET UNITYSDK_OFFSET(0x755D20)
#define EILGHEJKGPA_JNJMILOAENG_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define EILGHEJKGPA_LEHGCIALHNF_OFFSET UNITYSDK_OFFSET(0x756D50)
#define EILGHEJKGPA_LHNOPBGAHEI_OFFSET UNITYSDK_OFFSET(0x757190)
#define EILGHEJKGPA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A564290)
#define EILGHEJKGPA_ODENBFDFAMJ_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define EILGHEJKGPA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EILGHEJKGPA_TypeDefinitionIndex = 13553;

struct alignas(4) EILGHEJKGPA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILGHEJKGPA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EILGHEJKGPA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EILGHEJKGPA_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* IHHPENFLKIF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILGHEJKGPA_IHHPENFLKIF_OFFSET))(this);
	}

	/*
	::EILGHEJKGPA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EILGHEJKGPA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EILGHEJKGPA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* LHNOPBGAHEI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILGHEJKGPA_LHNOPBGAHEI_OFFSET))(this);
	}

	::System::String* JNJMILOAENG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILGHEJKGPA_JNJMILOAENG_OFFSET))(this);
	}

	/*
	static ::EILGHEJKGPA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EILGHEJKGPA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EILGHEJKGPA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EILGHEJKGPA_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::String* CHIHBMFAPCN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILGHEJKGPA_CHIHBMFAPCN_OFFSET))(this);
	}

	::System::String* LEHGCIALHNF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILGHEJKGPA_LEHGCIALHNF_OFFSET))(this);
	}

	::System::String* ODENBFDFAMJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILGHEJKGPA_ODENBFDFAMJ_OFFSET))(this);
	}

	::System::Int32 JLKNALIKFCB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EILGHEJKGPA_JLKNALIKFCB_OFFSET))(this);
	}

	::System::String* EPKHFGDILDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILGHEJKGPA_EPKHFGDILDG_OFFSET))(this);
	}
};
