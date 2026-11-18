#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KCBBKGEEMGK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KCBBKGEEMGK_CBPAINPJEEF_OFFSET UNITYSDK_OFFSET(0x754A70)
#define KCBBKGEEMGK_CFAPOAADGGI_OFFSET UNITYSDK_OFFSET(0x756D50)
#define KCBBKGEEMGK_DMIPOCPIEJF_OFFSET UNITYSDK_OFFSET(0x755A00)
#define KCBBKGEEMGK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KCBBKGEEMGK_GMIALDHGEGN_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KCBBKGEEMGK_HEBPKGHAKMO_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define KCBBKGEEMGK_JMDAJPLCNCF_OFFSET UNITYSDK_OFFSET(0x757290)
#define KCBBKGEEMGK_LAANGGJEJCC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KCBBKGEEMGK_LHCHCKNBFBL_OFFSET UNITYSDK_OFFSET(0x754920)
#define KCBBKGEEMGK_NAEOPIEGJDA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KCBBKGEEMGK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x152FD910)
#define KCBBKGEEMGK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KCBBKGEEMGK_TypeDefinitionIndex = 10293;

struct alignas(4) KCBBKGEEMGK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBBKGEEMGK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCBBKGEEMGK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LHCHCKNBFBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBBKGEEMGK_LHCHCKNBFBL_OFFSET))(this);
	}

	::System::Int32 LAANGGJEJCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBBKGEEMGK_LAANGGJEJCC_OFFSET))(this);
	}

	::System::Int32 NAEOPIEGJDA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBBKGEEMGK_NAEOPIEGJDA_OFFSET))(this);
	}

	/*
	::KCBBKGEEMGK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KCBBKGEEMGK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCBBKGEEMGK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* GMIALDHGEGN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBBKGEEMGK_GMIALDHGEGN_OFFSET))(this);
	}

	::System::Int32 HEBPKGHAKMO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBBKGEEMGK_HEBPKGHAKMO_OFFSET))(this);
	}

	::System::String* JMDAJPLCNCF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBBKGEEMGK_JMDAJPLCNCF_OFFSET))(this);
	}

	::System::String* DMIPOCPIEJF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBBKGEEMGK_DMIPOCPIEJF_OFFSET))(this);
	}

	::System::Boolean CBPAINPJEEF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KCBBKGEEMGK_CBPAINPJEEF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* CFAPOAADGGI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBBKGEEMGK_CFAPOAADGGI_OFFSET))(this);
	}

	/*
	static ::KCBBKGEEMGK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KCBBKGEEMGK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KCBBKGEEMGK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
