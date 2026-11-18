#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FFBHOHFALBB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FFBHOHFALBB_BPOPIDFJDBK_OFFSET UNITYSDK_OFFSET(0x755C70)
#define FFBHOHFALBB_DLKBPMEOGBH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FFBHOHFALBB_FAGNOHILGED_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define FFBHOHFALBB_FCEEEBDHFDA_OFFSET UNITYSDK_OFFSET(0x754920)
#define FFBHOHFALBB_FEGKDNNEKLJ_OFFSET UNITYSDK_OFFSET(0x754970)
#define FFBHOHFALBB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FFBHOHFALBB_IFALPOFEGGG_OFFSET UNITYSDK_OFFSET(0x755190)
#define FFBHOHFALBB_KOMBGHOGNMO_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define FFBHOHFALBB_MENALFDMMKN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FFBHOHFALBB_MIHBLAFHMKM_OFFSET UNITYSDK_OFFSET(0x757190)
#define FFBHOHFALBB_NEFADOFKHCB_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FFBHOHFALBB_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FFBHOHFALBB_PHALDLDFONO_OFFSET UNITYSDK_OFFSET(0x755890)
#define FFBHOHFALBB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FFBHOHFALBB_TypeDefinitionIndex = 11093;

struct alignas(4) FFBHOHFALBB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBHOHFALBB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFBHOHFALBB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DLKBPMEOGBH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBHOHFALBB_DLKBPMEOGBH_OFFSET))(this);
	}

	::System::Int32 FAGNOHILGED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBHOHFALBB_FAGNOHILGED_OFFSET))(this);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBHOHFALBB_NENDAECBCEM_OFFSET))(this);
	}

	/*
	::FFBHOHFALBB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FFBHOHFALBB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFBHOHFALBB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IFALPOFEGGG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBHOHFALBB_IFALPOFEGGG_OFFSET))(this);
	}

	::System::Int32 FEGKDNNEKLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBHOHFALBB_FEGKDNNEKLJ_OFFSET))(this);
	}

	::System::Int32 KOMBGHOGNMO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBHOHFALBB_KOMBGHOGNMO_OFFSET))(this);
	}

	::System::Int32 BPOPIDFJDBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBHOHFALBB_BPOPIDFJDBK_OFFSET))(this);
	}

	::System::Int32 FCEEEBDHFDA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBHOHFALBB_FCEEEBDHFDA_OFFSET))(this);
	}

	::System::Int32 MENALFDMMKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBHOHFALBB_MENALFDMMKN_OFFSET))(this);
	}

	::System::Int32 NEFADOFKHCB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBHOHFALBB_NEFADOFKHCB_OFFSET))(this);
	}

	::System::String* MIHBLAFHMKM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBHOHFALBB_MIHBLAFHMKM_OFFSET))(this);
	}

	::System::Int32 PHALDLDFONO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBHOHFALBB_PHALDLDFONO_OFFSET))(this);
	}
};
