#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IGEDOCMEJFG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IGEDOCMEJFG_AIKEIHBLDMD_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define IGEDOCMEJFG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IGEDOCMEJFG_CIAEIDIJDBP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define IGEDOCMEJFG_CNLNJDKABMI_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define IGEDOCMEJFG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IGEDOCMEJFG_IOJLDANNFFG_OFFSET UNITYSDK_OFFSET(0x754F10)
#define IGEDOCMEJFG_MBGMBCNHCDB_OFFSET UNITYSDK_OFFSET(0x756B10)
#define IGEDOCMEJFG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x16107C60)
#define IGEDOCMEJFG_OCIKMEKFKFL_OFFSET UNITYSDK_OFFSET(0x756D50)
#define IGEDOCMEJFG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IGEDOCMEJFG_TypeDefinitionIndex = 13969;

struct alignas(4) IGEDOCMEJFG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGEDOCMEJFG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGEDOCMEJFG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* CNLNJDKABMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGEDOCMEJFG_CNLNJDKABMI_OFFSET))(this);
	}

	/*
	static ::IGEDOCMEJFG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IGEDOCMEJFG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IGEDOCMEJFG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* IOJLDANNFFG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGEDOCMEJFG_IOJLDANNFFG_OFFSET))(this);
	}

	::System::String* MBGMBCNHCDB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGEDOCMEJFG_MBGMBCNHCDB_OFFSET))(this);
	}

	::System::String* AIKEIHBLDMD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGEDOCMEJFG_AIKEIHBLDMD_OFFSET))(this);
	}

	/*
	::IGEDOCMEJFG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IGEDOCMEJFG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGEDOCMEJFG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* OCIKMEKFKFL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGEDOCMEJFG_OCIKMEKFKFL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGEDOCMEJFG_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* CIAEIDIJDBP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGEDOCMEJFG_CIAEIDIJDBP_OFFSET))(this);
	}
};
