#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BFAENEIHIMN_AEKGBKPPDGD_OFFSET UNITYSDK_OFFSET(0x754A70)
#define BFAENEIHIMN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BFAENEIHIMN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BFAENEIHIMN_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x758780)
#define BFAENEIHIMN_JAEGEMNKPKK_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define BFAENEIHIMN_LPIOMDCPGOH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BFAENEIHIMN_MIAHAKLNEOF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BFAENEIHIMN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A798B0)
#define BFAENEIHIMN_OEGLPDFCNJD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BFAENEIHIMN_PFANIJOJPKN_OFFSET UNITYSDK_OFFSET(0x755A00)
#define BFAENEIHIMN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BFAENEIHIMN_TypeDefinitionIndex = 17255;

struct alignas(4) BFAENEIHIMN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAENEIHIMN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFAENEIHIMN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* PFANIJOJPKN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAENEIHIMN_PFANIJOJPKN_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAENEIHIMN_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 OEGLPDFCNJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAENEIHIMN_OEGLPDFCNJD_OFFSET))(this);
	}

	::System::Int32 JAEGEMNKPKK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAENEIHIMN_JAEGEMNKPKK_OFFSET))(this);
	}

	::System::Boolean AEKGBKPPDGD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BFAENEIHIMN_AEKGBKPPDGD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::BFAENEIHIMN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BFAENEIHIMN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFAENEIHIMN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BFAENEIHIMN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BFAENEIHIMN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BFAENEIHIMN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MIAHAKLNEOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAENEIHIMN_MIAHAKLNEOF_OFFSET))(this);
	}

	::System::Int32 LPIOMDCPGOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAENEIHIMN_LPIOMDCPGOH_OFFSET))(this);
	}
};
