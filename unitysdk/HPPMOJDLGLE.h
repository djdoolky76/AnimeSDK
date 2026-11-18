#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HPPMOJDLGLE_APIGLFOFEJD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HPPMOJDLGLE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HPPMOJDLGLE_BLGFAKIFKLH_OFFSET UNITYSDK_OFFSET(0x754970)
#define HPPMOJDLGLE_EOAABHIBAKI_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define HPPMOJDLGLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HPPMOJDLGLE_HGCHKJPOPPD_OFFSET UNITYSDK_OFFSET(0x754920)
#define HPPMOJDLGLE_KNEIHGGBMOP_OFFSET UNITYSDK_OFFSET(0x755C70)
#define HPPMOJDLGLE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18BB5720)
#define HPPMOJDLGLE_OIFMBMJBPBN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HPPMOJDLGLE_OPFPCDJFCNJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HPPMOJDLGLE_PPGJAIAIDHA_OFFSET UNITYSDK_OFFSET(0x754C20)
#define HPPMOJDLGLE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HPPMOJDLGLE_TypeDefinitionIndex = 9712;

struct alignas(4) HPPMOJDLGLE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPMOJDLGLE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPPMOJDLGLE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean EOAABHIBAKI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HPPMOJDLGLE_EOAABHIBAKI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PPGJAIAIDHA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPMOJDLGLE_PPGJAIAIDHA_OFFSET))(this);
	}

	::System::Int32 OIFMBMJBPBN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPMOJDLGLE_OIFMBMJBPBN_OFFSET))(this);
	}

	::System::Int32 BLGFAKIFKLH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPMOJDLGLE_BLGFAKIFKLH_OFFSET))(this);
	}

	::System::Int32 APIGLFOFEJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPMOJDLGLE_APIGLFOFEJD_OFFSET))(this);
	}

	::System::Int32 OPFPCDJFCNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPMOJDLGLE_OPFPCDJFCNJ_OFFSET))(this);
	}

	::System::Int32 KNEIHGGBMOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPMOJDLGLE_KNEIHGGBMOP_OFFSET))(this);
	}

	::System::Int32 HGCHKJPOPPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPMOJDLGLE_HGCHKJPOPPD_OFFSET))(this);
	}

	/*
	static ::HPPMOJDLGLE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HPPMOJDLGLE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HPPMOJDLGLE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::HPPMOJDLGLE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPPMOJDLGLE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPPMOJDLGLE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
