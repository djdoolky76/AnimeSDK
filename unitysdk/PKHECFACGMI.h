#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DILDCMEDGJB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PKHECFACGMI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PKHECFACGMI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AF6C0)
#define PKHECFACGMI_CAEBPJECFNF_1_OFFSET UNITYSDK_OFFSET(0x1D0DFA70)
#define PKHECFACGMI_CAEBPJECFNF_OFFSET UNITYSDK_OFFSET(0x1D0DF970)
#define PKHECFACGMI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PKHECFACGMI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PKHECFACGMI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AF700)
#define PKHECFACGMI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AF6B0)
#define PKHECFACGMI___INIT_OFFSET UNITYSDK_OFFSET(0x8AF690)

inline static constexpr unsigned int PKHECFACGMI_TypeDefinitionIndex = 13610;

struct alignas(8) PKHECFACGMI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHECFACGMI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKHECFACGMI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PKHECFACGMI CAEBPJECFNF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PKHECFACGMI EIFONLCJOPG)
	{
		return ((::PKHECFACGMI(*)(::FlatBuffers::ByteBuffer*, ::PKHECFACGMI))((::PBYTE)hIl2Cpp + PKHECFACGMI_CAEBPJECFNF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHECFACGMI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::PKHECFACGMI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PKHECFACGMI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKHECFACGMI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHECFACGMI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PKHECFACGMI CAEBPJECFNF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PKHECFACGMI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKHECFACGMI_CAEBPJECFNF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DILDCMEDGJB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DILDCMEDGJB&))((::PBYTE)hIl2Cpp + PKHECFACGMI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DILDCMEDGJB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DILDCMEDGJB&, ::System::Int32&))((::PBYTE)hIl2Cpp + PKHECFACGMI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
