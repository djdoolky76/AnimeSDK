#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EFLNIGNHMMK_AGEMBBBODIM_OFFSET UNITYSDK_OFFSET(0x762B30)
#define EFLNIGNHMMK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EFLNIGNHMMK_BOEJCDPACFE_OFFSET UNITYSDK_OFFSET(0x754920)
#define EFLNIGNHMMK_CMGCPDPAMPM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EFLNIGNHMMK_EEDNFJGJAMC_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define EFLNIGNHMMK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EFLNIGNHMMK_KPGNJOCBPFN_OFFSET UNITYSDK_OFFSET(0x761240)
#define EFLNIGNHMMK_LCOLNEOIGDF_OFFSET UNITYSDK_OFFSET(0x754970)
#define EFLNIGNHMMK_MBHOKGCNDBF_OFFSET UNITYSDK_OFFSET(0x758590)
#define EFLNIGNHMMK_MHEEPCIODAB_OFFSET UNITYSDK_OFFSET(0x76FBF0)
#define EFLNIGNHMMK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x16626780)
#define EFLNIGNHMMK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EFLNIGNHMMK_TypeDefinitionIndex = 10382;

struct alignas(4) EFLNIGNHMMK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLNIGNHMMK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFLNIGNHMMK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EFLNIGNHMMK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EFLNIGNHMMK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFLNIGNHMMK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CMGCPDPAMPM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLNIGNHMMK_CMGCPDPAMPM_OFFSET))(this);
	}

	::System::Int32 LCOLNEOIGDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLNIGNHMMK_LCOLNEOIGDF_OFFSET))(this);
	}

	::System::Boolean AGEMBBBODIM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLNIGNHMMK_AGEMBBBODIM_OFFSET))(this);
	}

	::System::Boolean EEDNFJGJAMC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EFLNIGNHMMK_EEDNFJGJAMC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 KPGNJOCBPFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLNIGNHMMK_KPGNJOCBPFN_OFFSET))(this);
	}

	::System::Boolean MBHOKGCNDBF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLNIGNHMMK_MBHOKGCNDBF_OFFSET))(this);
	}

	::System::Boolean MHEEPCIODAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLNIGNHMMK_MHEEPCIODAB_OFFSET))(this);
	}

	::System::Int32 BOEJCDPACFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLNIGNHMMK_BOEJCDPACFE_OFFSET))(this);
	}

	/*
	static ::EFLNIGNHMMK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EFLNIGNHMMK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EFLNIGNHMMK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
