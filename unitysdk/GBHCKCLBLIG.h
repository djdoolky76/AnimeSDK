#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GBHCKCLBLIG_AEAJPKILALJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GBHCKCLBLIG_BHFNKHLLIFK_OFFSET UNITYSDK_OFFSET(0x779440)
#define GBHCKCLBLIG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GBHCKCLBLIG_EPKHFGDILDG_OFFSET UNITYSDK_OFFSET(0x754F10)
#define GBHCKCLBLIG_FPLKDGKCCOE_OFFSET UNITYSDK_OFFSET(0x757290)
#define GBHCKCLBLIG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GBHCKCLBLIG_IECOPDNBPLG_OFFSET UNITYSDK_OFFSET(0x755A00)
#define GBHCKCLBLIG_IPIAMACAPBK_OFFSET UNITYSDK_OFFSET(0x755C70)
#define GBHCKCLBLIG_LEHJFMAMFJO_OFFSET UNITYSDK_OFFSET(0x756B10)
#define GBHCKCLBLIG_MGOKNDCGOEI_OFFSET UNITYSDK_OFFSET(0x754970)
#define GBHCKCLBLIG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x160E2410)
#define GBHCKCLBLIG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GBHCKCLBLIG_TypeDefinitionIndex = 17101;

struct alignas(4) GBHCKCLBLIG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHCKCLBLIG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBHCKCLBLIG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 AEAJPKILALJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHCKCLBLIG_AEAJPKILALJ_OFFSET))(this);
	}

	::System::Int32 IPIAMACAPBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHCKCLBLIG_IPIAMACAPBK_OFFSET))(this);
	}

	::System::String* LEHJFMAMFJO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHCKCLBLIG_LEHJFMAMFJO_OFFSET))(this);
	}

	::System::String* IECOPDNBPLG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHCKCLBLIG_IECOPDNBPLG_OFFSET))(this);
	}

	::System::String* FPLKDGKCCOE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHCKCLBLIG_FPLKDGKCCOE_OFFSET))(this);
	}

	::System::String* EPKHFGDILDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHCKCLBLIG_EPKHFGDILDG_OFFSET))(this);
	}

	/*
	::GBHCKCLBLIG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GBHCKCLBLIG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBHCKCLBLIG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MGOKNDCGOEI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHCKCLBLIG_MGOKNDCGOEI_OFFSET))(this);
	}

	/*
	static ::GBHCKCLBLIG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GBHCKCLBLIG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GBHCKCLBLIG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean BHFNKHLLIFK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHCKCLBLIG_BHFNKHLLIFK_OFFSET))(this);
	}
};
