#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DMOIGHNOFOM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DMOIGHNOFOM_FNBOALOOFEL_OFFSET UNITYSDK_OFFSET(0x756360)
#define DMOIGHNOFOM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DMOIGHNOFOM_JBNFNCIBLAO_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DMOIGHNOFOM_LMDMNKPMOBO_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define DMOIGHNOFOM_MLKFNKGDBPN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DMOIGHNOFOM_NLNODLILGMM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DMOIGHNOFOM_PNKAKCHLBLF_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DMOIGHNOFOM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DMOIGHNOFOM_TypeDefinitionIndex = 17282;

struct alignas(4) DMOIGHNOFOM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOIGHNOFOM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMOIGHNOFOM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LMDMNKPMOBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOIGHNOFOM_LMDMNKPMOBO_OFFSET))(this);
	}

	::System::Int32 NLNODLILGMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOIGHNOFOM_NLNODLILGMM_OFFSET))(this);
	}

	::System::Int32 JBNFNCIBLAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOIGHNOFOM_JBNFNCIBLAO_OFFSET))(this);
	}

	::System::Int32 MLKFNKGDBPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOIGHNOFOM_MLKFNKGDBPN_OFFSET))(this);
	}

	::System::Boolean FNBOALOOFEL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DMOIGHNOFOM_FNBOALOOFEL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::DMOIGHNOFOM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMOIGHNOFOM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMOIGHNOFOM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PNKAKCHLBLF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOIGHNOFOM_PNKAKCHLBLF_OFFSET))(this);
	}
};
