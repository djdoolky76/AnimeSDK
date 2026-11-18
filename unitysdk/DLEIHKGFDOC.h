#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DLEIHKGFDOC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DLEIHKGFDOC_AKJEBFJMGCJ_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define DLEIHKGFDOC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DLEIHKGFDOC_BNKHDNKDIKB_OFFSET UNITYSDK_OFFSET(0x7FA450)
#define DLEIHKGFDOC_CPMBPBPIIOE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DLEIHKGFDOC_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define DLEIHKGFDOC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DLEIHKGFDOC_IHHMOOHPFID_OFFSET UNITYSDK_OFFSET(0x756D50)
#define DLEIHKGFDOC_IJENMBHBNPE_OFFSET UNITYSDK_OFFSET(0x757290)
#define DLEIHKGFDOC_NKACKJKDHOG_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DLEIHKGFDOC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A557920)
#define DLEIHKGFDOC_OFOLPCGCMKI_OFFSET UNITYSDK_OFFSET(0x754920)
#define DLEIHKGFDOC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DLEIHKGFDOC_TypeDefinitionIndex = 12416;

struct alignas(4) DLEIHKGFDOC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEIHKGFDOC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLEIHKGFDOC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* IHHMOOHPFID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEIHKGFDOC_IHHMOOHPFID_OFFSET))(this);
	}

	::System::Int32 AKJEBFJMGCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEIHKGFDOC_AKJEBFJMGCJ_OFFSET))(this);
	}

	::System::Int32 OFOLPCGCMKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEIHKGFDOC_OFOLPCGCMKI_OFFSET))(this);
	}

	/*
	::DLEIHKGFDOC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DLEIHKGFDOC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLEIHKGFDOC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::UInt64 BNKHDNKDIKB()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEIHKGFDOC_BNKHDNKDIKB_OFFSET))(this);
	}

	::System::Int32 CPMBPBPIIOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEIHKGFDOC_CPMBPBPIIOE_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEIHKGFDOC_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* IJENMBHBNPE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEIHKGFDOC_IJENMBHBNPE_OFFSET))(this);
	}

	/*
	static ::DLEIHKGFDOC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DLEIHKGFDOC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DLEIHKGFDOC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEIHKGFDOC_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 NKACKJKDHOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEIHKGFDOC_NKACKJKDHOG_OFFSET))(this);
	}
};
