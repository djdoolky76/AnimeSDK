#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ICNJLCPDMEA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ICNJLCPDMEA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ICNJLCPDMEA_BIGNJNMPEBE_OFFSET UNITYSDK_OFFSET(0x756720)
#define ICNJLCPDMEA_CGBOKJHLHLI_OFFSET UNITYSDK_OFFSET(0x756B10)
#define ICNJLCPDMEA_FCOFHJHFIGA_OFFSET UNITYSDK_OFFSET(0x77A420)
#define ICNJLCPDMEA_FGGHJFNIEGD_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define ICNJLCPDMEA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ICNJLCPDMEA_GJMHAFOCMDP_OFFSET UNITYSDK_OFFSET(0x77A4E0)
#define ICNJLCPDMEA_NBLDHOEPBIC_OFFSET UNITYSDK_OFFSET(0x755A00)
#define ICNJLCPDMEA_NLGMNFAHDPF_OFFSET UNITYSDK_OFFSET(0x754D50)
#define ICNJLCPDMEA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x16103A80)
#define ICNJLCPDMEA_OOMOLGJONMM_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define ICNJLCPDMEA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ICNJLCPDMEA_TypeDefinitionIndex = 13312;

struct alignas(4) ICNJLCPDMEA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNJLCPDMEA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICNJLCPDMEA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ICNJLCPDMEA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ICNJLCPDMEA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICNJLCPDMEA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NLGMNFAHDPF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNJLCPDMEA_NLGMNFAHDPF_OFFSET))(this);
	}

	/*
	static ::ICNJLCPDMEA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ICNJLCPDMEA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ICNJLCPDMEA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean FCOFHJHFIGA(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + ICNJLCPDMEA_FCOFHJHFIGA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 FGGHJFNIEGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNJLCPDMEA_FGGHJFNIEGD_OFFSET))(this);
	}

	::System::String* NBLDHOEPBIC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNJLCPDMEA_NBLDHOEPBIC_OFFSET))(this);
	}

	::System::Int32 BIGNJNMPEBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNJLCPDMEA_BIGNJNMPEBE_OFFSET))(this);
	}

	::System::Boolean OOMOLGJONMM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + ICNJLCPDMEA_OOMOLGJONMM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean GJMHAFOCMDP(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + ICNJLCPDMEA_GJMHAFOCMDP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* CGBOKJHLHLI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNJLCPDMEA_CGBOKJHLHLI_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNJLCPDMEA_ACOEONABOJL_OFFSET))(this);
	}
};
