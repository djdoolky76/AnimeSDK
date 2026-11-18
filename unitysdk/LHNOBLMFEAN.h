#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LHNOBLMFEAN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LHNOBLMFEAN_CAJBLNDLIMH_OFFSET UNITYSDK_OFFSET(0x761240)
#define LHNOBLMFEAN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LHNOBLMFEAN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1958EAA0)
#define LHNOBLMFEAN_OCFINNPHHMH_OFFSET UNITYSDK_OFFSET(0x7612A0)
#define LHNOBLMFEAN_ODGGIAADMLO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LHNOBLMFEAN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LHNOBLMFEAN_TypeDefinitionIndex = 13549;

struct alignas(4) LHNOBLMFEAN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNOBLMFEAN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHNOBLMFEAN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LHNOBLMFEAN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LHNOBLMFEAN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHNOBLMFEAN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean OCFINNPHHMH(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + LHNOBLMFEAN_OCFINNPHHMH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LHNOBLMFEAN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LHNOBLMFEAN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LHNOBLMFEAN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CAJBLNDLIMH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNOBLMFEAN_CAJBLNDLIMH_OFFSET))(this);
	}

	::System::Int32 ODGGIAADMLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNOBLMFEAN_ODGGIAADMLO_OFFSET))(this);
	}
};
