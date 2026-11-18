#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NJADODDEDDN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KMNNKAJNKGF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KMNNKAJNKGF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FDDD0)
#define KMNNKAJNKGF_CAALCKKHMFE_1_OFFSET UNITYSDK_OFFSET(0x1A5FC5B0)
#define KMNNKAJNKGF_CAALCKKHMFE_OFFSET UNITYSDK_OFFSET(0x1A5FC350)
#define KMNNKAJNKGF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KMNNKAJNKGF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KMNNKAJNKGF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FDE20)
#define KMNNKAJNKGF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FDE10)
#define KMNNKAJNKGF___INIT_OFFSET UNITYSDK_OFFSET(0x7FDDB0)

inline static constexpr unsigned int KMNNKAJNKGF_TypeDefinitionIndex = 13132;

struct alignas(8) KMNNKAJNKGF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNNKAJNKGF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMNNKAJNKGF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KMNNKAJNKGF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KMNNKAJNKGF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMNNKAJNKGF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNNKAJNKGF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KMNNKAJNKGF CAALCKKHMFE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KMNNKAJNKGF EIFONLCJOPG)
	{
		return ((::KMNNKAJNKGF(*)(::FlatBuffers::ByteBuffer*, ::KMNNKAJNKGF))((::PBYTE)hIl2Cpp + KMNNKAJNKGF_CAALCKKHMFE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NJADODDEDDN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NJADODDEDDN&, ::System::Int32&))((::PBYTE)hIl2Cpp + KMNNKAJNKGF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NJADODDEDDN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NJADODDEDDN&))((::PBYTE)hIl2Cpp + KMNNKAJNKGF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNNKAJNKGF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KMNNKAJNKGF CAALCKKHMFE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KMNNKAJNKGF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMNNKAJNKGF_CAALCKKHMFE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
