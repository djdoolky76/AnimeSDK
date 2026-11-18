#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IGJBMGADNFI_AHABJOCIHPE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IGJBMGADNFI_AMKIJBABDEI_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define IGJBMGADNFI_BFHDFEADNPF_OFFSET UNITYSDK_OFFSET(0x76FBF0)
#define IGJBMGADNFI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IGJBMGADNFI_FHJLFPCAGBG_OFFSET UNITYSDK_OFFSET(0x7AC220)
#define IGJBMGADNFI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IGJBMGADNFI_KLMPDHKMBDG_OFFSET UNITYSDK_OFFSET(0x756720)
#define IGJBMGADNFI_LCOLNEOIGDF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IGJBMGADNFI_MNBGCKKDNAC_OFFSET UNITYSDK_OFFSET(0x755790)
#define IGJBMGADNFI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1953F6F0)
#define IGJBMGADNFI_OHLNCMBPFNO_OFFSET UNITYSDK_OFFSET(0x756D50)
#define IGJBMGADNFI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IGJBMGADNFI_TypeDefinitionIndex = 15944;

struct alignas(4) IGJBMGADNFI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJBMGADNFI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGJBMGADNFI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFHDFEADNPF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJBMGADNFI_BFHDFEADNPF_OFFSET))(this);
	}

	/*
	static ::IGJBMGADNFI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IGJBMGADNFI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IGJBMGADNFI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean FHJLFPCAGBG(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + IGJBMGADNFI_FHJLFPCAGBG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MNBGCKKDNAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJBMGADNFI_MNBGCKKDNAC_OFFSET))(this);
	}

	::System::Int32 LCOLNEOIGDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJBMGADNFI_LCOLNEOIGDF_OFFSET))(this);
	}

	::System::Int32 AHABJOCIHPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJBMGADNFI_AHABJOCIHPE_OFFSET))(this);
	}

	::System::Boolean AMKIJBABDEI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IGJBMGADNFI_AMKIJBABDEI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::IGJBMGADNFI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IGJBMGADNFI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGJBMGADNFI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* OHLNCMBPFNO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJBMGADNFI_OHLNCMBPFNO_OFFSET))(this);
	}

	::System::Int32 KLMPDHKMBDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJBMGADNFI_KLMPDHKMBDG_OFFSET))(this);
	}
};
