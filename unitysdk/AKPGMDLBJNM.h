#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define AKPGMDLBJNM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AKPGMDLBJNM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AKPGMDLBJNM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AKPGMDLBJNM_HECGFJEKABL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define AKPGMDLBJNM_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define AKPGMDLBJNM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15724B30)
#define AKPGMDLBJNM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AKPGMDLBJNM_TypeDefinitionIndex = 12977;

struct alignas(4) AKPGMDLBJNM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPGMDLBJNM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKPGMDLBJNM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AKPGMDLBJNM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AKPGMDLBJNM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AKPGMDLBJNM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HECGFJEKABL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPGMDLBJNM_HECGFJEKABL_OFFSET))(this);
	}

	/*
	::AKPGMDLBJNM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKPGMDLBJNM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKPGMDLBJNM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPGMDLBJNM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPGMDLBJNM_HKELPCLHLEC_OFFSET))(this);
	}
};
