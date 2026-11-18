#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HAGEIKJBNIG_ADBAHILIPIH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HAGEIKJBNIG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HAGEIKJBNIG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HAGEIKJBNIG_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HAGEIKJBNIG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5C5970)
#define HAGEIKJBNIG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HAGEIKJBNIG_TypeDefinitionIndex = 11924;

struct alignas(4) HAGEIKJBNIG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGEIKJBNIG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAGEIKJBNIG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGEIKJBNIG_LPFMNKEFPMM_OFFSET))(this);
	}

	/*
	::HAGEIKJBNIG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HAGEIKJBNIG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAGEIKJBNIG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HAGEIKJBNIG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HAGEIKJBNIG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HAGEIKJBNIG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ADBAHILIPIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGEIKJBNIG_ADBAHILIPIH_OFFSET))(this);
	}
};
