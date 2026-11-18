#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OILINEJKLPH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OILINEJKLPH_BCPKBHFMFOE_OFFSET UNITYSDK_OFFSET(0x756D50)
#define OILINEJKLPH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OILINEJKLPH_BOBCANOIAGF_OFFSET UNITYSDK_OFFSET(0x76FDA0)
#define OILINEJKLPH_DGFHLKMKEKL_OFFSET UNITYSDK_OFFSET(0x756B10)
#define OILINEJKLPH_EGDMAAGFIEO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define OILINEJKLPH_EIMNAHILNEA_OFFSET UNITYSDK_OFFSET(0x755E40)
#define OILINEJKLPH_EPKHFGDILDG_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define OILINEJKLPH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OILINEJKLPH_GNBKPHAOFCF_OFFSET UNITYSDK_OFFSET(0x758320)
#define OILINEJKLPH_MCHDDKKFPDO_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define OILINEJKLPH_MJAGABFJBAJ_OFFSET UNITYSDK_OFFSET(0x762D20)
#define OILINEJKLPH_NCLDFLBLFAL_OFFSET UNITYSDK_OFFSET(0x757290)
#define OILINEJKLPH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17367910)
#define OILINEJKLPH_OHBKCNNKDCD_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define OILINEJKLPH_PMDJDEHFPEB_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define OILINEJKLPH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OILINEJKLPH_TypeDefinitionIndex = 16601;

struct alignas(4) OILINEJKLPH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OILINEJKLPH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OILINEJKLPH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* EGDMAAGFIEO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OILINEJKLPH_EGDMAAGFIEO_OFFSET))(this);
	}

	::System::String* MCHDDKKFPDO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OILINEJKLPH_MCHDDKKFPDO_OFFSET))(this);
	}

	::System::Boolean BOBCANOIAGF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OILINEJKLPH_BOBCANOIAGF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* EPKHFGDILDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OILINEJKLPH_EPKHFGDILDG_OFFSET))(this);
	}

	/*
	static ::OILINEJKLPH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OILINEJKLPH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OILINEJKLPH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* DGFHLKMKEKL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OILINEJKLPH_DGFHLKMKEKL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OILINEJKLPH_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* GNBKPHAOFCF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OILINEJKLPH_GNBKPHAOFCF_OFFSET))(this);
	}

	::System::Int32 EIMNAHILNEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OILINEJKLPH_EIMNAHILNEA_OFFSET))(this);
	}

	/*
	::OILINEJKLPH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OILINEJKLPH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OILINEJKLPH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PMDJDEHFPEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OILINEJKLPH_PMDJDEHFPEB_OFFSET))(this);
	}

	::System::String* OHBKCNNKDCD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OILINEJKLPH_OHBKCNNKDCD_OFFSET))(this);
	}

	::System::String* BCPKBHFMFOE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OILINEJKLPH_BCPKBHFMFOE_OFFSET))(this);
	}

	::System::Int32 MJAGABFJBAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OILINEJKLPH_MJAGABFJBAJ_OFFSET))(this);
	}

	::System::String* NCLDFLBLFAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OILINEJKLPH_NCLDFLBLFAL_OFFSET))(this);
	}
};
