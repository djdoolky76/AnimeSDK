#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HEABCBLFCBK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HEABCBLFCBK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HEABCBLFCBK_HIHKBMCPIJH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HEABCBLFCBK_IJNPAHIIGHA_OFFSET UNITYSDK_OFFSET(0x757290)
#define HEABCBLFCBK_KGGAFICEEKM_OFFSET UNITYSDK_OFFSET(0x757190)
#define HEABCBLFCBK_LCOLNEOIGDF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HEABCBLFCBK_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x755C70)
#define HEABCBLFCBK_MIPPLJDKEFD_OFFSET UNITYSDK_OFFSET(0x755A00)
#define HEABCBLFCBK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x166221A0)
#define HEABCBLFCBK_PKJGEEKDKLM_OFFSET UNITYSDK_OFFSET(0x756D50)
#define HEABCBLFCBK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HEABCBLFCBK_TypeDefinitionIndex = 11763;

struct alignas(4) HEABCBLFCBK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEABCBLFCBK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEABCBLFCBK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HEABCBLFCBK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HEABCBLFCBK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEABCBLFCBK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* PKJGEEKDKLM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEABCBLFCBK_PKJGEEKDKLM_OFFSET))(this);
	}

	::System::Int32 HIHKBMCPIJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEABCBLFCBK_HIHKBMCPIJH_OFFSET))(this);
	}

	::System::String* MIPPLJDKEFD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEABCBLFCBK_MIPPLJDKEFD_OFFSET))(this);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEABCBLFCBK_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::String* KGGAFICEEKM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEABCBLFCBK_KGGAFICEEKM_OFFSET))(this);
	}

	/*
	static ::HEABCBLFCBK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HEABCBLFCBK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HEABCBLFCBK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LCOLNEOIGDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEABCBLFCBK_LCOLNEOIGDF_OFFSET))(this);
	}

	::System::String* IJNPAHIIGHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEABCBLFCBK_IJNPAHIIGHA_OFFSET))(this);
	}
};
