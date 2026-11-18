#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FFGAIHGFEBG_BAODHJJHNHL_OFFSET UNITYSDK_OFFSET(0x755E40)
#define FFGAIHGFEBG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FFGAIHGFEBG_BODJCLNIFGK_OFFSET UNITYSDK_OFFSET(0x754D50)
#define FFGAIHGFEBG_CHGNDIPLEKH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FFGAIHGFEBG_EKLBEGNDOMA_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define FFGAIHGFEBG_FJALCCKGFCH_OFFSET UNITYSDK_OFFSET(0x758780)
#define FFGAIHGFEBG_GDINGLBGCNM_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FFGAIHGFEBG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FFGAIHGFEBG_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754970)
#define FFGAIHGFEBG_IGGBKPHIJOF_OFFSET UNITYSDK_OFFSET(0x754920)
#define FFGAIHGFEBG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1745B8A0)
#define FFGAIHGFEBG_PCAMPKLMGLB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define FFGAIHGFEBG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FFGAIHGFEBG_TypeDefinitionIndex = 16462;

struct alignas(4) FFGAIHGFEBG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGAIHGFEBG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFGAIHGFEBG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 IGGBKPHIJOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGAIHGFEBG_IGGBKPHIJOF_OFFSET))(this);
	}

	::System::String* GDINGLBGCNM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGAIHGFEBG_GDINGLBGCNM_OFFSET))(this);
	}

	::System::Int32 BODJCLNIFGK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGAIHGFEBG_BODJCLNIFGK_OFFSET))(this);
	}

	/*
	static ::FFGAIHGFEBG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FFGAIHGFEBG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FFGAIHGFEBG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* PCAMPKLMGLB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGAIHGFEBG_PCAMPKLMGLB_OFFSET))(this);
	}

	::System::Int32 BAODHJJHNHL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGAIHGFEBG_BAODHJJHNHL_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGAIHGFEBG_HKELPCLHLEC_OFFSET))(this);
	}

	/*
	::FFGAIHGFEBG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FFGAIHGFEBG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFGAIHGFEBG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CHGNDIPLEKH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGAIHGFEBG_CHGNDIPLEKH_OFFSET))(this);
	}

	::System::Boolean EKLBEGNDOMA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FFGAIHGFEBG_EKLBEGNDOMA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 FJALCCKGFCH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGAIHGFEBG_FJALCCKGFCH_OFFSET))(this);
	}
};
