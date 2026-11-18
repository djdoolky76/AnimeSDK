#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EHGMFGHIOAO_AHACMIKNBMC_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define EHGMFGHIOAO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EHGMFGHIOAO_DCIILMCLNNM_OFFSET UNITYSDK_OFFSET(0x756D50)
#define EHGMFGHIOAO_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EHGMFGHIOAO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EHGMFGHIOAO_GNLBPCGFALA_OFFSET UNITYSDK_OFFSET(0x756B10)
#define EHGMFGHIOAO_HGODFCFGNDA_OFFSET UNITYSDK_OFFSET(0x757290)
#define EHGMFGHIOAO_KICAFIFKIEC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EHGMFGHIOAO_LGMMAGPFDMC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EHGMFGHIOAO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A59CFC0)
#define EHGMFGHIOAO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EHGMFGHIOAO_TypeDefinitionIndex = 13197;

struct alignas(4) EHGMFGHIOAO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGMFGHIOAO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHGMFGHIOAO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* HGODFCFGNDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGMFGHIOAO_HGODFCFGNDA_OFFSET))(this);
	}

	::System::Int32 KICAFIFKIEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGMFGHIOAO_KICAFIFKIEC_OFFSET))(this);
	}

	::System::String* GNLBPCGFALA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGMFGHIOAO_GNLBPCGFALA_OFFSET))(this);
	}

	/*
	::EHGMFGHIOAO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EHGMFGHIOAO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHGMFGHIOAO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* DCIILMCLNNM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGMFGHIOAO_DCIILMCLNNM_OFFSET))(this);
	}

	::System::String* AHACMIKNBMC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGMFGHIOAO_AHACMIKNBMC_OFFSET))(this);
	}

	/*
	static ::EHGMFGHIOAO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EHGMFGHIOAO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EHGMFGHIOAO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LGMMAGPFDMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGMFGHIOAO_LGMMAGPFDMC_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGMFGHIOAO_DNKLBHKEDEM_OFFSET))(this);
	}
};
