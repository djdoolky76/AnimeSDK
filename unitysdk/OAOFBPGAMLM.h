#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OAOFBPGAMLM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OAOFBPGAMLM_BDEMCKIHDHM_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define OAOFBPGAMLM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OAOFBPGAMLM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OAOFBPGAMLM_KIHFAPCGIHL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define OAOFBPGAMLM_NIBFFHOELCM_OFFSET UNITYSDK_OFFSET(0x754C20)
#define OAOFBPGAMLM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C09B580)
#define OAOFBPGAMLM_ODGGIAADMLO_OFFSET UNITYSDK_OFFSET(0x754920)
#define OAOFBPGAMLM_PKNNPHHNJOA_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define OAOFBPGAMLM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OAOFBPGAMLM_TypeDefinitionIndex = 12599;

struct alignas(4) OAOFBPGAMLM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOFBPGAMLM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAOFBPGAMLM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OAOFBPGAMLM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OAOFBPGAMLM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OAOFBPGAMLM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* BDEMCKIHDHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOFBPGAMLM_BDEMCKIHDHM_OFFSET))(this);
	}

	::System::String* KIHFAPCGIHL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOFBPGAMLM_KIHFAPCGIHL_OFFSET))(this);
	}

	::System::Boolean PKNNPHHNJOA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OAOFBPGAMLM_PKNNPHHNJOA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOFBPGAMLM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 ODGGIAADMLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOFBPGAMLM_ODGGIAADMLO_OFFSET))(this);
	}

	::System::Int32 NIBFFHOELCM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOFBPGAMLM_NIBFFHOELCM_OFFSET))(this);
	}

	/*
	::OAOFBPGAMLM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OAOFBPGAMLM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAOFBPGAMLM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
