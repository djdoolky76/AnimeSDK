#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GMGADEJMCEJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GMGADEJMCEJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GMGADEJMCEJ_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define GMGADEJMCEJ_GDEGCPBLBNC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GMGADEJMCEJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GMGADEJMCEJ_GKKEEOMPEGE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GMGADEJMCEJ_KMJKKEGKJDD_OFFSET UNITYSDK_OFFSET(0x754920)
#define GMGADEJMCEJ_NFDDMGBFGNI_OFFSET UNITYSDK_OFFSET(0x754970)
#define GMGADEJMCEJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A4DD3E0)
#define GMGADEJMCEJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GMGADEJMCEJ_TypeDefinitionIndex = 16362;

struct alignas(4) GMGADEJMCEJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGADEJMCEJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMGADEJMCEJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GMGADEJMCEJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GMGADEJMCEJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GMGADEJMCEJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 KMJKKEGKJDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGADEJMCEJ_KMJKKEGKJDD_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGADEJMCEJ_DECMGICKDLH_OFFSET))(this);
	}

	/*
	::GMGADEJMCEJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GMGADEJMCEJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMGADEJMCEJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GKKEEOMPEGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGADEJMCEJ_GKKEEOMPEGE_OFFSET))(this);
	}

	::System::Int32 NFDDMGBFGNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGADEJMCEJ_NFDDMGBFGNI_OFFSET))(this);
	}

	::System::Int32 GDEGCPBLBNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGADEJMCEJ_GDEGCPBLBNC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGADEJMCEJ_ACOEONABOJL_OFFSET))(this);
	}
};
