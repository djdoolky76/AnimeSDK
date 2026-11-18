#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IFMDDIOEJGI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OGNIAKLKEEH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OGNIAKLKEEH_DKANCJJFFNC_OFFSET UNITYSDK_OFFSET(0x754F10)
#define OGNIAKLKEEH_GDODEOOCOGO_OFFSET UNITYSDK_OFFSET(0x756720)
#define OGNIAKLKEEH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OGNIAKLKEEH_MMOFNJJPBDP_OFFSET UNITYSDK_OFFSET(0x805B90)
#define OGNIAKLKEEH_OEGGAJHHMKN_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OGNIAKLKEEH_OKGKODNEICJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OGNIAKLKEEH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OGNIAKLKEEH_TypeDefinitionIndex = 14028;

struct alignas(4) OGNIAKLKEEH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNIAKLKEEH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGNIAKLKEEH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OKGKODNEICJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNIAKLKEEH_OKGKODNEICJ_OFFSET))(this);
	}

	::System::Int32 GDODEOOCOGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNIAKLKEEH_GDODEOOCOGO_OFFSET))(this);
	}

	/*
	::OGNIAKLKEEH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGNIAKLKEEH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGNIAKLKEEH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* DKANCJJFFNC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNIAKLKEEH_DKANCJJFFNC_OFFSET))(this);
	}

	::System::Boolean MMOFNJJPBDP(::System::Int32 HPMEONKHFGG, ::IFMDDIOEJGI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IFMDDIOEJGI&))((::PBYTE)hIl2Cpp + OGNIAKLKEEH_MMOFNJJPBDP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 OEGGAJHHMKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNIAKLKEEH_OEGGAJHHMKN_OFFSET))(this);
	}
};
