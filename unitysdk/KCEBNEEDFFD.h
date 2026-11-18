#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KCEBNEEDFFD_AGLBAOJBNBM_OFFSET UNITYSDK_OFFSET(0x758590)
#define KCEBNEEDFFD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KCEBNEEDFFD_CEPJNDPMCBK_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define KCEBNEEDFFD_CONNFBOJMBE_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define KCEBNEEDFFD_EMMGHDMKGIJ_OFFSET UNITYSDK_OFFSET(0x756360)
#define KCEBNEEDFFD_ENNHMFIDDHM_OFFSET UNITYSDK_OFFSET(0x756720)
#define KCEBNEEDFFD_FKBNBLHGKLL_OFFSET UNITYSDK_OFFSET(0x755790)
#define KCEBNEEDFFD_GEOPCKDKDDL_OFFSET UNITYSDK_OFFSET(0x754D50)
#define KCEBNEEDFFD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KCEBNEEDFFD_MIHHMLJBDLD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KCEBNEEDFFD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x161213E0)
#define KCEBNEEDFFD_ONLCBBIIOEJ_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define KCEBNEEDFFD_PIHKDJOINML_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define KCEBNEEDFFD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KCEBNEEDFFD_TypeDefinitionIndex = 10309;

struct alignas(4) KCEBNEEDFFD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEBNEEDFFD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCEBNEEDFFD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KCEBNEEDFFD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KCEBNEEDFFD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCEBNEEDFFD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CONNFBOJMBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEBNEEDFFD_CONNFBOJMBE_OFFSET))(this);
	}

	::System::Boolean CEPJNDPMCBK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KCEBNEEDFFD_CEPJNDPMCBK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean AGLBAOJBNBM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEBNEEDFFD_AGLBAOJBNBM_OFFSET))(this);
	}

	/*
	static ::KCEBNEEDFFD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KCEBNEEDFFD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KCEBNEEDFFD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 FKBNBLHGKLL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEBNEEDFFD_FKBNBLHGKLL_OFFSET))(this);
	}

	::System::Boolean EMMGHDMKGIJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KCEBNEEDFFD_EMMGHDMKGIJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ENNHMFIDDHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEBNEEDFFD_ENNHMFIDDHM_OFFSET))(this);
	}

	::System::Int32 GEOPCKDKDDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEBNEEDFFD_GEOPCKDKDDL_OFFSET))(this);
	}

	::System::Boolean ONLCBBIIOEJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KCEBNEEDFFD_ONLCBBIIOEJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean PIHKDJOINML(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KCEBNEEDFFD_PIHKDJOINML_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MIHHMLJBDLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEBNEEDFFD_MIHHMLJBDLD_OFFSET))(this);
	}
};
