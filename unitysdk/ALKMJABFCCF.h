#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ALKMJABFCCF_AINJPNNOHHC_OFFSET UNITYSDK_OFFSET(0x754A70)
#define ALKMJABFCCF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ALKMJABFCCF_EBBINFPAMCG_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define ALKMJABFCCF_FGMIMKPJIGP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ALKMJABFCCF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ALKMJABFCCF_IDBOEPGLMNK_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define ALKMJABFCCF_JBOIMNAPIKG_OFFSET UNITYSDK_OFFSET(0x754920)
#define ALKMJABFCCF_MLKFNKGDBPN_OFFSET UNITYSDK_OFFSET(0x758780)
#define ALKMJABFCCF_PLNBBDEBIII_OFFSET UNITYSDK_OFFSET(0x756D50)
#define ALKMJABFCCF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ALKMJABFCCF_TypeDefinitionIndex = 17663;

struct alignas(4) ALKMJABFCCF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKMJABFCCF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALKMJABFCCF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* PLNBBDEBIII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKMJABFCCF_PLNBBDEBIII_OFFSET))(this);
	}

	::System::Int32 IDBOEPGLMNK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKMJABFCCF_IDBOEPGLMNK_OFFSET))(this);
	}

	::System::Int32 EBBINFPAMCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKMJABFCCF_EBBINFPAMCG_OFFSET))(this);
	}

	::System::Int32 FGMIMKPJIGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKMJABFCCF_FGMIMKPJIGP_OFFSET))(this);
	}

	::System::Int32 MLKFNKGDBPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKMJABFCCF_MLKFNKGDBPN_OFFSET))(this);
	}

	::System::Boolean AINJPNNOHHC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + ALKMJABFCCF_AINJPNNOHHC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JBOIMNAPIKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKMJABFCCF_JBOIMNAPIKG_OFFSET))(this);
	}

	/*
	::ALKMJABFCCF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ALKMJABFCCF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALKMJABFCCF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
