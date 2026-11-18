#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NEJKEOBCPKH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EHFGGOLCPGN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EHFGGOLCPGN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x789370)
#define EHFGGOLCPGN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EHFGGOLCPGN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EHFGGOLCPGN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x789360)
#define EHFGGOLCPGN_PGOEAOHIGMN_1_OFFSET UNITYSDK_OFFSET(0x16627200)
#define EHFGGOLCPGN_PGOEAOHIGMN_OFFSET UNITYSDK_OFFSET(0x16627160)
#define EHFGGOLCPGN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7893B0)
#define EHFGGOLCPGN___INIT_OFFSET UNITYSDK_OFFSET(0x789340)

inline static constexpr unsigned int EHFGGOLCPGN_TypeDefinitionIndex = 14175;

struct alignas(8) EHFGGOLCPGN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFGGOLCPGN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHFGGOLCPGN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EHFGGOLCPGN PGOEAOHIGMN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EHFGGOLCPGN EIFONLCJOPG)
	{
		return ((::EHFGGOLCPGN(*)(::FlatBuffers::ByteBuffer*, ::EHFGGOLCPGN))((::PBYTE)hIl2Cpp + EHFGGOLCPGN_PGOEAOHIGMN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::EHFGGOLCPGN PGOEAOHIGMN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EHFGGOLCPGN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHFGGOLCPGN_PGOEAOHIGMN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFGGOLCPGN_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NEJKEOBCPKH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NEJKEOBCPKH&))((::PBYTE)hIl2Cpp + EHFGGOLCPGN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NEJKEOBCPKH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NEJKEOBCPKH&, ::System::Int32&))((::PBYTE)hIl2Cpp + EHFGGOLCPGN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::EHFGGOLCPGN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EHFGGOLCPGN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHFGGOLCPGN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFGGOLCPGN_PPOMNIFACOL_OFFSET))(this);
	}
};
