#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define POHCIPPPEON_BAIAAFNOONO_OFFSET UNITYSDK_OFFSET(0x756B10)
#define POHCIPPPEON_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define POHCIPPPEON_GEPNIEKPKNL_OFFSET UNITYSDK_OFFSET(0x763D00)
#define POHCIPPPEON_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define POHCIPPPEON_MPEGBLACKNJ_OFFSET UNITYSDK_OFFSET(0x755A00)
#define POHCIPPPEON_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1FD7DAE0)
#define POHCIPPPEON___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int POHCIPPPEON_TypeDefinitionIndex = 14400;

struct alignas(4) POHCIPPPEON
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHCIPPPEON_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POHCIPPPEON___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* MPEGBLACKNJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHCIPPPEON_MPEGBLACKNJ_OFFSET))(this);
	}

	/*
	static ::POHCIPPPEON OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::String* MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::POHCIPPPEON(*)(::System::Int32, ::System::String*, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + POHCIPPPEON_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::POHCIPPPEON BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POHCIPPPEON(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POHCIPPPEON_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Span_1_9011FAD97750D224<::System::Byte> GEPNIEKPKNL()
	{
		return ((::System::Span_1_9011FAD97750D224<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + POHCIPPPEON_GEPNIEKPKNL_OFFSET))(this);
	}

	::System::String* BAIAAFNOONO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHCIPPPEON_BAIAAFNOONO_OFFSET))(this);
	}
};
