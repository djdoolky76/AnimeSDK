#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DEOMJEAOGIJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DEOMJEAOGIJ_BPOPIDFJDBK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DEOMJEAOGIJ_DCGJGALIIHB_OFFSET UNITYSDK_OFFSET(0x756B10)
#define DEOMJEAOGIJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DEOMJEAOGIJ_GOAGNLBGLNL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DEOMJEAOGIJ_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754970)
#define DEOMJEAOGIJ_KKOIHBOCFEP_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DEOMJEAOGIJ_MNGNAMLGGJN_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define DEOMJEAOGIJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1579E060)
#define DEOMJEAOGIJ_PMEDDKBGPOD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DEOMJEAOGIJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DEOMJEAOGIJ_TypeDefinitionIndex = 12395;

struct alignas(4) DEOMJEAOGIJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEOMJEAOGIJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEOMJEAOGIJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PMEDDKBGPOD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEOMJEAOGIJ_PMEDDKBGPOD_OFFSET))(this);
	}

	::System::String* DCGJGALIIHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEOMJEAOGIJ_DCGJGALIIHB_OFFSET))(this);
	}

	/*
	static ::DEOMJEAOGIJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DEOMJEAOGIJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DEOMJEAOGIJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* MNGNAMLGGJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEOMJEAOGIJ_MNGNAMLGGJN_OFFSET))(this);
	}

	/*
	::DEOMJEAOGIJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEOMJEAOGIJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEOMJEAOGIJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KKOIHBOCFEP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEOMJEAOGIJ_KKOIHBOCFEP_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEOMJEAOGIJ_HKELPCLHLEC_OFFSET))(this);
	}

	::System::String* GOAGNLBGLNL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEOMJEAOGIJ_GOAGNLBGLNL_OFFSET))(this);
	}

	::System::Int32 BPOPIDFJDBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEOMJEAOGIJ_BPOPIDFJDBK_OFFSET))(this);
	}
};
