#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CPJBFHLMEAE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CPJBFHLMEAE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CPJBFHLMEAE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CPJBFHLMEAE_MBGEHPMALLM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CPJBFHLMEAE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADC0640)
#define CPJBFHLMEAE_PGPOGOANPDC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CPJBFHLMEAE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CPJBFHLMEAE_TypeDefinitionIndex = 12873;

struct alignas(4) CPJBFHLMEAE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJBFHLMEAE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPJBFHLMEAE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJBFHLMEAE_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 PGPOGOANPDC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJBFHLMEAE_PGPOGOANPDC_OFFSET))(this);
	}

	::System::Int32 MBGEHPMALLM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJBFHLMEAE_MBGEHPMALLM_OFFSET))(this);
	}

	/*
	static ::CPJBFHLMEAE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CPJBFHLMEAE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CPJBFHLMEAE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::CPJBFHLMEAE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CPJBFHLMEAE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPJBFHLMEAE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
