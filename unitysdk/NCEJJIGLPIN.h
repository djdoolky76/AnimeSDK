#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/GPJMHAAEIKO.h"
#include "unitysdk/NCJLKIIGPIC.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NCEJJIGLPIN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NCEJJIGLPIN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NCEJJIGLPIN_BIKODCEMKLH_OFFSET UNITYSDK_OFFSET(0x78A030)
#define NCEJJIGLPIN_DNKCABNJIMD_OFFSET UNITYSDK_OFFSET(0x7DEBE0)
#define NCEJJIGLPIN_GBDOMCLBFEE_OFFSET UNITYSDK_OFFSET(0x7DEB90)
#define NCEJJIGLPIN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NCEJJIGLPIN_KGIIPPKAPFG_OFFSET UNITYSDK_OFFSET(0x754920)
#define NCEJJIGLPIN_LAAOGDACKJA_OFFSET UNITYSDK_OFFSET(0x7666A0)
#define NCEJJIGLPIN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1D0C0290)
#define NCEJJIGLPIN_OHDAOIDAFAD_OFFSET UNITYSDK_OFFSET(0x755D20)
#define NCEJJIGLPIN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NCEJJIGLPIN_TypeDefinitionIndex = 17647;

struct alignas(4) NCEJJIGLPIN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEJJIGLPIN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCEJJIGLPIN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NCEJJIGLPIN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NCEJJIGLPIN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCEJJIGLPIN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NCEJJIGLPIN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NCEJJIGLPIN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NCEJJIGLPIN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Single BIKODCEMKLH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEJJIGLPIN_BIKODCEMKLH_OFFSET))(this);
	}

	::NCJLKIIGPIC DNKCABNJIMD()
	{
		return ((::NCJLKIIGPIC(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEJJIGLPIN_DNKCABNJIMD_OFFSET))(this);
	}

	::System::Int32 OHDAOIDAFAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEJJIGLPIN_OHDAOIDAFAD_OFFSET))(this);
	}

	::System::Single LAAOGDACKJA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEJJIGLPIN_LAAOGDACKJA_OFFSET))(this);
	}

	::GPJMHAAEIKO GBDOMCLBFEE()
	{
		return ((::GPJMHAAEIKO(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEJJIGLPIN_GBDOMCLBFEE_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEJJIGLPIN_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 KGIIPPKAPFG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEJJIGLPIN_KGIIPPKAPFG_OFFSET))(this);
	}
};
