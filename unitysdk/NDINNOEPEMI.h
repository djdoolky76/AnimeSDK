#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EJIJGMCMMJF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NDINNOEPEMI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NDINNOEPEMI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80BF40)
#define NDINNOEPEMI_DOHGDINNDFB_1_OFFSET UNITYSDK_OFFSET(0x1B327240)
#define NDINNOEPEMI_DOHGDINNDFB_OFFSET UNITYSDK_OFFSET(0x1B3271D0)
#define NDINNOEPEMI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NDINNOEPEMI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NDINNOEPEMI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80BF30)
#define NDINNOEPEMI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80BF20)
#define NDINNOEPEMI___INIT_OFFSET UNITYSDK_OFFSET(0x80BF00)

inline static constexpr unsigned int NDINNOEPEMI_TypeDefinitionIndex = 15698;

struct alignas(8) NDINNOEPEMI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDINNOEPEMI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDINNOEPEMI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDINNOEPEMI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NDINNOEPEMI DOHGDINNDFB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDINNOEPEMI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDINNOEPEMI_DOHGDINNDFB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EJIJGMCMMJF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EJIJGMCMMJF&, ::System::Int32&))((::PBYTE)hIl2Cpp + NDINNOEPEMI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::NDINNOEPEMI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDINNOEPEMI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDINNOEPEMI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EJIJGMCMMJF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EJIJGMCMMJF&))((::PBYTE)hIl2Cpp + NDINNOEPEMI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::NDINNOEPEMI DOHGDINNDFB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NDINNOEPEMI EIFONLCJOPG)
	{
		return ((::NDINNOEPEMI(*)(::FlatBuffers::ByteBuffer*, ::NDINNOEPEMI))((::PBYTE)hIl2Cpp + NDINNOEPEMI_DOHGDINNDFB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDINNOEPEMI_GHKKNCCLPAN_OFFSET))(this);
	}
};
