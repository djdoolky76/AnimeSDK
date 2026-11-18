#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NAOPCNDAPBL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NAOPCNDAPBL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NAOPCNDAPBL_EECNDNIAFBM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NAOPCNDAPBL_FBNLDKPMGKE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define NAOPCNDAPBL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NAOPCNDAPBL_LPGBKKLKMJL_OFFSET UNITYSDK_OFFSET(0x755D20)
#define NAOPCNDAPBL_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x754920)
#define NAOPCNDAPBL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BAA0DF0)
#define NAOPCNDAPBL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NAOPCNDAPBL_TypeDefinitionIndex = 10048;

struct alignas(4) NAOPCNDAPBL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOPCNDAPBL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAOPCNDAPBL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOPCNDAPBL_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::NAOPCNDAPBL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NAOPCNDAPBL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAOPCNDAPBL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOPCNDAPBL_NLAIFNFGGMA_OFFSET))(this);
	}

	::System::Int32 EECNDNIAFBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOPCNDAPBL_EECNDNIAFBM_OFFSET))(this);
	}

	::System::Int32 FBNLDKPMGKE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOPCNDAPBL_FBNLDKPMGKE_OFFSET))(this);
	}

	/*
	static ::NAOPCNDAPBL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NAOPCNDAPBL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NAOPCNDAPBL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LPGBKKLKMJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOPCNDAPBL_LPGBKKLKMJL_OFFSET))(this);
	}
};
