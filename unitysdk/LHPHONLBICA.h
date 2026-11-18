#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LHPHONLBICA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LHPHONLBICA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LHPHONLBICA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LHPHONLBICA_GHNGINBAOGK_OFFSET UNITYSDK_OFFSET(0x755A00)
#define LHPHONLBICA_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LHPHONLBICA_JFLNBJIALHD_OFFSET UNITYSDK_OFFSET(0x754920)
#define LHPHONLBICA_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x754970)
#define LHPHONLBICA_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LHPHONLBICA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18DFAF00)
#define LHPHONLBICA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LHPHONLBICA_TypeDefinitionIndex = 14687;

struct alignas(4) LHPHONLBICA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPHONLBICA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHPHONLBICA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPHONLBICA_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPHONLBICA_NLAIFNFGGMA_OFFSET))(this);
	}

	::System::String* GHNGINBAOGK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPHONLBICA_GHNGINBAOGK_OFFSET))(this);
	}

	::System::Int32 JFLNBJIALHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPHONLBICA_JFLNBJIALHD_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPHONLBICA_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPHONLBICA_GPBFENDAJMF_OFFSET))(this);
	}

	/*
	::LHPHONLBICA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LHPHONLBICA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHPHONLBICA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LHPHONLBICA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LHPHONLBICA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LHPHONLBICA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
