#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JHKMFNKALBJ_ACDAJJGGNIP_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define JHKMFNKALBJ_AGDHPFKALCB_OFFSET UNITYSDK_OFFSET(0x76F1A0)
#define JHKMFNKALBJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JHKMFNKALBJ_DFHKGLIMDNO_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define JHKMFNKALBJ_DGHJMFAHEFM_OFFSET UNITYSDK_OFFSET(0x761240)
#define JHKMFNKALBJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JHKMFNKALBJ_HNJOIIJIPNN_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define JHKMFNKALBJ_NLANHBHBECA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define JHKMFNKALBJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B6324C0)
#define JHKMFNKALBJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JHKMFNKALBJ_TypeDefinitionIndex = 12332;

struct alignas(4) JHKMFNKALBJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKMFNKALBJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHKMFNKALBJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* NLANHBHBECA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKMFNKALBJ_NLANHBHBECA_OFFSET))(this);
	}

	::System::UInt64 AGDHPFKALCB()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKMFNKALBJ_AGDHPFKALCB_OFFSET))(this);
	}

	::System::Int32 DGHJMFAHEFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKMFNKALBJ_DGHJMFAHEFM_OFFSET))(this);
	}

	::System::Boolean ACDAJJGGNIP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JHKMFNKALBJ_ACDAJJGGNIP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::JHKMFNKALBJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHKMFNKALBJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHKMFNKALBJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JHKMFNKALBJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::UInt64 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JHKMFNKALBJ(*)(::System::Int32, ::System::UInt64, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JHKMFNKALBJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DFHKGLIMDNO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKMFNKALBJ_DFHKGLIMDNO_OFFSET))(this);
	}

	::System::Boolean HNJOIIJIPNN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JHKMFNKALBJ_HNJOIIJIPNN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
