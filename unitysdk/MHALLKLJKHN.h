#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define MHALLKLJKHN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MHALLKLJKHN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MHALLKLJKHN_BNKHDNKDIKB_OFFSET UNITYSDK_OFFSET(0x7C4080)
#define MHALLKLJKHN_CAPEBDGEINN_OFFSET UNITYSDK_OFFSET(0x77A7A0)
#define MHALLKLJKHN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MHALLKLJKHN_IJAHDHEEEPF_OFFSET UNITYSDK_OFFSET(0x7C3D50)
#define MHALLKLJKHN_MFPMIFLLCAJ_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define MHALLKLJKHN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17FC5970)
#define MHALLKLJKHN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MHALLKLJKHN_TypeDefinitionIndex = 12448;

struct alignas(4) MHALLKLJKHN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHALLKLJKHN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHALLKLJKHN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean IJAHDHEEEPF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHALLKLJKHN_IJAHDHEEEPF_OFFSET))(this);
	}

	::System::UInt64 CAPEBDGEINN()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MHALLKLJKHN_CAPEBDGEINN_OFFSET))(this);
	}

	::System::UInt64 BNKHDNKDIKB()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MHALLKLJKHN_BNKHDNKDIKB_OFFSET))(this);
	}

	::System::Int32 MFPMIFLLCAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHALLKLJKHN_MFPMIFLLCAJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHALLKLJKHN_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::MHALLKLJKHN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MHALLKLJKHN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MHALLKLJKHN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::MHALLKLJKHN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MHALLKLJKHN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHALLKLJKHN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
