#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DCAHMONLDAE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DCAHMONLDAE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DCAHMONLDAE_GCEBCIOKFEH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DCAHMONLDAE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DCAHMONLDAE_IMNDONCPHID_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DCAHMONLDAE_JKNFLMKLBLB_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DCAHMONLDAE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1574B480)
#define DCAHMONLDAE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DCAHMONLDAE_TypeDefinitionIndex = 16908;

struct alignas(4) DCAHMONLDAE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAHMONLDAE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCAHMONLDAE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* JKNFLMKLBLB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAHMONLDAE_JKNFLMKLBLB_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAHMONLDAE_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::DCAHMONLDAE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 JGKNCPMELON, ::System::Int32 CLCMGLOJKOB, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DCAHMONLDAE(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DCAHMONLDAE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, JGKNCPMELON, CLCMGLOJKOB, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 IMNDONCPHID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAHMONLDAE_IMNDONCPHID_OFFSET))(this);
	}

	::System::String* GCEBCIOKFEH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAHMONLDAE_GCEBCIOKFEH_OFFSET))(this);
	}

	/*
	::DCAHMONLDAE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DCAHMONLDAE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCAHMONLDAE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
