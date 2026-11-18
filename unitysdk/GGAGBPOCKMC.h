#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GGAGBPOCKMC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GGAGBPOCKMC_APCMKAMJJLC_OFFSET UNITYSDK_OFFSET(0x758780)
#define GGAGBPOCKMC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GGAGBPOCKMC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GGAGBPOCKMC_KLHGKGDFFNF_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define GGAGBPOCKMC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A4D7FE0)
#define GGAGBPOCKMC_OLGPFIDHMOI_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define GGAGBPOCKMC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GGAGBPOCKMC_TypeDefinitionIndex = 10839;

struct alignas(4) GGAGBPOCKMC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAGBPOCKMC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGAGBPOCKMC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GGAGBPOCKMC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GGAGBPOCKMC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GGAGBPOCKMC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* OLGPFIDHMOI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAGBPOCKMC_OLGPFIDHMOI_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAGBPOCKMC_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 APCMKAMJJLC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAGBPOCKMC_APCMKAMJJLC_OFFSET))(this);
	}

	::System::Int32 KLHGKGDFFNF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAGBPOCKMC_KLHGKGDFFNF_OFFSET))(this);
	}

	/*
	::GGAGBPOCKMC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GGAGBPOCKMC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGAGBPOCKMC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
