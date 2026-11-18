#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NAOHCPDEFKP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JCNJIAGDGEH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JCNJIAGDGEH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FD780)
#define JCNJIAGDGEH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JCNJIAGDGEH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JCNJIAGDGEH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FD7D0)
#define JCNJIAGDGEH_MEGOKGDELPJ_1_OFFSET UNITYSDK_OFFSET(0x1A5E9710)
#define JCNJIAGDGEH_MEGOKGDELPJ_OFFSET UNITYSDK_OFFSET(0x1A5E94B0)
#define JCNJIAGDGEH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FD7C0)
#define JCNJIAGDGEH___INIT_OFFSET UNITYSDK_OFFSET(0x7FD760)

inline static constexpr unsigned int JCNJIAGDGEH_TypeDefinitionIndex = 11891;

struct alignas(8) JCNJIAGDGEH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNJIAGDGEH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCNJIAGDGEH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JCNJIAGDGEH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCNJIAGDGEH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCNJIAGDGEH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNJIAGDGEH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JCNJIAGDGEH MEGOKGDELPJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JCNJIAGDGEH EIFONLCJOPG)
	{
		return ((::JCNJIAGDGEH(*)(::FlatBuffers::ByteBuffer*, ::JCNJIAGDGEH))((::PBYTE)hIl2Cpp + JCNJIAGDGEH_MEGOKGDELPJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNJIAGDGEH_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NAOHCPDEFKP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NAOHCPDEFKP&))((::PBYTE)hIl2Cpp + JCNJIAGDGEH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NAOHCPDEFKP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NAOHCPDEFKP&, ::System::Int32&))((::PBYTE)hIl2Cpp + JCNJIAGDGEH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::JCNJIAGDGEH MEGOKGDELPJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCNJIAGDGEH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCNJIAGDGEH_MEGOKGDELPJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
