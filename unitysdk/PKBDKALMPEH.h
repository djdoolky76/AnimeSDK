#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HKBPNPDADDP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PKBDKALMPEH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PKBDKALMPEH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8064E0)
#define PKBDKALMPEH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PKBDKALMPEH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PKBDKALMPEH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8064D0)
#define PKBDKALMPEH_PPDHDICDBIM_1_OFFSET UNITYSDK_OFFSET(0x1AD9A690)
#define PKBDKALMPEH_PPDHDICDBIM_OFFSET UNITYSDK_OFFSET(0x1AD9A5F0)
#define PKBDKALMPEH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8064C0)
#define PKBDKALMPEH___INIT_OFFSET UNITYSDK_OFFSET(0x8064A0)

inline static constexpr unsigned int PKBDKALMPEH_TypeDefinitionIndex = 17394;

struct alignas(8) PKBDKALMPEH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDKALMPEH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKBDKALMPEH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HKBPNPDADDP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HKBPNPDADDP&))((::PBYTE)hIl2Cpp + PKBDKALMPEH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDKALMPEH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HKBPNPDADDP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HKBPNPDADDP&, ::System::Int32&))((::PBYTE)hIl2Cpp + PKBDKALMPEH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::PKBDKALMPEH PPDHDICDBIM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PKBDKALMPEH EIFONLCJOPG)
	{
		return ((::PKBDKALMPEH(*)(::FlatBuffers::ByteBuffer*, ::PKBDKALMPEH))((::PBYTE)hIl2Cpp + PKBDKALMPEH_PPDHDICDBIM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDKALMPEH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PKBDKALMPEH PPDHDICDBIM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PKBDKALMPEH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKBDKALMPEH_PPDHDICDBIM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::PKBDKALMPEH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PKBDKALMPEH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKBDKALMPEH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
