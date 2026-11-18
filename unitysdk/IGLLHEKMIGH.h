#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IGLLHEKMIGH_ALDJGPEMHBN_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define IGLLHEKMIGH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IGLLHEKMIGH_CAGJEPDNKKG_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define IGLLHEKMIGH_CHDKANJHDOH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IGLLHEKMIGH_DAIGAEOPAJO_OFFSET UNITYSDK_OFFSET(0x761240)
#define IGLLHEKMIGH_GCKHIIMAOFL_OFFSET UNITYSDK_OFFSET(0x754D50)
#define IGLLHEKMIGH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IGLLHEKMIGH_GNACEPCGEHE_OFFSET UNITYSDK_OFFSET(0x758200)
#define IGLLHEKMIGH_HIHKBMCPIJH_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define IGLLHEKMIGH_JIGKGOBKKME_OFFSET UNITYSDK_OFFSET(0x756B10)
#define IGLLHEKMIGH_KONDHLMEMGD_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define IGLLHEKMIGH_LDAKKMIJLOG_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define IGLLHEKMIGH_MPDNBDFIOKB_OFFSET UNITYSDK_OFFSET(0x754F10)
#define IGLLHEKMIGH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A4F60D0)
#define IGLLHEKMIGH_PAEDGICEMAL_OFFSET UNITYSDK_OFFSET(0x755A00)
#define IGLLHEKMIGH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IGLLHEKMIGH_TypeDefinitionIndex = 14663;

struct alignas(4) IGLLHEKMIGH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLLHEKMIGH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGLLHEKMIGH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean KONDHLMEMGD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IGLLHEKMIGH_KONDHLMEMGD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::IGLLHEKMIGH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IGLLHEKMIGH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGLLHEKMIGH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean GNACEPCGEHE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IGLLHEKMIGH_GNACEPCGEHE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* JIGKGOBKKME()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLLHEKMIGH_JIGKGOBKKME_OFFSET))(this);
	}

	/*
	static ::IGLLHEKMIGH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IGLLHEKMIGH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IGLLHEKMIGH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* PAEDGICEMAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLLHEKMIGH_PAEDGICEMAL_OFFSET))(this);
	}

	::System::String* CAGJEPDNKKG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLLHEKMIGH_CAGJEPDNKKG_OFFSET))(this);
	}

	::System::Int32 LDAKKMIJLOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLLHEKMIGH_LDAKKMIJLOG_OFFSET))(this);
	}

	::System::Boolean ALDJGPEMHBN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IGLLHEKMIGH_ALDJGPEMHBN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* MPDNBDFIOKB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLLHEKMIGH_MPDNBDFIOKB_OFFSET))(this);
	}

	::System::Int32 GCKHIIMAOFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLLHEKMIGH_GCKHIIMAOFL_OFFSET))(this);
	}

	::System::Int32 CHDKANJHDOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLLHEKMIGH_CHDKANJHDOH_OFFSET))(this);
	}

	::System::Int32 HIHKBMCPIJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLLHEKMIGH_HIHKBMCPIJH_OFFSET))(this);
	}

	::System::Int32 DAIGAEOPAJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLLHEKMIGH_DAIGAEOPAJO_OFFSET))(this);
	}
};
