#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ILHDJBLBBBD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ILHDJBLBBBD_EDBBIMMCLPD_OFFSET UNITYSDK_OFFSET(0x757190)
#define ILHDJBLBBBD_EJNGDDKFFED_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ILHDJBLBBBD_FKJMNANKEHD_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define ILHDJBLBBBD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ILHDJBLBBBD_HBDMPOLMBKH_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define ILHDJBLBBBD_HMPFPCCBKMJ_OFFSET UNITYSDK_OFFSET(0x754F10)
#define ILHDJBLBBBD_LAAPKPDFJOI_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define ILHDJBLBBBD_LNHLCEJBOIN_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define ILHDJBLBBBD_NDMCJKGGOMG_OFFSET UNITYSDK_OFFSET(0x758320)
#define ILHDJBLBBBD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ILHDJBLBBBD_TypeDefinitionIndex = 12987;

struct alignas(4) ILHDJBLBBBD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHDJBLBBBD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILHDJBLBBBD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* HBDMPOLMBKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHDJBLBBBD_HBDMPOLMBKH_OFFSET))(this);
	}

	::System::String* LNHLCEJBOIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHDJBLBBBD_LNHLCEJBOIN_OFFSET))(this);
	}

	/*
	::ILHDJBLBBBD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ILHDJBLBBBD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILHDJBLBBBD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* FKJMNANKEHD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHDJBLBBBD_FKJMNANKEHD_OFFSET))(this);
	}

	::System::Int32 EJNGDDKFFED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHDJBLBBBD_EJNGDDKFFED_OFFSET))(this);
	}

	::System::String* EDBBIMMCLPD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHDJBLBBBD_EDBBIMMCLPD_OFFSET))(this);
	}

	::System::String* NDMCJKGGOMG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHDJBLBBBD_NDMCJKGGOMG_OFFSET))(this);
	}

	::System::String* LAAPKPDFJOI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHDJBLBBBD_LAAPKPDFJOI_OFFSET))(this);
	}

	::System::String* HMPFPCCBKMJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHDJBLBBBD_HMPFPCCBKMJ_OFFSET))(this);
	}
};
