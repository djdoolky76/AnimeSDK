#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GGBGBPIAPEI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GGBGBPIAPEI_BMFIIFAAOAN_OFFSET UNITYSDK_OFFSET(0x756B10)
#define GGBGBPIAPEI_FGIHAMIKOEN_OFFSET UNITYSDK_OFFSET(0x757290)
#define GGBGBPIAPEI_FKCEJNEICNL_OFFSET UNITYSDK_OFFSET(0x754A70)
#define GGBGBPIAPEI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GGBGBPIAPEI_GHKOBIMHENC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GGBGBPIAPEI_HFGFJDDJLOC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GGBGBPIAPEI_HHJCOCMEHHI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define GGBGBPIAPEI_JFKELBHPLIN_OFFSET UNITYSDK_OFFSET(0x760960)
#define GGBGBPIAPEI_KCCLPALNBCF_OFFSET UNITYSDK_OFFSET(0x754D50)
#define GGBGBPIAPEI_KEFJJNJLBPM_OFFSET UNITYSDK_OFFSET(0x756D50)
#define GGBGBPIAPEI_KMPKIJDLADG_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define GGBGBPIAPEI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B86DD00)
#define GGBGBPIAPEI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GGBGBPIAPEI_TypeDefinitionIndex = 13568;

struct alignas(4) GGBGBPIAPEI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGBPIAPEI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGBGBPIAPEI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GGBGBPIAPEI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GGBGBPIAPEI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGBGBPIAPEI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HHJCOCMEHHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGBPIAPEI_HHJCOCMEHHI_OFFSET))(this);
	}

	::System::String* BMFIIFAAOAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGBPIAPEI_BMFIIFAAOAN_OFFSET))(this);
	}

	::System::Int32 KMPKIJDLADG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGBPIAPEI_KMPKIJDLADG_OFFSET))(this);
	}

	::System::Int32 HFGFJDDJLOC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGBPIAPEI_HFGFJDDJLOC_OFFSET))(this);
	}

	::System::Boolean JFKELBHPLIN(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + GGBGBPIAPEI_JFKELBHPLIN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 KCCLPALNBCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGBPIAPEI_KCCLPALNBCF_OFFSET))(this);
	}

	::System::Int32 GHKOBIMHENC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGBPIAPEI_GHKOBIMHENC_OFFSET))(this);
	}

	::System::Boolean FKCEJNEICNL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GGBGBPIAPEI_FKCEJNEICNL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GGBGBPIAPEI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GGBGBPIAPEI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GGBGBPIAPEI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* FGIHAMIKOEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGBPIAPEI_FGIHAMIKOEN_OFFSET))(this);
	}

	::System::String* KEFJJNJLBPM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGBPIAPEI_KEFJJNJLBPM_OFFSET))(this);
	}
};
