#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NKEJGLONGCA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NKEJGLONGCA_AINEJFJPHDB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NKEJGLONGCA_AMFHCOGFADP_OFFSET UNITYSDK_OFFSET(0x77AC70)
#define NKEJGLONGCA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NKEJGLONGCA_FGFJDGGKCEE_OFFSET UNITYSDK_OFFSET(0x755790)
#define NKEJGLONGCA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NKEJGLONGCA_PPAFGBILMME_OFFSET UNITYSDK_OFFSET(0x764220)
#define NKEJGLONGCA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NKEJGLONGCA_TypeDefinitionIndex = 16037;

struct alignas(4) NKEJGLONGCA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEJGLONGCA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKEJGLONGCA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* AINEJFJPHDB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEJGLONGCA_AINEJFJPHDB_OFFSET))(this);
	}

	::System::Single PPAFGBILMME()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEJGLONGCA_PPAFGBILMME_OFFSET))(this);
	}

	::System::Int32 FGFJDGGKCEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEJGLONGCA_FGFJDGGKCEE_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEJGLONGCA_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean AMFHCOGFADP(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + NKEJGLONGCA_AMFHCOGFADP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NKEJGLONGCA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NKEJGLONGCA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKEJGLONGCA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
