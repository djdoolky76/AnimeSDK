#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IJCKGLPDMAG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CMLMDEILOHJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CMLMDEILOHJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7623A0)
#define CMLMDEILOHJ_DGAHHDJNKKK_1_OFFSET UNITYSDK_OFFSET(0x15744C30)
#define CMLMDEILOHJ_DGAHHDJNKKK_OFFSET UNITYSDK_OFFSET(0x15744930)
#define CMLMDEILOHJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CMLMDEILOHJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CMLMDEILOHJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7623E0)
#define CMLMDEILOHJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7623F0)
#define CMLMDEILOHJ___INIT_OFFSET UNITYSDK_OFFSET(0x762380)

inline static constexpr unsigned int CMLMDEILOHJ_TypeDefinitionIndex = 15746;

struct alignas(8) CMLMDEILOHJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLMDEILOHJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMLMDEILOHJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CMLMDEILOHJ DGAHHDJNKKK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CMLMDEILOHJ EIFONLCJOPG)
	{
		return ((::CMLMDEILOHJ(*)(::FlatBuffers::ByteBuffer*, ::CMLMDEILOHJ))((::PBYTE)hIl2Cpp + CMLMDEILOHJ_DGAHHDJNKKK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLMDEILOHJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::CMLMDEILOHJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMLMDEILOHJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMLMDEILOHJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IJCKGLPDMAG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IJCKGLPDMAG&, ::System::Int32&))((::PBYTE)hIl2Cpp + CMLMDEILOHJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLMDEILOHJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CMLMDEILOHJ DGAHHDJNKKK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMLMDEILOHJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMLMDEILOHJ_DGAHHDJNKKK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IJCKGLPDMAG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IJCKGLPDMAG&))((::PBYTE)hIl2Cpp + CMLMDEILOHJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
