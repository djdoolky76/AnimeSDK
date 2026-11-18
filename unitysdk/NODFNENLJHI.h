#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NODFNENLJHI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NODFNENLJHI_ELOAKJLAGOH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NODFNENLJHI_FLPKDACKIAF_OFFSET UNITYSDK_OFFSET(0x755C70)
#define NODFNENLJHI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NODFNENLJHI_GGBLGGHOCKO_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NODFNENLJHI_HKFNPMGAMPN_OFFSET UNITYSDK_OFFSET(0x754920)
#define NODFNENLJHI_IEIMLOMCEMJ_OFFSET UNITYSDK_OFFSET(0x755E40)
#define NODFNENLJHI_IPKLLNDGBJI_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define NODFNENLJHI_OCOKPFGNNJG_OFFSET UNITYSDK_OFFSET(0x754970)
#define NODFNENLJHI_PAMCHPBBJHH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define NODFNENLJHI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NODFNENLJHI_TypeDefinitionIndex = 13274;

struct alignas(4) NODFNENLJHI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODFNENLJHI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NODFNENLJHI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 IPKLLNDGBJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODFNENLJHI_IPKLLNDGBJI_OFFSET))(this);
	}

	::System::Int32 IEIMLOMCEMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODFNENLJHI_IEIMLOMCEMJ_OFFSET))(this);
	}

	::System::Int32 OCOKPFGNNJG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODFNENLJHI_OCOKPFGNNJG_OFFSET))(this);
	}

	::System::Int32 GGBLGGHOCKO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODFNENLJHI_GGBLGGHOCKO_OFFSET))(this);
	}

	::System::Int32 HKFNPMGAMPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODFNENLJHI_HKFNPMGAMPN_OFFSET))(this);
	}

	::System::Int32 FLPKDACKIAF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODFNENLJHI_FLPKDACKIAF_OFFSET))(this);
	}

	/*
	::NODFNENLJHI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NODFNENLJHI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NODFNENLJHI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PAMCHPBBJHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODFNENLJHI_PAMCHPBBJHH_OFFSET))(this);
	}

	::System::Int32 ELOAKJLAGOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODFNENLJHI_ELOAKJLAGOH_OFFSET))(this);
	}
};
