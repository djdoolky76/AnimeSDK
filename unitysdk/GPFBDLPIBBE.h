#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GPFBDLPIBBE_ABBMIHOBHFM_OFFSET UNITYSDK_OFFSET(0x754F10)
#define GPFBDLPIBBE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GPFBDLPIBBE_FONGEGPAIDF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GPFBDLPIBBE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GPFBDLPIBBE_IEKPIAAOIAC_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define GPFBDLPIBBE_IGHHCHKEHKI_OFFSET UNITYSDK_OFFSET(0x756D50)
#define GPFBDLPIBBE_ILILOHCCBBF_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define GPFBDLPIBBE_MLKFNKGDBPN_OFFSET UNITYSDK_OFFSET(0x755890)
#define GPFBDLPIBBE_NFDDMGBFGNI_OFFSET UNITYSDK_OFFSET(0x754920)
#define GPFBDLPIBBE_NJDBMPNFAAA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GPFBDLPIBBE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BAD2F30)
#define GPFBDLPIBBE_PCENOEDLEFH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define GPFBDLPIBBE_PIBNHJODJGB_OFFSET UNITYSDK_OFFSET(0x758200)
#define GPFBDLPIBBE_PLNBBDEBIII_OFFSET UNITYSDK_OFFSET(0x757290)
#define GPFBDLPIBBE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GPFBDLPIBBE_TypeDefinitionIndex = 14021;

struct alignas(4) GPFBDLPIBBE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFBDLPIBBE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPFBDLPIBBE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GPFBDLPIBBE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GPFBDLPIBBE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GPFBDLPIBBE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean PIBNHJODJGB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GPFBDLPIBBE_PIBNHJODJGB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NJDBMPNFAAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFBDLPIBBE_NJDBMPNFAAA_OFFSET))(this);
	}

	::System::Int32 NFDDMGBFGNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFBDLPIBBE_NFDDMGBFGNI_OFFSET))(this);
	}

	::System::String* ABBMIHOBHFM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFBDLPIBBE_ABBMIHOBHFM_OFFSET))(this);
	}

	::System::String* PLNBBDEBIII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFBDLPIBBE_PLNBBDEBIII_OFFSET))(this);
	}

	::System::String* IGHHCHKEHKI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFBDLPIBBE_IGHHCHKEHKI_OFFSET))(this);
	}

	::System::String* PCENOEDLEFH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFBDLPIBBE_PCENOEDLEFH_OFFSET))(this);
	}

	/*
	::GPFBDLPIBBE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GPFBDLPIBBE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPFBDLPIBBE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FONGEGPAIDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFBDLPIBBE_FONGEGPAIDF_OFFSET))(this);
	}

	::System::Int32 ILILOHCCBBF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFBDLPIBBE_ILILOHCCBBF_OFFSET))(this);
	}

	::System::Int32 IEKPIAAOIAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFBDLPIBBE_IEKPIAAOIAC_OFFSET))(this);
	}

	::System::Int32 MLKFNKGDBPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFBDLPIBBE_MLKFNKGDBPN_OFFSET))(this);
	}
};
