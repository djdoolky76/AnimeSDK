#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define POABMLIJKCF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define POABMLIJKCF_ANPKFBIEMDL_OFFSET UNITYSDK_OFFSET(0x757A30)
#define POABMLIJKCF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define POABMLIJKCF_BHMMKDGCLGB_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define POABMLIJKCF_CFGBBDKOIGD_OFFSET UNITYSDK_OFFSET(0x756800)
#define POABMLIJKCF_DGIIBPLMHJD_OFFSET UNITYSDK_OFFSET(0x755FE0)
#define POABMLIJKCF_EGOBLICIMPB_OFFSET UNITYSDK_OFFSET(0x7552C0)
#define POABMLIJKCF_ELJPPPBJKAJ_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define POABMLIJKCF_FFAJEDHKIPK_OFFSET UNITYSDK_OFFSET(0x756510)
#define POABMLIJKCF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define POABMLIJKCF_HDGMPGJLIKC_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define POABMLIJKCF_ICEPJNCOIBO_OFFSET UNITYSDK_OFFSET(0x757190)
#define POABMLIJKCF_JJKKKJBMHFJ_OFFSET UNITYSDK_OFFSET(0x7C3340)
#define POABMLIJKCF_LFPFCAFBOEK_OFFSET UNITYSDK_OFFSET(0x757290)
#define POABMLIJKCF_LJNCEGGAJFL_OFFSET UNITYSDK_OFFSET(0x757830)
#define POABMLIJKCF_MIFGEOAHFJP_OFFSET UNITYSDK_OFFSET(0x757390)
#define POABMLIJKCF_NEBLIFEABCP_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define POABMLIJKCF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1FC23E70)
#define POABMLIJKCF_PKLHBMBBNCA_OFFSET UNITYSDK_OFFSET(0x756D50)
#define POABMLIJKCF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int POABMLIJKCF_TypeDefinitionIndex = 16572;

struct alignas(4) POABMLIJKCF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + POABMLIJKCF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POABMLIJKCF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::POABMLIJKCF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::POABMLIJKCF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + POABMLIJKCF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 FFAJEDHKIPK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POABMLIJKCF_FFAJEDHKIPK_OFFSET))(this);
	}

	::System::Boolean DGIIBPLMHJD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + POABMLIJKCF_DGIIBPLMHJD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ANPKFBIEMDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POABMLIJKCF_ANPKFBIEMDL_OFFSET))(this);
	}

	::System::Int32 CFGBBDKOIGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POABMLIJKCF_CFGBBDKOIGD_OFFSET))(this);
	}

	::System::Int32 EGOBLICIMPB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POABMLIJKCF_EGOBLICIMPB_OFFSET))(this);
	}

	::System::String* ICEPJNCOIBO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POABMLIJKCF_ICEPJNCOIBO_OFFSET))(this);
	}

	::System::String* NEBLIFEABCP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POABMLIJKCF_NEBLIFEABCP_OFFSET))(this);
	}

	/*
	::POABMLIJKCF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POABMLIJKCF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POABMLIJKCF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LJNCEGGAJFL(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + POABMLIJKCF_LJNCEGGAJFL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean JJKKKJBMHFJ(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + POABMLIJKCF_JJKKKJBMHFJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POABMLIJKCF_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 HDGMPGJLIKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POABMLIJKCF_HDGMPGJLIKC_OFFSET))(this);
	}

	::System::String* PKLHBMBBNCA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POABMLIJKCF_PKLHBMBBNCA_OFFSET))(this);
	}

	::System::Boolean MIFGEOAHFJP(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + POABMLIJKCF_MIFGEOAHFJP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* LFPFCAFBOEK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POABMLIJKCF_LFPFCAFBOEK_OFFSET))(this);
	}

	::System::String* BHMMKDGCLGB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POABMLIJKCF_BHMMKDGCLGB_OFFSET))(this);
	}

	::System::String* ELJPPPBJKAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POABMLIJKCF_ELJPPPBJKAJ_OFFSET))(this);
	}
};
