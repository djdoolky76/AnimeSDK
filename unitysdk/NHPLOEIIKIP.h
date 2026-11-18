#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NHPLOEIIKIP_BEPLKKHMJCN_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NHPLOEIIKIP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NHPLOEIIKIP_CKBNKKKNAGI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NHPLOEIIKIP_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define NHPLOEIIKIP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NHPLOEIIKIP_HOBFMMLPLGD_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define NHPLOEIIKIP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19DC4270)
#define NHPLOEIIKIP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NHPLOEIIKIP_TypeDefinitionIndex = 12912;

struct alignas(4) NHPLOEIIKIP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPLOEIIKIP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHPLOEIIKIP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CKBNKKKNAGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPLOEIIKIP_CKBNKKKNAGI_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPLOEIIKIP_DECMGICKDLH_OFFSET))(this);
	}

	/*
	static ::NHPLOEIIKIP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NHPLOEIIKIP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NHPLOEIIKIP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::NHPLOEIIKIP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NHPLOEIIKIP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHPLOEIIKIP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BEPLKKHMJCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPLOEIIKIP_BEPLKKHMJCN_OFFSET))(this);
	}

	::System::String* HOBFMMLPLGD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPLOEIIKIP_HOBFMMLPLGD_OFFSET))(this);
	}
};
