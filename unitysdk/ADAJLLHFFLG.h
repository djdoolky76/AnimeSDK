#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define ADAJLLHFFLG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ADAJLLHFFLG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ADAJLLHFFLG_CLBAAHEDGEP_OFFSET UNITYSDK_OFFSET(0x754970)
#define ADAJLLHFFLG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ADAJLLHFFLG_NFMFBPDFLJD_OFFSET UNITYSDK_OFFSET(0x754920)
#define ADAJLLHFFLG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A513890)
#define ADAJLLHFFLG_PGGANLAMJOP_OFFSET UNITYSDK_OFFSET(0x76FBF0)
#define ADAJLLHFFLG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ADAJLLHFFLG_TypeDefinitionIndex = 10812;

struct alignas(4) ADAJLLHFFLG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAJLLHFFLG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ADAJLLHFFLG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean PGGANLAMJOP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAJLLHFFLG_PGGANLAMJOP_OFFSET))(this);
	}

	/*
	::ADAJLLHFFLG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ADAJLLHFFLG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ADAJLLHFFLG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NFMFBPDFLJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAJLLHFFLG_NFMFBPDFLJD_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAJLLHFFLG_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::ADAJLLHFFLG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ADAJLLHFFLG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ADAJLLHFFLG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CLBAAHEDGEP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAJLLHFFLG_CLBAAHEDGEP_OFFSET))(this);
	}
};
