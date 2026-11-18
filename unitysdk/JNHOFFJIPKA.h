#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JNHOFFJIPKA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JNHOFFJIPKA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JNHOFFJIPKA_BLBKAKDIBAN_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JNHOFFJIPKA_DCIHIGJNOJL_OFFSET UNITYSDK_OFFSET(0x754970)
#define JNHOFFJIPKA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JNHOFFJIPKA_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define JNHOFFJIPKA_JHHPOALCJJP_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JNHOFFJIPKA_JJBFDNJCLGE_OFFSET UNITYSDK_OFFSET(0x754A70)
#define JNHOFFJIPKA_KCKPGAHKKLK_OFFSET UNITYSDK_OFFSET(0x756B10)
#define JNHOFFJIPKA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B88FC20)
#define JNHOFFJIPKA_OHOOKLFEOBM_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define JNHOFFJIPKA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JNHOFFJIPKA_TypeDefinitionIndex = 9707;

struct alignas(4) JNHOFFJIPKA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHOFFJIPKA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNHOFFJIPKA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHOFFJIPKA_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::JNHOFFJIPKA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JNHOFFJIPKA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNHOFFJIPKA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean JJBFDNJCLGE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JNHOFFJIPKA_JJBFDNJCLGE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DCIHIGJNOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHOFFJIPKA_DCIHIGJNOJL_OFFSET))(this);
	}

	/*
	static ::JNHOFFJIPKA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JNHOFFJIPKA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JNHOFFJIPKA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 JHHPOALCJJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHOFFJIPKA_JHHPOALCJJP_OFFSET))(this);
	}

	::System::Int32 OHOOKLFEOBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHOFFJIPKA_OHOOKLFEOBM_OFFSET))(this);
	}

	::System::String* KCKPGAHKKLK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHOFFJIPKA_KCKPGAHKKLK_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHOFFJIPKA_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 BLBKAKDIBAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHOFFJIPKA_BLBKAKDIBAN_OFFSET))(this);
	}
};
