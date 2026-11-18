#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JCLEIOBKLOA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JCLEIOBKLOA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JCLEIOBKLOA_FPCIJMBEGGD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JCLEIOBKLOA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JCLEIOBKLOA_MBGEHPMALLM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JCLEIOBKLOA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B7D8B50)
#define JCLEIOBKLOA_OCOHAEFEKHH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define JCLEIOBKLOA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JCLEIOBKLOA_TypeDefinitionIndex = 9396;

struct alignas(4) JCLEIOBKLOA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLEIOBKLOA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCLEIOBKLOA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JCLEIOBKLOA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JCLEIOBKLOA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JCLEIOBKLOA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::JCLEIOBKLOA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCLEIOBKLOA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCLEIOBKLOA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OCOHAEFEKHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLEIOBKLOA_OCOHAEFEKHH_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLEIOBKLOA_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 FPCIJMBEGGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLEIOBKLOA_FPCIJMBEGGD_OFFSET))(this);
	}

	::System::Int32 MBGEHPMALLM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLEIOBKLOA_MBGEHPMALLM_OFFSET))(this);
	}
};
