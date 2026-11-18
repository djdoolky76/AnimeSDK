#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NNCLKNMEGED_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NNCLKNMEGED_EDCAMELPLII_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NNCLKNMEGED_FNBOALOOFEL_OFFSET UNITYSDK_OFFSET(0x756360)
#define NNCLKNMEGED_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NNCLKNMEGED_GNKGJLCEHBH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NNCLKNMEGED_JBOIMNAPIKG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define NNCLKNMEGED_KINKHOPMBPP_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define NNCLKNMEGED_LMDMNKPMOBO_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define NNCLKNMEGED_NFDDMGBFGNI_OFFSET UNITYSDK_OFFSET(0x758780)
#define NNCLKNMEGED___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NNCLKNMEGED_TypeDefinitionIndex = 10829;

struct alignas(4) NNCLKNMEGED
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCLKNMEGED_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNCLKNMEGED___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* GNKGJLCEHBH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCLKNMEGED_GNKGJLCEHBH_OFFSET))(this);
	}

	::System::Int32 EDCAMELPLII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCLKNMEGED_EDCAMELPLII_OFFSET))(this);
	}

	/*
	::NNCLKNMEGED BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NNCLKNMEGED(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNCLKNMEGED_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LMDMNKPMOBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCLKNMEGED_LMDMNKPMOBO_OFFSET))(this);
	}

	::System::Int32 JBOIMNAPIKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCLKNMEGED_JBOIMNAPIKG_OFFSET))(this);
	}

	::System::Int32 KINKHOPMBPP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCLKNMEGED_KINKHOPMBPP_OFFSET))(this);
	}

	::System::Boolean FNBOALOOFEL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NNCLKNMEGED_FNBOALOOFEL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NFDDMGBFGNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCLKNMEGED_NFDDMGBFGNI_OFFSET))(this);
	}
};
