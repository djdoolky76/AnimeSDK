#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LHOBGOIOHGM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LHOBGOIOHGM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LHOBGOIOHGM_LCOLNEOIGDF_OFFSET UNITYSDK_OFFSET(0x7D7280)
#define LHOBGOIOHGM_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x763660)
#define LHOBGOIOHGM_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LHOBGOIOHGM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B7EFF00)
#define LHOBGOIOHGM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LHOBGOIOHGM_TypeDefinitionIndex = 9295;

struct alignas(4) LHOBGOIOHGM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHOBGOIOHGM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHOBGOIOHGM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHOBGOIOHGM_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHOBGOIOHGM_NKCNGLADFNA_OFFSET))(this);
	}

	::System::Int32 LCOLNEOIGDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHOBGOIOHGM_LCOLNEOIGDF_OFFSET))(this);
	}

	/*
	static ::LHOBGOIOHGM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 BPJGOHCLDGM, ::System::Int32 AJDICOALDFO, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LHOBGOIOHGM(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LHOBGOIOHGM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, BPJGOHCLDGM, AJDICOALDFO, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::LHOBGOIOHGM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LHOBGOIOHGM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHOBGOIOHGM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
