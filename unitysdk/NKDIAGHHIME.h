#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OMPBJPFCPFH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NKDIAGHHIME_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NKDIAGHHIME_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NKDIAGHHIME_CGEFMHIAEAH_OFFSET UNITYSDK_OFFSET(0x7A60E0)
#define NKDIAGHHIME_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NKDIAGHHIME_HPFCMDGLCBB_OFFSET UNITYSDK_OFFSET(0x761240)
#define NKDIAGHHIME_IOIENACFPEP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NKDIAGHHIME_NAGALCPILLM_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define NKDIAGHHIME_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x173539F0)
#define NKDIAGHHIME_PFHIOKCLPAN_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define NKDIAGHHIME___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NKDIAGHHIME_TypeDefinitionIndex = 11539;

struct alignas(4) NKDIAGHHIME
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDIAGHHIME_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKDIAGHHIME___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PFHIOKCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDIAGHHIME_PFHIOKCLPAN_OFFSET))(this);
	}

	::System::String* IOIENACFPEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDIAGHHIME_IOIENACFPEP_OFFSET))(this);
	}

	::System::Boolean NAGALCPILLM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NKDIAGHHIME_NAGALCPILLM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDIAGHHIME_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean CGEFMHIAEAH(::System::Int32 HPMEONKHFGG, ::OMPBJPFCPFH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OMPBJPFCPFH&))((::PBYTE)hIl2Cpp + NKDIAGHHIME_CGEFMHIAEAH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NKDIAGHHIME BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NKDIAGHHIME(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKDIAGHHIME_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NKDIAGHHIME OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NKDIAGHHIME(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NKDIAGHHIME_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HPFCMDGLCBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDIAGHHIME_HPFCMDGLCBB_OFFSET))(this);
	}
};
