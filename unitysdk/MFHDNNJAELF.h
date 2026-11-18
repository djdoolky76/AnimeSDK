#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MFHDNNJAELF_BBJGHAGDKOM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MFHDNNJAELF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MFHDNNJAELF_DJMCGLKGNPE_OFFSET UNITYSDK_OFFSET(0x757290)
#define MFHDNNJAELF_ENBMKFBBKAD_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define MFHDNNJAELF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MFHDNNJAELF_HPJKBEHBCAL_OFFSET UNITYSDK_OFFSET(0x755A00)
#define MFHDNNJAELF_KBHMNEAHHPM_OFFSET UNITYSDK_OFFSET(0x756B10)
#define MFHDNNJAELF_LKDACBDKJBD_OFFSET UNITYSDK_OFFSET(0x756D50)
#define MFHDNNJAELF_MAILOLCBILF_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MFHDNNJAELF_MFGPMPHMGBD_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define MFHDNNJAELF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C179490)
#define MFHDNNJAELF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MFHDNNJAELF_TypeDefinitionIndex = 10092;

struct alignas(4) MFHDNNJAELF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHDNNJAELF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFHDNNJAELF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* LKDACBDKJBD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHDNNJAELF_LKDACBDKJBD_OFFSET))(this);
	}

	::System::Int32 BBJGHAGDKOM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHDNNJAELF_BBJGHAGDKOM_OFFSET))(this);
	}

	::System::String* MAILOLCBILF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHDNNJAELF_MAILOLCBILF_OFFSET))(this);
	}

	::System::String* HPJKBEHBCAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHDNNJAELF_HPJKBEHBCAL_OFFSET))(this);
	}

	::System::Int32 MFGPMPHMGBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHDNNJAELF_MFGPMPHMGBD_OFFSET))(this);
	}

	::System::String* ENBMKFBBKAD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHDNNJAELF_ENBMKFBBKAD_OFFSET))(this);
	}

	/*
	static ::MFHDNNJAELF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MFHDNNJAELF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MFHDNNJAELF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* DJMCGLKGNPE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHDNNJAELF_DJMCGLKGNPE_OFFSET))(this);
	}

	/*
	::MFHDNNJAELF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MFHDNNJAELF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFHDNNJAELF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* KBHMNEAHHPM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHDNNJAELF_KBHMNEAHHPM_OFFSET))(this);
	}
};
