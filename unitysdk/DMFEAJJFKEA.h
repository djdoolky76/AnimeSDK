#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DMFEAJJFKEA_AOMAPFOAGNH_OFFSET UNITYSDK_OFFSET(0x754920)
#define DMFEAJJFKEA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DMFEAJJFKEA_BIAJNCJGMLF_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define DMFEAJJFKEA_CEOBLIHOMLF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DMFEAJJFKEA_FCOGCJNIDEG_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define DMFEAJJFKEA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DMFEAJJFKEA_IINBINFGKJM_OFFSET UNITYSDK_OFFSET(0x762D20)
#define DMFEAJJFKEA_ILEBHIIGLLG_OFFSET UNITYSDK_OFFSET(0x762BA0)
#define DMFEAJJFKEA_KAHCGHPAFDM_OFFSET UNITYSDK_OFFSET(0x755440)
#define DMFEAJJFKEA_LDBNDFDBBAO_OFFSET UNITYSDK_OFFSET(0x762C60)
#define DMFEAJJFKEA_MNALJMDAOCJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DMFEAJJFKEA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15754990)
#define DMFEAJJFKEA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DMFEAJJFKEA_TypeDefinitionIndex = 9815;

struct alignas(4) DMFEAJJFKEA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFEAJJFKEA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMFEAJJFKEA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DMFEAJJFKEA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DMFEAJJFKEA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DMFEAJJFKEA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::DMFEAJJFKEA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMFEAJJFKEA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMFEAJJFKEA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* FCOGCJNIDEG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFEAJJFKEA_FCOGCJNIDEG_OFFSET))(this);
	}

	::System::Boolean ILEBHIIGLLG(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + DMFEAJJFKEA_ILEBHIIGLLG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MNALJMDAOCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFEAJJFKEA_MNALJMDAOCJ_OFFSET))(this);
	}

	::System::Boolean LDBNDFDBBAO(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + DMFEAJJFKEA_LDBNDFDBBAO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 CEOBLIHOMLF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFEAJJFKEA_CEOBLIHOMLF_OFFSET))(this);
	}

	::System::Int32 IINBINFGKJM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFEAJJFKEA_IINBINFGKJM_OFFSET))(this);
	}

	::System::String* BIAJNCJGMLF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFEAJJFKEA_BIAJNCJGMLF_OFFSET))(this);
	}

	::System::Int32 KAHCGHPAFDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFEAJJFKEA_KAHCGHPAFDM_OFFSET))(this);
	}

	::System::Int32 AOMAPFOAGNH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFEAJJFKEA_AOMAPFOAGNH_OFFSET))(this);
	}
};
