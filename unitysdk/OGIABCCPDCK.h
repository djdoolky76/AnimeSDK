#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OGIABCCPDCK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OGIABCCPDCK_DCNPOLHLAAE_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define OGIABCCPDCK_FDHEHINIABB_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define OGIABCCPDCK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OGIABCCPDCK_HJJHBPKKPGF_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define OGIABCCPDCK_IMGAOJCJABG_OFFSET UNITYSDK_OFFSET(0x757290)
#define OGIABCCPDCK_IODEPMGILJD_OFFSET UNITYSDK_OFFSET(0x758200)
#define OGIABCCPDCK_JPCNDGNKNHF_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define OGIABCCPDCK_KCJICFBPPKJ_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define OGIABCCPDCK_KINNAAKGEBM_OFFSET UNITYSDK_OFFSET(0x756780)
#define OGIABCCPDCK_LFPEGCFKODE_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define OGIABCCPDCK_MBCKBPMDNMJ_OFFSET UNITYSDK_OFFSET(0x754920)
#define OGIABCCPDCK_MGEOHGCIILG_OFFSET UNITYSDK_OFFSET(0x754A70)
#define OGIABCCPDCK_MNDFJEPKFAB_OFFSET UNITYSDK_OFFSET(0x754970)
#define OGIABCCPDCK_MOILKHIFLHC_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define OGIABCCPDCK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1CFFAE00)
#define OGIABCCPDCK_OHHCKDALGFE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OGIABCCPDCK_OIJDEKPHCIH_OFFSET UNITYSDK_OFFSET(0x754C20)
#define OGIABCCPDCK_PIHMJAJLJJB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define OGIABCCPDCK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OGIABCCPDCK_TypeDefinitionIndex = 15208;

struct alignas(4) OGIABCCPDCK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIABCCPDCK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGIABCCPDCK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HJJHBPKKPGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIABCCPDCK_HJJHBPKKPGF_OFFSET))(this);
	}

	::System::Boolean FDHEHINIABB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OGIABCCPDCK_FDHEHINIABB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 LFPEGCFKODE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIABCCPDCK_LFPEGCFKODE_OFFSET))(this);
	}

	::System::String* IMGAOJCJABG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIABCCPDCK_IMGAOJCJABG_OFFSET))(this);
	}

	::System::String* PIHMJAJLJJB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIABCCPDCK_PIHMJAJLJJB_OFFSET))(this);
	}

	::System::Int32 MOILKHIFLHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIABCCPDCK_MOILKHIFLHC_OFFSET))(this);
	}

	::System::Int32 DCNPOLHLAAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIABCCPDCK_DCNPOLHLAAE_OFFSET))(this);
	}

	::System::Boolean IODEPMGILJD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OGIABCCPDCK_IODEPMGILJD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::OGIABCCPDCK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGIABCCPDCK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGIABCCPDCK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OGIABCCPDCK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OGIABCCPDCK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OGIABCCPDCK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 JPCNDGNKNHF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIABCCPDCK_JPCNDGNKNHF_OFFSET))(this);
	}

	::System::Int32 MNDFJEPKFAB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIABCCPDCK_MNDFJEPKFAB_OFFSET))(this);
	}

	::System::Boolean KINNAAKGEBM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OGIABCCPDCK_KINNAAKGEBM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean MGEOHGCIILG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OGIABCCPDCK_MGEOHGCIILG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 OHHCKDALGFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIABCCPDCK_OHHCKDALGFE_OFFSET))(this);
	}

	::System::Int32 MBCKBPMDNMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIABCCPDCK_MBCKBPMDNMJ_OFFSET))(this);
	}

	::System::Boolean KCJICFBPPKJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OGIABCCPDCK_KCJICFBPPKJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 OIJDEKPHCIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIABCCPDCK_OIJDEKPHCIH_OFFSET))(this);
	}
};
