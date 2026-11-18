#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BJHIPENJCOK_ALLENMMGLEK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BJHIPENJCOK_BCOADABAAEM_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define BJHIPENJCOK_BGJOEHIOGJB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BJHIPENJCOK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BJHIPENJCOK_BOLLDGCJNLA_OFFSET UNITYSDK_OFFSET(0x756060)
#define BJHIPENJCOK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BJHIPENJCOK_ILCDEDNHCHK_OFFSET UNITYSDK_OFFSET(0x756510)
#define BJHIPENJCOK_JNLAHADONGC_OFFSET UNITYSDK_OFFSET(0x755570)
#define BJHIPENJCOK_LCEABBIEIFD_OFFSET UNITYSDK_OFFSET(0x757190)
#define BJHIPENJCOK_LCNAPELFGBG_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BJHIPENJCOK_NOAPHMACGLP_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BJHIPENJCOK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x194FB1B0)
#define BJHIPENJCOK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BJHIPENJCOK_TypeDefinitionIndex = 17700;

struct alignas(4) BJHIPENJCOK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHIPENJCOK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BJHIPENJCOK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* JNLAHADONGC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHIPENJCOK_JNLAHADONGC_OFFSET))(this);
	}

	::System::String* LCEABBIEIFD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHIPENJCOK_LCEABBIEIFD_OFFSET))(this);
	}

	/*
	static ::BJHIPENJCOK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BJHIPENJCOK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BJHIPENJCOK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ALLENMMGLEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHIPENJCOK_ALLENMMGLEK_OFFSET))(this);
	}

	::System::Int32 LCNAPELFGBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHIPENJCOK_LCNAPELFGBG_OFFSET))(this);
	}

	::System::Int32 ILCDEDNHCHK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHIPENJCOK_ILCDEDNHCHK_OFFSET))(this);
	}

	::System::Int32 BCOADABAAEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHIPENJCOK_BCOADABAAEM_OFFSET))(this);
	}

	::System::Int32 NOAPHMACGLP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHIPENJCOK_NOAPHMACGLP_OFFSET))(this);
	}

	::System::Boolean BOLLDGCJNLA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BJHIPENJCOK_BOLLDGCJNLA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::BJHIPENJCOK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BJHIPENJCOK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BJHIPENJCOK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BGJOEHIOGJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHIPENJCOK_BGJOEHIOGJB_OFFSET))(this);
	}
};
