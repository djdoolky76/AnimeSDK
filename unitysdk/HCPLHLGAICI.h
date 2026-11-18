#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CODIONJMFEK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HCPLHLGAICI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HCPLHLGAICI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x779BC0)
#define HCPLHLGAICI_EPEECECBBBN_1_OFFSET UNITYSDK_OFFSET(0x160F0610)
#define HCPLHLGAICI_EPEECECBBBN_OFFSET UNITYSDK_OFFSET(0x160F05A0)
#define HCPLHLGAICI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HCPLHLGAICI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HCPLHLGAICI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x779C00)
#define HCPLHLGAICI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x779C10)
#define HCPLHLGAICI___INIT_OFFSET UNITYSDK_OFFSET(0x779BA0)

inline static constexpr unsigned int HCPLHLGAICI_TypeDefinitionIndex = 11580;

struct alignas(8) HCPLHLGAICI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPLHLGAICI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCPLHLGAICI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HCPLHLGAICI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCPLHLGAICI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCPLHLGAICI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CODIONJMFEK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CODIONJMFEK&, ::System::Int32&))((::PBYTE)hIl2Cpp + HCPLHLGAICI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPLHLGAICI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CODIONJMFEK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CODIONJMFEK&))((::PBYTE)hIl2Cpp + HCPLHLGAICI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HCPLHLGAICI EPEECECBBBN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCPLHLGAICI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCPLHLGAICI_EPEECECBBBN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::HCPLHLGAICI EPEECECBBBN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HCPLHLGAICI EIFONLCJOPG)
	{
		return ((::HCPLHLGAICI(*)(::FlatBuffers::ByteBuffer*, ::HCPLHLGAICI))((::PBYTE)hIl2Cpp + HCPLHLGAICI_EPEECECBBBN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPLHLGAICI_PPOMNIFACOL_OFFSET))(this);
	}
};
