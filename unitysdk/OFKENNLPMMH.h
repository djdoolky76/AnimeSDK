#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EPHBGKMGEFF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OFKENNLPMMH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OFKENNLPMMH_BCEENHDLNKF_OFFSET UNITYSDK_OFFSET(0x757290)
#define OFKENNLPMMH_BGKBLDJIFJB_OFFSET UNITYSDK_OFFSET(0x756D50)
#define OFKENNLPMMH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OFKENNLPMMH_BIOBBJBOAJF_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define OFKENNLPMMH_CMFBBANLLGO_OFFSET UNITYSDK_OFFSET(0x755790)
#define OFKENNLPMMH_COIFMONFOBI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OFKENNLPMMH_FKPPAADDKEO_OFFSET UNITYSDK_OFFSET(0x754D50)
#define OFKENNLPMMH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OFKENNLPMMH_HIIAFPIPOOJ_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define OFKENNLPMMH_JFOBHAJJOKD_OFFSET UNITYSDK_OFFSET(0x754C20)
#define OFKENNLPMMH_JPCNGNDKLPD_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define OFKENNLPMMH_LACINMEHPBC_OFFSET UNITYSDK_OFFSET(0x754A70)
#define OFKENNLPMMH_LDBMBPGJCKB_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define OFKENNLPMMH_NDAAEKGDLJF_OFFSET UNITYSDK_OFFSET(0x7A60E0)
#define OFKENNLPMMH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17366120)
#define OFKENNLPMMH_OMMPOCAEBGE_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define OFKENNLPMMH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OFKENNLPMMH_TypeDefinitionIndex = 14783;

struct alignas(4) OFKENNLPMMH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKENNLPMMH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFKENNLPMMH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HIIAFPIPOOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKENNLPMMH_HIIAFPIPOOJ_OFFSET))(this);
	}

	::System::Int32 FKPPAADDKEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKENNLPMMH_FKPPAADDKEO_OFFSET))(this);
	}

	::System::String* BCEENHDLNKF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKENNLPMMH_BCEENHDLNKF_OFFSET))(this);
	}

	::System::Int32 JPCNGNDKLPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKENNLPMMH_JPCNGNDKLPD_OFFSET))(this);
	}

	/*
	static ::OFKENNLPMMH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OFKENNLPMMH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OFKENNLPMMH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean BIOBBJBOAJF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OFKENNLPMMH_BIOBBJBOAJF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean NDAAEKGDLJF(::System::Int32 HPMEONKHFGG, ::EPHBGKMGEFF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EPHBGKMGEFF&))((::PBYTE)hIl2Cpp + OFKENNLPMMH_NDAAEKGDLJF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* BGKBLDJIFJB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKENNLPMMH_BGKBLDJIFJB_OFFSET))(this);
	}

	::System::Boolean LDBMBPGJCKB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OFKENNLPMMH_LDBMBPGJCKB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JFOBHAJJOKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKENNLPMMH_JFOBHAJJOKD_OFFSET))(this);
	}

	::System::Int32 CMFBBANLLGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKENNLPMMH_CMFBBANLLGO_OFFSET))(this);
	}

	/*
	::OFKENNLPMMH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OFKENNLPMMH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFKENNLPMMH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean OMMPOCAEBGE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OFKENNLPMMH_OMMPOCAEBGE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LACINMEHPBC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OFKENNLPMMH_LACINMEHPBC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKENNLPMMH_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 COIFMONFOBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKENNLPMMH_COIFMONFOBI_OFFSET))(this);
	}
};
