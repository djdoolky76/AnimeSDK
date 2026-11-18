#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HHALNDDDNOD_AFCFHJOMBGO_OFFSET UNITYSDK_OFFSET(0x7666F0)
#define HHALNDDDNOD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HHALNDDDNOD_CKNLCHCJFMB_1_OFFSET UNITYSDK_OFFSET(0x17473450)
#define HHALNDDDNOD_CKNLCHCJFMB_OFFSET UNITYSDK_OFFSET(0x1746ABC0)
#define HHALNDDDNOD_EJJMOACHIGM_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define HHALNDDDNOD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HHALNDDDNOD_GGFCHPCHMBO_OFFSET UNITYSDK_OFFSET(0x7666A0)
#define HHALNDDDNOD_IPKOAJHIJCN_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HHALNDDDNOD_KCABHOPDLDA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HHALNDDDNOD_KOIMDKJCNJB_OFFSET UNITYSDK_OFFSET(0x7A5B80)
#define HHALNDDDNOD_OPFLFKDBLHB_OFFSET UNITYSDK_OFFSET(0x766740)
#define HHALNDDDNOD_PIJDHOBBKEF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HHALNDDDNOD_PJDBCCBPIJF_OFFSET UNITYSDK_OFFSET(0x758780)
#define HHALNDDDNOD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HHALNDDDNOD_TypeDefinitionIndex = 12754;

struct alignas(4) HHALNDDDNOD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHALNDDDNOD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHALNDDDNOD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HHALNDDDNOD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHALNDDDNOD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHALNDDDNOD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Single KOIMDKJCNJB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HHALNDDDNOD_KOIMDKJCNJB_OFFSET))(this);
	}

	::System::Int32 PIJDHOBBKEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHALNDDDNOD_PIJDHOBBKEF_OFFSET))(this);
	}

	::System::Int32 KCABHOPDLDA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHALNDDDNOD_KCABHOPDLDA_OFFSET))(this);
	}

	::System::Int32 IPKOAJHIJCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHALNDDDNOD_IPKOAJHIJCN_OFFSET))(this);
	}

	/*
	static ::HHALNDDDNOD CKNLCHCJFMB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHALNDDDNOD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHALNDDDNOD_CKNLCHCJFMB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 PJDBCCBPIJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHALNDDDNOD_PJDBCCBPIJF_OFFSET))(this);
	}

	::System::Single GGFCHPCHMBO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HHALNDDDNOD_GGFCHPCHMBO_OFFSET))(this);
	}

	::System::Int32 EJJMOACHIGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHALNDDDNOD_EJJMOACHIGM_OFFSET))(this);
	}

	::System::Single OPFLFKDBLHB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HHALNDDDNOD_OPFLFKDBLHB_OFFSET))(this);
	}

	/*
	static ::HHALNDDDNOD CKNLCHCJFMB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HHALNDDDNOD EIFONLCJOPG)
	{
		return ((::HHALNDDDNOD(*)(::FlatBuffers::ByteBuffer*, ::HHALNDDDNOD))((::PBYTE)hIl2Cpp + HHALNDDDNOD_CKNLCHCJFMB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Single AFCFHJOMBGO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HHALNDDDNOD_AFCFHJOMBGO_OFFSET))(this);
	}
};
