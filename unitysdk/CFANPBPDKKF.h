#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NHHCKBPBKOP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CFANPBPDKKF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CFANPBPDKKF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x761F70)
#define CFANPBPDKKF_EADLNPMDIMF_1_OFFSET UNITYSDK_OFFSET(0x1573CEF0)
#define CFANPBPDKKF_EADLNPMDIMF_OFFSET UNITYSDK_OFFSET(0x1573CE80)
#define CFANPBPDKKF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CFANPBPDKKF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CFANPBPDKKF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x761F60)
#define CFANPBPDKKF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x761F50)
#define CFANPBPDKKF___INIT_OFFSET UNITYSDK_OFFSET(0x761F30)

inline static constexpr unsigned int CFANPBPDKKF_TypeDefinitionIndex = 11437;

struct alignas(8) CFANPBPDKKF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFANPBPDKKF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFANPBPDKKF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFANPBPDKKF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NHHCKBPBKOP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NHHCKBPBKOP&))((::PBYTE)hIl2Cpp + CFANPBPDKKF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NHHCKBPBKOP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NHHCKBPBKOP&, ::System::Int32&))((::PBYTE)hIl2Cpp + CFANPBPDKKF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::CFANPBPDKKF EADLNPMDIMF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CFANPBPDKKF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFANPBPDKKF_EADLNPMDIMF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFANPBPDKKF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::CFANPBPDKKF EADLNPMDIMF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CFANPBPDKKF EIFONLCJOPG)
	{
		return ((::CFANPBPDKKF(*)(::FlatBuffers::ByteBuffer*, ::CFANPBPDKKF))((::PBYTE)hIl2Cpp + CFANPBPDKKF_EADLNPMDIMF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::CFANPBPDKKF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CFANPBPDKKF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFANPBPDKKF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
