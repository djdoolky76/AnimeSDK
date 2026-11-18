#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HFNMHMDCDOG.h"
#include "unitysdk/HOALPDNFMKD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JJICEEOIKHN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JJICEEOIKHN_AKGMBOBKNHP_OFFSET UNITYSDK_OFFSET(0x761500)
#define JJICEEOIKHN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JJICEEOIKHN_CGCIMHEHKHH_OFFSET UNITYSDK_OFFSET(0x81C2C0)
#define JJICEEOIKHN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JJICEEOIKHN_JJJFLIHHNKN_OFFSET UNITYSDK_OFFSET(0x7AC220)
#define JJICEEOIKHN_MLAFJGPJOJF_OFFSET UNITYSDK_OFFSET(0x81C360)
#define JJICEEOIKHN_NAOPMIEPJME_OFFSET UNITYSDK_OFFSET(0x754C20)
#define JJICEEOIKHN_NEACPOMGDIM_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define JJICEEOIKHN_NFILNNFHKEC_OFFSET UNITYSDK_OFFSET(0x755790)
#define JJICEEOIKHN_NOFIPBGELJF_OFFSET UNITYSDK_OFFSET(0x761240)
#define JJICEEOIKHN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BAFB4C0)
#define JJICEEOIKHN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JJICEEOIKHN_TypeDefinitionIndex = 14012;

struct alignas(4) JJICEEOIKHN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJICEEOIKHN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJICEEOIKHN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NAOPMIEPJME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJICEEOIKHN_NAOPMIEPJME_OFFSET))(this);
	}

	::System::Boolean CGCIMHEHKHH(::System::Int32 HPMEONKHFGG, ::HOALPDNFMKD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HOALPDNFMKD&))((::PBYTE)hIl2Cpp + JJICEEOIKHN_CGCIMHEHKHH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean MLAFJGPJOJF(::System::Int32 HPMEONKHFGG, ::HFNMHMDCDOG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HFNMHMDCDOG&))((::PBYTE)hIl2Cpp + JJICEEOIKHN_MLAFJGPJOJF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NFILNNFHKEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJICEEOIKHN_NFILNNFHKEC_OFFSET))(this);
	}

	::System::Boolean JJJFLIHHNKN(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + JJICEEOIKHN_JJJFLIHHNKN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JJICEEOIKHN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JJICEEOIKHN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JJICEEOIKHN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJICEEOIKHN_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::JJICEEOIKHN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JJICEEOIKHN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJICEEOIKHN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NEACPOMGDIM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJICEEOIKHN_NEACPOMGDIM_OFFSET))(this);
	}

	::System::Boolean AKGMBOBKNHP(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + JJICEEOIKHN_AKGMBOBKNHP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NOFIPBGELJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJICEEOIKHN_NOFIPBGELJF_OFFSET))(this);
	}
};
