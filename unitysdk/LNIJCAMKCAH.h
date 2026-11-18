#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LNIJCAMKCAH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LNIJCAMKCAH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LNIJCAMKCAH_DFDLCICBOIO_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define LNIJCAMKCAH_FPECLANNDOM_OFFSET UNITYSDK_OFFSET(0x76F6C0)
#define LNIJCAMKCAH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LNIJCAMKCAH_GIGKHHGIIGN_OFFSET UNITYSDK_OFFSET(0x758780)
#define LNIJCAMKCAH_KGHBKLEDEOI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LNIJCAMKCAH_MNKCOGELCIL_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LNIJCAMKCAH_NGEHMMPNONH_OFFSET UNITYSDK_OFFSET(0x755C70)
#define LNIJCAMKCAH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BA8C400)
#define LNIJCAMKCAH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LNIJCAMKCAH_TypeDefinitionIndex = 11362;

struct alignas(4) LNIJCAMKCAH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNIJCAMKCAH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNIJCAMKCAH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 KGHBKLEDEOI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNIJCAMKCAH_KGHBKLEDEOI_OFFSET))(this);
	}

	/*
	static ::LNIJCAMKCAH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LNIJCAMKCAH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LNIJCAMKCAH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GIGKHHGIIGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNIJCAMKCAH_GIGKHHGIIGN_OFFSET))(this);
	}

	::System::Int32 DFDLCICBOIO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNIJCAMKCAH_DFDLCICBOIO_OFFSET))(this);
	}

	::System::Int32 MNKCOGELCIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNIJCAMKCAH_MNKCOGELCIL_OFFSET))(this);
	}

	::System::Int32 NGEHMMPNONH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNIJCAMKCAH_NGEHMMPNONH_OFFSET))(this);
	}

	::System::Boolean FPECLANNDOM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNIJCAMKCAH_FPECLANNDOM_OFFSET))(this);
	}

	/*
	::LNIJCAMKCAH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LNIJCAMKCAH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNIJCAMKCAH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNIJCAMKCAH_ACOEONABOJL_OFFSET))(this);
	}
};
