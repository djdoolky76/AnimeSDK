#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NLJPHBNPAGP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NLJPHBNPAGP_CBCLFEIJFGH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NLJPHBNPAGP_DHJDCGOFAAN_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define NLJPHBNPAGP_ECDHMPAPPPE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define NLJPHBNPAGP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NLJPHBNPAGP_JBDMPNJFDHC_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define NLJPHBNPAGP_KBFOMAONODF_OFFSET UNITYSDK_OFFSET(0x756B10)
#define NLJPHBNPAGP_KKLFPEPNPAB_OFFSET UNITYSDK_OFFSET(0x756570)
#define NLJPHBNPAGP_MAFLBNOMKHP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NLJPHBNPAGP_MFDBJPOJODP_OFFSET UNITYSDK_OFFSET(0x757190)
#define NLJPHBNPAGP_NOKNGIEGNKK_OFFSET UNITYSDK_OFFSET(0x754970)
#define NLJPHBNPAGP_OAICOLMNGMB_OFFSET UNITYSDK_OFFSET(0x756220)
#define NLJPHBNPAGP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18E22260)
#define NLJPHBNPAGP_PFJMDCIIEGL_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define NLJPHBNPAGP_PPHGIHKDOCO_OFFSET UNITYSDK_OFFSET(0x758780)
#define NLJPHBNPAGP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NLJPHBNPAGP_TypeDefinitionIndex = 13082;

struct alignas(4) NLJPHBNPAGP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJPHBNPAGP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLJPHBNPAGP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NLJPHBNPAGP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NLJPHBNPAGP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NLJPHBNPAGP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DHJDCGOFAAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJPHBNPAGP_DHJDCGOFAAN_OFFSET))(this);
	}

	::System::String* MFDBJPOJODP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJPHBNPAGP_MFDBJPOJODP_OFFSET))(this);
	}

	::System::Int32 ECDHMPAPPPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJPHBNPAGP_ECDHMPAPPPE_OFFSET))(this);
	}

	::System::String* JBDMPNJFDHC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJPHBNPAGP_JBDMPNJFDHC_OFFSET))(this);
	}

	::System::Int32 MAFLBNOMKHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJPHBNPAGP_MAFLBNOMKHP_OFFSET))(this);
	}

	::System::Boolean KKLFPEPNPAB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NLJPHBNPAGP_KKLFPEPNPAB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PPHGIHKDOCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJPHBNPAGP_PPHGIHKDOCO_OFFSET))(this);
	}

	::System::String* KBFOMAONODF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJPHBNPAGP_KBFOMAONODF_OFFSET))(this);
	}

	/*
	::NLJPHBNPAGP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NLJPHBNPAGP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLJPHBNPAGP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OAICOLMNGMB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJPHBNPAGP_OAICOLMNGMB_OFFSET))(this);
	}

	::System::String* CBCLFEIJFGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJPHBNPAGP_CBCLFEIJFGH_OFFSET))(this);
	}

	::System::Int32 NOKNGIEGNKK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJPHBNPAGP_NOKNGIEGNKK_OFFSET))(this);
	}

	::System::Int32 PFJMDCIIEGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJPHBNPAGP_PFJMDCIIEGL_OFFSET))(this);
	}
};
