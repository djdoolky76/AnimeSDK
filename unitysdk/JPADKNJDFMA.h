#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JPADKNJDFMA_AINJPNNOHHC_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define JPADKNJDFMA_BBHNMDJEGIK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JPADKNJDFMA_BBJGHAGDKOM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JPADKNJDFMA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JPADKNJDFMA_BIFFFHEBJCA_OFFSET UNITYSDK_OFFSET(0x758780)
#define JPADKNJDFMA_EBBINFPAMCG_OFFSET UNITYSDK_OFFSET(0x754D50)
#define JPADKNJDFMA_FKKJMKIFEAJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JPADKNJDFMA_FMFJIFIJECL_OFFSET UNITYSDK_OFFSET(0x755C70)
#define JPADKNJDFMA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JPADKNJDFMA_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x754970)
#define JPADKNJDFMA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JPADKNJDFMA_TypeDefinitionIndex = 16092;

struct alignas(4) JPADKNJDFMA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPADKNJDFMA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPADKNJDFMA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 EBBINFPAMCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPADKNJDFMA_EBBINFPAMCG_OFFSET))(this);
	}

	/*
	::JPADKNJDFMA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JPADKNJDFMA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPADKNJDFMA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BBHNMDJEGIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPADKNJDFMA_BBHNMDJEGIK_OFFSET))(this);
	}

	::System::Int32 FKKJMKIFEAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPADKNJDFMA_FKKJMKIFEAJ_OFFSET))(this);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPADKNJDFMA_NENDAECBCEM_OFFSET))(this);
	}

	::System::Boolean AINJPNNOHHC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JPADKNJDFMA_AINJPNNOHHC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 BBJGHAGDKOM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPADKNJDFMA_BBJGHAGDKOM_OFFSET))(this);
	}

	::System::Int32 FMFJIFIJECL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPADKNJDFMA_FMFJIFIJECL_OFFSET))(this);
	}

	::System::Int32 BIFFFHEBJCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPADKNJDFMA_BIFFFHEBJCA_OFFSET))(this);
	}
};
