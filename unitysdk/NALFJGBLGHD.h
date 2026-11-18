#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NALFJGBLGHD_AINJPNNOHHC_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define NALFJGBLGHD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NALFJGBLGHD_EBBINFPAMCG_OFFSET UNITYSDK_OFFSET(0x756720)
#define NALFJGBLGHD_GCPKHJLIGKB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NALFJGBLGHD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NALFJGBLGHD_IDBOEPGLMNK_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define NALFJGBLGHD_JBOIMNAPIKG_OFFSET UNITYSDK_OFFSET(0x754920)
#define NALFJGBLGHD_MLKFNKGDBPN_OFFSET UNITYSDK_OFFSET(0x755C70)
#define NALFJGBLGHD_MLPMMNEOJHH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NALFJGBLGHD_PLNBBDEBIII_OFFSET UNITYSDK_OFFSET(0x756D50)
#define NALFJGBLGHD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NALFJGBLGHD_TypeDefinitionIndex = 15718;

struct alignas(4) NALFJGBLGHD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALFJGBLGHD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NALFJGBLGHD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JBOIMNAPIKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NALFJGBLGHD_JBOIMNAPIKG_OFFSET))(this);
	}

	::System::Int32 EBBINFPAMCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NALFJGBLGHD_EBBINFPAMCG_OFFSET))(this);
	}

	::System::Int32 MLKFNKGDBPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NALFJGBLGHD_MLKFNKGDBPN_OFFSET))(this);
	}

	::System::String* PLNBBDEBIII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALFJGBLGHD_PLNBBDEBIII_OFFSET))(this);
	}

	::System::Int32 GCPKHJLIGKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NALFJGBLGHD_GCPKHJLIGKB_OFFSET))(this);
	}

	::System::String* MLPMMNEOJHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALFJGBLGHD_MLPMMNEOJHH_OFFSET))(this);
	}

	::System::Boolean AINJPNNOHHC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NALFJGBLGHD_AINJPNNOHHC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NALFJGBLGHD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NALFJGBLGHD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NALFJGBLGHD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IDBOEPGLMNK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NALFJGBLGHD_IDBOEPGLMNK_OFFSET))(this);
	}
};
