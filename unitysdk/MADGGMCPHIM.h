#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MADGGMCPHIM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MADGGMCPHIM_BLOIDAGOEIO_OFFSET UNITYSDK_OFFSET(0x756360)
#define MADGGMCPHIM_DLGPDMCJGFN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MADGGMCPHIM_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MADGGMCPHIM_FOIONILHLAI_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define MADGGMCPHIM_GAJHOFOBEMK_OFFSET UNITYSDK_OFFSET(0x757290)
#define MADGGMCPHIM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MADGGMCPHIM_JDPAJEHFCHM_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define MADGGMCPHIM_JKBACAMKPLE_OFFSET UNITYSDK_OFFSET(0x7612A0)
#define MADGGMCPHIM_LMBHNHKLGPA_OFFSET UNITYSDK_OFFSET(0x761240)
#define MADGGMCPHIM_MKHMNALDJKC_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define MADGGMCPHIM_NIHIAPKJDKK_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define MADGGMCPHIM_NNOEKHPGFMI_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define MADGGMCPHIM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MADGGMCPHIM_TypeDefinitionIndex = 17268;

struct alignas(4) MADGGMCPHIM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MADGGMCPHIM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MADGGMCPHIM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BLOIDAGOEIO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MADGGMCPHIM_BLOIDAGOEIO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean JKBACAMKPLE(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + MADGGMCPHIM_JKBACAMKPLE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 LMBHNHKLGPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MADGGMCPHIM_LMBHNHKLGPA_OFFSET))(this);
	}

	::System::Int32 DLGPDMCJGFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MADGGMCPHIM_DLGPDMCJGFN_OFFSET))(this);
	}

	::System::String* NNOEKHPGFMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MADGGMCPHIM_NNOEKHPGFMI_OFFSET))(this);
	}

	::System::Int32 MKHMNALDJKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MADGGMCPHIM_MKHMNALDJKC_OFFSET))(this);
	}

	::System::Int32 FOIONILHLAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MADGGMCPHIM_FOIONILHLAI_OFFSET))(this);
	}

	/*
	::MADGGMCPHIM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MADGGMCPHIM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MADGGMCPHIM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MADGGMCPHIM_FJPGCNGHHCC_OFFSET))(this);
	}

	::System::Int32 NIHIAPKJDKK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MADGGMCPHIM_NIHIAPKJDKK_OFFSET))(this);
	}

	::System::Boolean JDPAJEHFCHM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MADGGMCPHIM_JDPAJEHFCHM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* GAJHOFOBEMK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MADGGMCPHIM_GAJHOFOBEMK_OFFSET))(this);
	}
};
