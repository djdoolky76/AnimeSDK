#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BIIEGPIPIOI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BIIEGPIPIOI_CBKOJBDCFIH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define BIIEGPIPIOI_COAAEIIODNP_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define BIIEGPIPIOI_DOJAGCNMMNP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define BIIEGPIPIOI_EFKIFCJKLJF_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define BIIEGPIPIOI_EHFKCOCHOHF_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define BIIEGPIPIOI_EHGPGGBGBFM_OFFSET UNITYSDK_OFFSET(0x756B10)
#define BIIEGPIPIOI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BIIEGPIPIOI_HBJAIFJNMIA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BIIEGPIPIOI_LKJMHBDBDAN_OFFSET UNITYSDK_OFFSET(0x754D50)
#define BIIEGPIPIOI_LOOGAJJBFIO_OFFSET UNITYSDK_OFFSET(0x758200)
#define BIIEGPIPIOI_MMAKLMKHCOO_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define BIIEGPIPIOI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19BEA750)
#define BIIEGPIPIOI_ODLBNCNNAIE_OFFSET UNITYSDK_OFFSET(0x758780)
#define BIIEGPIPIOI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BIIEGPIPIOI_TypeDefinitionIndex = 16076;

struct alignas(4) BIIEGPIPIOI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIEGPIPIOI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIIEGPIPIOI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HBJAIFJNMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIEGPIPIOI_HBJAIFJNMIA_OFFSET))(this);
	}

	::System::Int32 LKJMHBDBDAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIEGPIPIOI_LKJMHBDBDAN_OFFSET))(this);
	}

	::System::String* CBKOJBDCFIH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIEGPIPIOI_CBKOJBDCFIH_OFFSET))(this);
	}

	::System::Int32 ODLBNCNNAIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIEGPIPIOI_ODLBNCNNAIE_OFFSET))(this);
	}

	::System::String* DOJAGCNMMNP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIEGPIPIOI_DOJAGCNMMNP_OFFSET))(this);
	}

	::System::Boolean LOOGAJJBFIO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BIIEGPIPIOI_LOOGAJJBFIO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 COAAEIIODNP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIEGPIPIOI_COAAEIIODNP_OFFSET))(this);
	}

	/*
	static ::BIIEGPIPIOI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BIIEGPIPIOI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BIIEGPIPIOI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 EHFKCOCHOHF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIEGPIPIOI_EHFKCOCHOHF_OFFSET))(this);
	}

	::System::String* EHGPGGBGBFM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIEGPIPIOI_EHGPGGBGBFM_OFFSET))(this);
	}

	::System::Boolean EFKIFCJKLJF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BIIEGPIPIOI_EFKIFCJKLJF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::BIIEGPIPIOI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BIIEGPIPIOI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIIEGPIPIOI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean MMAKLMKHCOO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BIIEGPIPIOI_MMAKLMKHCOO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
