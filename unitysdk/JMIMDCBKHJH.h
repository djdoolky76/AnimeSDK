#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JMIMDCBKHJH_BBKGGJDNOFI_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define JMIMDCBKHJH_BENNPABABDH_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define JMIMDCBKHJH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JMIMDCBKHJH_DGDDPJEGKFF_OFFSET UNITYSDK_OFFSET(0x755E40)
#define JMIMDCBKHJH_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x758780)
#define JMIMDCBKHJH_FMGCACHCJIL_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define JMIMDCBKHJH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JMIMDCBKHJH_JFLGCOEHGNO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JMIMDCBKHJH_KAAEPCBNEIG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JMIMDCBKHJH_KFCOPANMAKE_OFFSET UNITYSDK_OFFSET(0x756D50)
#define JMIMDCBKHJH_MCNNGGNLCKC_OFFSET UNITYSDK_OFFSET(0x756B10)
#define JMIMDCBKHJH_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JMIMDCBKHJH_NFDDMGBFGNI_OFFSET UNITYSDK_OFFSET(0x755C70)
#define JMIMDCBKHJH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18BCFE40)
#define JMIMDCBKHJH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JMIMDCBKHJH_TypeDefinitionIndex = 16185;

struct alignas(4) JMIMDCBKHJH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIMDCBKHJH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMIMDCBKHJH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DGDDPJEGKFF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIMDCBKHJH_DGDDPJEGKFF_OFFSET))(this);
	}

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIMDCBKHJH_FJPGCNGHHCC_OFFSET))(this);
	}

	::System::Int32 JFLGCOEHGNO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIMDCBKHJH_JFLGCOEHGNO_OFFSET))(this);
	}

	/*
	static ::JMIMDCBKHJH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JMIMDCBKHJH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JMIMDCBKHJH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::JMIMDCBKHJH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JMIMDCBKHJH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMIMDCBKHJH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* FMGCACHCJIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIMDCBKHJH_FMGCACHCJIL_OFFSET))(this);
	}

	::System::String* BENNPABABDH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIMDCBKHJH_BENNPABABDH_OFFSET))(this);
	}

	::System::Int32 BBKGGJDNOFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIMDCBKHJH_BBKGGJDNOFI_OFFSET))(this);
	}

	::System::Int32 NFDDMGBFGNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIMDCBKHJH_NFDDMGBFGNI_OFFSET))(this);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIMDCBKHJH_NENDAECBCEM_OFFSET))(this);
	}

	::System::Int32 KAAEPCBNEIG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIMDCBKHJH_KAAEPCBNEIG_OFFSET))(this);
	}

	::System::String* KFCOPANMAKE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIMDCBKHJH_KFCOPANMAKE_OFFSET))(this);
	}

	::System::String* MCNNGGNLCKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIMDCBKHJH_MCNNGGNLCKC_OFFSET))(this);
	}
};
