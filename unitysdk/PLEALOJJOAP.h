#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PLEALOJJOAP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PLEALOJJOAP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PLEALOJJOAP_EHEDNGGDAKF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define PLEALOJJOAP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PLEALOJJOAP_IIHBAMOMOBC_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define PLEALOJJOAP_NLBOALNBODH_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define PLEALOJJOAP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C1AE060)
#define PLEALOJJOAP_OCEEOEELJFP_OFFSET UNITYSDK_OFFSET(0x754970)
#define PLEALOJJOAP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PLEALOJJOAP_TypeDefinitionIndex = 17442;

struct alignas(4) PLEALOJJOAP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEALOJJOAP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLEALOJJOAP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OCEEOEELJFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEALOJJOAP_OCEEOEELJFP_OFFSET))(this);
	}

	::System::Int32 EHEDNGGDAKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEALOJJOAP_EHEDNGGDAKF_OFFSET))(this);
	}

	/*
	static ::PLEALOJJOAP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PLEALOJJOAP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PLEALOJJOAP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::PLEALOJJOAP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLEALOJJOAP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLEALOJJOAP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NLBOALNBODH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEALOJJOAP_NLBOALNBODH_OFFSET))(this);
	}

	::System::String* IIHBAMOMOBC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEALOJJOAP_IIHBAMOMOBC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEALOJJOAP_ACOEONABOJL_OFFSET))(this);
	}
};
