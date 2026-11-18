#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DGCPHIEDHNF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DGCPHIEDHNF_AMPAFLEEJPO_OFFSET UNITYSDK_OFFSET(0x7575F0)
#define DGCPHIEDHNF_BBMDKGLKCAP_OFFSET UNITYSDK_OFFSET(0x754970)
#define DGCPHIEDHNF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DGCPHIEDHNF_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define DGCPHIEDHNF_ECCMEFNAEOB_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define DGCPHIEDHNF_EIPKIHFJIGK_OFFSET UNITYSDK_OFFSET(0x754E10)
#define DGCPHIEDHNF_GCPKGJHLOLB_OFFSET UNITYSDK_OFFSET(0x757D20)
#define DGCPHIEDHNF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DGCPHIEDHNF_IKOFMCKHFIK_OFFSET UNITYSDK_OFFSET(0x756490)
#define DGCPHIEDHNF_IMFELMMICNE_OFFSET UNITYSDK_OFFSET(0x755140)
#define DGCPHIEDHNF_JFCMEALILNC_OFFSET UNITYSDK_OFFSET(0x755840)
#define DGCPHIEDHNF_KGCGNNNNEHK_OFFSET UNITYSDK_OFFSET(0x755570)
#define DGCPHIEDHNF_NCIHALCABFM_OFFSET UNITYSDK_OFFSET(0x754920)
#define DGCPHIEDHNF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17781050)
#define DGCPHIEDHNF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DGCPHIEDHNF_TypeDefinitionIndex = 17406;

struct alignas(4) DGCPHIEDHNF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCPHIEDHNF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGCPHIEDHNF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DGCPHIEDHNF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DGCPHIEDHNF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGCPHIEDHNF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JFCMEALILNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCPHIEDHNF_JFCMEALILNC_OFFSET))(this);
	}

	::System::Int32 NCIHALCABFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCPHIEDHNF_NCIHALCABFM_OFFSET))(this);
	}

	::System::String* GCPKGJHLOLB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCPHIEDHNF_GCPKGJHLOLB_OFFSET))(this);
	}

	::System::Boolean EIPKIHFJIGK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCPHIEDHNF_EIPKIHFJIGK_OFFSET))(this);
	}

	/*
	static ::DGCPHIEDHNF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DGCPHIEDHNF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DGCPHIEDHNF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCPHIEDHNF_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean IKOFMCKHFIK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DGCPHIEDHNF_IKOFMCKHFIK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* KGCGNNNNEHK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCPHIEDHNF_KGCGNNNNEHK_OFFSET))(this);
	}

	::System::Int32 BBMDKGLKCAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCPHIEDHNF_BBMDKGLKCAP_OFFSET))(this);
	}

	::System::Int32 IMFELMMICNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCPHIEDHNF_IMFELMMICNE_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCPHIEDHNF_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 ECCMEFNAEOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCPHIEDHNF_ECCMEFNAEOB_OFFSET))(this);
	}

	::System::Boolean AMPAFLEEJPO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCPHIEDHNF_AMPAFLEEJPO_OFFSET))(this);
	}
};
