#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"
#include "unitysdk/NLAOAFGNDNF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PELDJALAIHO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PELDJALAIHO_AKJAILHOIEC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define PELDJALAIHO_BAPPMHFEMCH_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define PELDJALAIHO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PELDJALAIHO_EMEIJBDAKLJ_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define PELDJALAIHO_FOCMLJBALAI_OFFSET UNITYSDK_OFFSET(0x760650)
#define PELDJALAIHO_GEMABPBEPME_OFFSET UNITYSDK_OFFSET(0x7A69D0)
#define PELDJALAIHO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PELDJALAIHO_GGCEEPEGGKA_OFFSET UNITYSDK_OFFSET(0x7588B0)
#define PELDJALAIHO_JJBHHNAILJA_OFFSET UNITYSDK_OFFSET(0x757330)
#define PELDJALAIHO_KPMGPDFDEOI_OFFSET UNITYSDK_OFFSET(0x788DB0)
#define PELDJALAIHO_MIFGLBMAJLB_OFFSET UNITYSDK_OFFSET(0x77A380)
#define PELDJALAIHO_NAINNEKPGME_OFFSET UNITYSDK_OFFSET(0x756B90)
#define PELDJALAIHO_NEJJCPAJBKH_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define PELDJALAIHO_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PELDJALAIHO_PELMKBGHEOK_OFFSET UNITYSDK_OFFSET(0x757B50)
#define PELDJALAIHO_PEMKFLFDDJI_OFFSET UNITYSDK_OFFSET(0x756220)
#define PELDJALAIHO_PFEGKHBJHNA_OFFSET UNITYSDK_OFFSET(0x754920)
#define PELDJALAIHO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PELDJALAIHO_TypeDefinitionIndex = 9297;

struct alignas(4) PELDJALAIHO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDJALAIHO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PELDJALAIHO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDJALAIHO_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::PELDJALAIHO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PELDJALAIHO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PELDJALAIHO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDJALAIHO_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Int32 BAPPMHFEMCH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDJALAIHO_BAPPMHFEMCH_OFFSET))(this);
	}

	::System::Boolean KPMGPDFDEOI(::System::Int32 HPMEONKHFGG, ::NLAOAFGNDNF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NLAOAFGNDNF&))((::PBYTE)hIl2Cpp + PELDJALAIHO_KPMGPDFDEOI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EMEIJBDAKLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDJALAIHO_EMEIJBDAKLJ_OFFSET))(this);
	}

	::System::Int32 PFEGKHBJHNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDJALAIHO_PFEGKHBJHNA_OFFSET))(this);
	}

	::System::String* NEJJCPAJBKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDJALAIHO_NEJJCPAJBKH_OFFSET))(this);
	}

	::System::Boolean MIFGLBMAJLB(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + PELDJALAIHO_MIFGLBMAJLB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JJBHHNAILJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDJALAIHO_JJBHHNAILJA_OFFSET))(this);
	}

	::System::Int32 AKJAILHOIEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDJALAIHO_AKJAILHOIEC_OFFSET))(this);
	}

	::System::Int32 NAINNEKPGME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDJALAIHO_NAINNEKPGME_OFFSET))(this);
	}

	::System::Int32 FOCMLJBALAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDJALAIHO_FOCMLJBALAI_OFFSET))(this);
	}

	::System::Boolean GEMABPBEPME(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + PELDJALAIHO_GEMABPBEPME_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean PELMKBGHEOK(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + PELDJALAIHO_PELMKBGHEOK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PEMKFLFDDJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDJALAIHO_PEMKFLFDDJI_OFFSET))(this);
	}

	::System::Boolean GGCEEPEGGKA(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + PELDJALAIHO_GGCEEPEGGKA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
