#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DNBEFJHNFPM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DNBEFJHNFPM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DNBEFJHNFPM_GDINGLBGCNM_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define DNBEFJHNFPM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DNBEFJHNFPM_GGJCFFABJAD_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define DNBEFJHNFPM_GHNCPMPNCGG_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define DNBEFJHNFPM_HHFJACGABNJ_OFFSET UNITYSDK_OFFSET(0x755320)
#define DNBEFJHNFPM_IDKLAJFAIIG_OFFSET UNITYSDK_OFFSET(0x755E40)
#define DNBEFJHNFPM_IHEKKCIGPOF_OFFSET UNITYSDK_OFFSET(0x754920)
#define DNBEFJHNFPM_KIPGBLFACHN_OFFSET UNITYSDK_OFFSET(0x758590)
#define DNBEFJHNFPM_LNKHBMIJGHE_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define DNBEFJHNFPM_MKFDLAJHIOJ_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define DNBEFJHNFPM_NKACKJKDHOG_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define DNBEFJHNFPM_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x755190)
#define DNBEFJHNFPM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADCB430)
#define DNBEFJHNFPM_PBIKDDIDDGI_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DNBEFJHNFPM_PKNNMLFOIKH_OFFSET UNITYSDK_OFFSET(0x757290)
#define DNBEFJHNFPM_PONFDLNEEAK_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define DNBEFJHNFPM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DNBEFJHNFPM_TypeDefinitionIndex = 11835;

struct alignas(4) DNBEFJHNFPM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBEFJHNFPM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNBEFJHNFPM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBEFJHNFPM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 LNKHBMIJGHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBEFJHNFPM_LNKHBMIJGHE_OFFSET))(this);
	}

	::System::Int32 NKACKJKDHOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBEFJHNFPM_NKACKJKDHOG_OFFSET))(this);
	}

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBEFJHNFPM_NLAIFNFGGMA_OFFSET))(this);
	}

	::System::String* PKNNMLFOIKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBEFJHNFPM_PKNNMLFOIKH_OFFSET))(this);
	}

	::System::String* GDINGLBGCNM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBEFJHNFPM_GDINGLBGCNM_OFFSET))(this);
	}

	::System::Int32 GHNCPMPNCGG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBEFJHNFPM_GHNCPMPNCGG_OFFSET))(this);
	}

	::System::Int32 MKFDLAJHIOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBEFJHNFPM_MKFDLAJHIOJ_OFFSET))(this);
	}

	/*
	::DNBEFJHNFPM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DNBEFJHNFPM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNBEFJHNFPM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PBIKDDIDDGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBEFJHNFPM_PBIKDDIDDGI_OFFSET))(this);
	}

	::System::Int32 HHFJACGABNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBEFJHNFPM_HHFJACGABNJ_OFFSET))(this);
	}

	::System::Int32 IDKLAJFAIIG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBEFJHNFPM_IDKLAJFAIIG_OFFSET))(this);
	}

	::System::Int32 IHEKKCIGPOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBEFJHNFPM_IHEKKCIGPOF_OFFSET))(this);
	}

	::System::Boolean KIPGBLFACHN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBEFJHNFPM_KIPGBLFACHN_OFFSET))(this);
	}

	::System::Int32 PONFDLNEEAK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBEFJHNFPM_PONFDLNEEAK_OFFSET))(this);
	}

	/*
	static ::DNBEFJHNFPM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DNBEFJHNFPM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DNBEFJHNFPM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* GGJCFFABJAD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBEFJHNFPM_GGJCFFABJAD_OFFSET))(this);
	}
};
