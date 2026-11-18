#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HBIGPLGFEJK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HBIGPLGFEJK_EJICOFDMKMK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define HBIGPLGFEJK_FLLPFBEKIKB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HBIGPLGFEJK_FNBOALOOFEL_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define HBIGPLGFEJK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HBIGPLGFEJK_JBNFNCIBLAO_OFFSET UNITYSDK_OFFSET(0x758780)
#define HBIGPLGFEJK_JBOIMNAPIKG_OFFSET UNITYSDK_OFFSET(0x754920)
#define HBIGPLGFEJK_LFDBJAMBGKF_OFFSET UNITYSDK_OFFSET(0x754F10)
#define HBIGPLGFEJK_LMDMNKPMOBO_OFFSET UNITYSDK_OFFSET(0x754C20)
#define HBIGPLGFEJK_NFDDMGBFGNI_OFFSET UNITYSDK_OFFSET(0x755C70)
#define HBIGPLGFEJK_OJMEPMCCFEJ_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define HBIGPLGFEJK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HBIGPLGFEJK_TypeDefinitionIndex = 15209;

struct alignas(4) HBIGPLGFEJK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIGPLGFEJK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBIGPLGFEJK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HBIGPLGFEJK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HBIGPLGFEJK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBIGPLGFEJK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NFDDMGBFGNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIGPLGFEJK_NFDDMGBFGNI_OFFSET))(this);
	}

	::System::String* EJICOFDMKMK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIGPLGFEJK_EJICOFDMKMK_OFFSET))(this);
	}

	::System::Int32 FLLPFBEKIKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIGPLGFEJK_FLLPFBEKIKB_OFFSET))(this);
	}

	::System::Int32 JBNFNCIBLAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIGPLGFEJK_JBNFNCIBLAO_OFFSET))(this);
	}

	::System::Int32 JBOIMNAPIKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIGPLGFEJK_JBOIMNAPIKG_OFFSET))(this);
	}

	::System::Boolean FNBOALOOFEL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HBIGPLGFEJK_FNBOALOOFEL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 OJMEPMCCFEJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIGPLGFEJK_OJMEPMCCFEJ_OFFSET))(this);
	}

	::System::Int32 LMDMNKPMOBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIGPLGFEJK_LMDMNKPMOBO_OFFSET))(this);
	}

	::System::String* LFDBJAMBGKF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIGPLGFEJK_LFDBJAMBGKF_OFFSET))(this);
	}
};
