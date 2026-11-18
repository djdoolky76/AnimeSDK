#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FOJKLIPOEFE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FOJKLIPOEFE_BECCNFPKPCC_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define FOJKLIPOEFE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FOJKLIPOEFE_CMFHMOFGGIB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define FOJKLIPOEFE_DMMFMGENGOO_OFFSET UNITYSDK_OFFSET(0x756360)
#define FOJKLIPOEFE_FBMIEJIGIED_OFFSET UNITYSDK_OFFSET(0x755A00)
#define FOJKLIPOEFE_FEMLPHIGLAP_OFFSET UNITYSDK_OFFSET(0x755C70)
#define FOJKLIPOEFE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FOJKLIPOEFE_KDLCMCHAAIP_OFFSET UNITYSDK_OFFSET(0x756B10)
#define FOJKLIPOEFE_NCLBODLIEIB_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define FOJKLIPOEFE_NIOLACCPKHH_OFFSET UNITYSDK_OFFSET(0x757290)
#define FOJKLIPOEFE_ODGGIAADMLO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FOJKLIPOEFE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FOJKLIPOEFE_TypeDefinitionIndex = 12808;

struct alignas(4) FOJKLIPOEFE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJKLIPOEFE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOJKLIPOEFE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ODGGIAADMLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJKLIPOEFE_ODGGIAADMLO_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJKLIPOEFE_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* NCLBODLIEIB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJKLIPOEFE_NCLBODLIEIB_OFFSET))(this);
	}

	::System::String* FBMIEJIGIED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJKLIPOEFE_FBMIEJIGIED_OFFSET))(this);
	}

	::System::String* CMFHMOFGGIB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJKLIPOEFE_CMFHMOFGGIB_OFFSET))(this);
	}

	::System::Boolean DMMFMGENGOO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FOJKLIPOEFE_DMMFMGENGOO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 BECCNFPKPCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJKLIPOEFE_BECCNFPKPCC_OFFSET))(this);
	}

	::System::String* KDLCMCHAAIP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJKLIPOEFE_KDLCMCHAAIP_OFFSET))(this);
	}

	::System::String* NIOLACCPKHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJKLIPOEFE_NIOLACCPKHH_OFFSET))(this);
	}

	::System::Int32 FEMLPHIGLAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJKLIPOEFE_FEMLPHIGLAP_OFFSET))(this);
	}

	/*
	::FOJKLIPOEFE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FOJKLIPOEFE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOJKLIPOEFE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
