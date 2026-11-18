#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JJHLIPGEKDJ_APIIIGIHJCD_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define JJHLIPGEKDJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JJHLIPGEKDJ_BPADCIMJKBE_OFFSET UNITYSDK_OFFSET(0x756D50)
#define JJHLIPGEKDJ_CDEGALHKEOF_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define JJHLIPGEKDJ_DEFBCFPGMEA_OFFSET UNITYSDK_OFFSET(0x756B10)
#define JJHLIPGEKDJ_DIKAFINONAF_OFFSET UNITYSDK_OFFSET(0x757B50)
#define JJHLIPGEKDJ_FLEMCOOMJCM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JJHLIPGEKDJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JJHLIPGEKDJ_HOEFNCKELMB_OFFSET UNITYSDK_OFFSET(0x7588B0)
#define JJHLIPGEKDJ_IAFMEJABPMH_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define JJHLIPGEKDJ_IOIENACFPEP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define JJHLIPGEKDJ_JBBOJOLFBKC_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define JJHLIPGEKDJ_JMOECPBCOJF_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JJHLIPGEKDJ_JOPMIMECBHH_OFFSET UNITYSDK_OFFSET(0x756220)
#define JJHLIPGEKDJ_KGNCIEHOPPE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JJHLIPGEKDJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5EF030)
#define JJHLIPGEKDJ_OHODLCEJHFI_OFFSET UNITYSDK_OFFSET(0x757330)
#define JJHLIPGEKDJ_OLNCMHBHNJH_OFFSET UNITYSDK_OFFSET(0x7578F0)
#define JJHLIPGEKDJ_PBBHCMCDDFN_OFFSET UNITYSDK_OFFSET(0x754E10)
#define JJHLIPGEKDJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JJHLIPGEKDJ_TypeDefinitionIndex = 14335;

struct alignas(4) JJHLIPGEKDJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHLIPGEKDJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJHLIPGEKDJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean OLNCMHBHNJH(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + JJHLIPGEKDJ_OLNCMHBHNJH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean PBBHCMCDDFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHLIPGEKDJ_PBBHCMCDDFN_OFFSET))(this);
	}

	::System::Int32 CDEGALHKEOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHLIPGEKDJ_CDEGALHKEOF_OFFSET))(this);
	}

	/*
	::JJHLIPGEKDJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JJHLIPGEKDJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJHLIPGEKDJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FLEMCOOMJCM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHLIPGEKDJ_FLEMCOOMJCM_OFFSET))(this);
	}

	::System::String* JBBOJOLFBKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHLIPGEKDJ_JBBOJOLFBKC_OFFSET))(this);
	}

	::System::String* JMOECPBCOJF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHLIPGEKDJ_JMOECPBCOJF_OFFSET))(this);
	}

	::System::String* BPADCIMJKBE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHLIPGEKDJ_BPADCIMJKBE_OFFSET))(this);
	}

	::System::String* IOIENACFPEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHLIPGEKDJ_IOIENACFPEP_OFFSET))(this);
	}

	::System::Int32 JOPMIMECBHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHLIPGEKDJ_JOPMIMECBHH_OFFSET))(this);
	}

	::System::String* DEFBCFPGMEA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHLIPGEKDJ_DEFBCFPGMEA_OFFSET))(this);
	}

	::System::Int32 OHODLCEJHFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHLIPGEKDJ_OHODLCEJHFI_OFFSET))(this);
	}

	::System::Int32 APIIIGIHJCD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHLIPGEKDJ_APIIIGIHJCD_OFFSET))(this);
	}

	::System::Int32 KGNCIEHOPPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHLIPGEKDJ_KGNCIEHOPPE_OFFSET))(this);
	}

	::System::String* IAFMEJABPMH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHLIPGEKDJ_IAFMEJABPMH_OFFSET))(this);
	}

	::System::Boolean HOEFNCKELMB(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + JJHLIPGEKDJ_HOEFNCKELMB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean DIKAFINONAF(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + JJHLIPGEKDJ_DIKAFINONAF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JJHLIPGEKDJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 OKAAJABEHDP, ::System::Int32 JMCOMOCFOGB, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JJHLIPGEKDJ(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JJHLIPGEKDJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, OKAAJABEHDP, JMCOMOCFOGB, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
