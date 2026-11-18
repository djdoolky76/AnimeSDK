#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define AOPFLICJCBC_BENIGDKEBMJ_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define AOPFLICJCBC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AOPFLICJCBC_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define AOPFLICJCBC_FOPLHHECFPN_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define AOPFLICJCBC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AOPFLICJCBC_GLEIIDKNKDF_OFFSET UNITYSDK_OFFSET(0x756B90)
#define AOPFLICJCBC_JGFNEFMLEOI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AOPFLICJCBC_NPKMAOFIFHH_OFFSET UNITYSDK_OFFSET(0x754920)
#define AOPFLICJCBC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AOPFLICJCBC_TypeDefinitionIndex = 15497;

struct alignas(4) AOPFLICJCBC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPFLICJCBC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOPFLICJCBC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPFLICJCBC_DGFAJDNHCIJ_OFFSET))(this);
	}

	/*
	::AOPFLICJCBC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AOPFLICJCBC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOPFLICJCBC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GLEIIDKNKDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPFLICJCBC_GLEIIDKNKDF_OFFSET))(this);
	}

	::System::Boolean BENIGDKEBMJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + AOPFLICJCBC_BENIGDKEBMJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 FOPLHHECFPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPFLICJCBC_FOPLHHECFPN_OFFSET))(this);
	}

	::System::Int32 NPKMAOFIFHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPFLICJCBC_NPKMAOFIFHH_OFFSET))(this);
	}

	::System::Int32 JGFNEFMLEOI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPFLICJCBC_JGFNEFMLEOI_OFFSET))(this);
	}
};
