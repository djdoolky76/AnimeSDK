#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DBIIBIKKLGC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DBIIBIKKLGC_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DBIIBIKKLGC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DBIIBIKKLGC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DBIIBIKKLGC_IEKPIAAOIAC_OFFSET UNITYSDK_OFFSET(0x754970)
#define DBIIBIKKLGC_INGHNFJLNPL_OFFSET UNITYSDK_OFFSET(0x756B10)
#define DBIIBIKKLGC_JMOPNJCIOEC_OFFSET UNITYSDK_OFFSET(0x766400)
#define DBIIBIKKLGC_MDCABPEFAGO_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DBIIBIKKLGC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A94C30)
#define DBIIBIKKLGC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DBIIBIKKLGC_TypeDefinitionIndex = 16551;

struct alignas(4) DBIIBIKKLGC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIIBIKKLGC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DBIIBIKKLGC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIIBIKKLGC_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::DBIIBIKKLGC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DBIIBIKKLGC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DBIIBIKKLGC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* INGHNFJLNPL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIIBIKKLGC_INGHNFJLNPL_OFFSET))(this);
	}

	::System::String* MDCABPEFAGO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIIBIKKLGC_MDCABPEFAGO_OFFSET))(this);
	}

	::System::Int32 IEKPIAAOIAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIIBIKKLGC_IEKPIAAOIAC_OFFSET))(this);
	}

	::System::Boolean JMOPNJCIOEC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIIBIKKLGC_JMOPNJCIOEC_OFFSET))(this);
	}

	/*
	static ::DBIIBIKKLGC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DBIIBIKKLGC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DBIIBIKKLGC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIIBIKKLGC_APCKPKCNFJE_OFFSET))(this);
	}
};
