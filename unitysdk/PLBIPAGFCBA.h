#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PLBIPAGFCBA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PLBIPAGFCBA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PLBIPAGFCBA_FAPCKGDANLG_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define PLBIPAGFCBA_FBBNMGICKIJ_OFFSET UNITYSDK_OFFSET(0x755790)
#define PLBIPAGFCBA_FJNDPALNMOG_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PLBIPAGFCBA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PLBIPAGFCBA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19DE3610)
#define PLBIPAGFCBA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PLBIPAGFCBA_TypeDefinitionIndex = 11851;

struct alignas(4) PLBIPAGFCBA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBIPAGFCBA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLBIPAGFCBA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean FAPCKGDANLG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PLBIPAGFCBA_FAPCKGDANLG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PLBIPAGFCBA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PLBIPAGFCBA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PLBIPAGFCBA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 FBBNMGICKIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBIPAGFCBA_FBBNMGICKIJ_OFFSET))(this);
	}

	/*
	::PLBIPAGFCBA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLBIPAGFCBA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLBIPAGFCBA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* FJNDPALNMOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBIPAGFCBA_FJNDPALNMOG_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBIPAGFCBA_ACOEONABOJL_OFFSET))(this);
	}
};
