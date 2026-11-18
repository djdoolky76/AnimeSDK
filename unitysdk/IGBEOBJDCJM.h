#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IGBEOBJDCJM_AEAJPKILALJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IGBEOBJDCJM_AOALNCCELAJ_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define IGBEOBJDCJM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IGBEOBJDCJM_CEBHDNOJHON_OFFSET UNITYSDK_OFFSET(0x754920)
#define IGBEOBJDCJM_DEFOHMACLOC_OFFSET UNITYSDK_OFFSET(0x754D50)
#define IGBEOBJDCJM_FPEMHOOAHFH_OFFSET UNITYSDK_OFFSET(0x788D40)
#define IGBEOBJDCJM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IGBEOBJDCJM_JJDKLGFBHGO_OFFSET UNITYSDK_OFFSET(0x756D50)
#define IGBEOBJDCJM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B7CC980)
#define IGBEOBJDCJM_PCIIIDFDNKD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IGBEOBJDCJM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IGBEOBJDCJM_TypeDefinitionIndex = 17678;

struct alignas(4) IGBEOBJDCJM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBEOBJDCJM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGBEOBJDCJM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::UInt64 FPEMHOOAHFH()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBEOBJDCJM_FPEMHOOAHFH_OFFSET))(this);
	}

	::System::Int32 CEBHDNOJHON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBEOBJDCJM_CEBHDNOJHON_OFFSET))(this);
	}

	::System::Int32 AEAJPKILALJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBEOBJDCJM_AEAJPKILALJ_OFFSET))(this);
	}

	/*
	static ::IGBEOBJDCJM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IGBEOBJDCJM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IGBEOBJDCJM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* JJDKLGFBHGO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBEOBJDCJM_JJDKLGFBHGO_OFFSET))(this);
	}

	::System::Int32 DEFOHMACLOC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBEOBJDCJM_DEFOHMACLOC_OFFSET))(this);
	}

	/*
	::IGBEOBJDCJM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IGBEOBJDCJM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGBEOBJDCJM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PCIIIDFDNKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBEOBJDCJM_PCIIIDFDNKD_OFFSET))(this);
	}

	::System::Boolean AOALNCCELAJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IGBEOBJDCJM_AOALNCCELAJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
