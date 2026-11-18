#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define ABDDBENJPKA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ABDDBENJPKA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ABDDBENJPKA_DMHFABNMEPN_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define ABDDBENJPKA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ABDDBENJPKA_HIBACECOBPP_OFFSET UNITYSDK_OFFSET(0x7667E0)
#define ABDDBENJPKA_NDBFPGFMKFH_OFFSET UNITYSDK_OFFSET(0x755190)
#define ABDDBENJPKA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C5002F0)
#define ABDDBENJPKA_ODMGFJABCMN_OFFSET UNITYSDK_OFFSET(0x7A5B80)
#define ABDDBENJPKA_OECGIDOLFPB_OFFSET UNITYSDK_OFFSET(0x7666A0)
#define ABDDBENJPKA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ABDDBENJPKA_TypeDefinitionIndex = 10978;

struct alignas(4) ABDDBENJPKA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDDBENJPKA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABDDBENJPKA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NDBFPGFMKFH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDDBENJPKA_NDBFPGFMKFH_OFFSET))(this);
	}

	::System::Single ODMGFJABCMN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDDBENJPKA_ODMGFJABCMN_OFFSET))(this);
	}

	/*
	::ABDDBENJPKA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ABDDBENJPKA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABDDBENJPKA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ABDDBENJPKA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ABDDBENJPKA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ABDDBENJPKA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Single OECGIDOLFPB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDDBENJPKA_OECGIDOLFPB_OFFSET))(this);
	}

	::System::Single HIBACECOBPP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDDBENJPKA_HIBACECOBPP_OFFSET))(this);
	}

	::System::Int32 DMHFABNMEPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDDBENJPKA_DMHFABNMEPN_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDDBENJPKA_ACOEONABOJL_OFFSET))(this);
	}
};
