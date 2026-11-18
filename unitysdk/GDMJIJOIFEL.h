#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BJHIPENJCOK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDMJIJOIFEL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GDMJIJOIFEL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x78ACA0)
#define GDMJIJOIFEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GDMJIJOIFEL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GDMJIJOIFEL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x78AC90)
#define GDMJIJOIFEL_PMEPOKNIIHJ_1_OFFSET UNITYSDK_OFFSET(0x166442D0)
#define GDMJIJOIFEL_PMEPOKNIIHJ_OFFSET UNITYSDK_OFFSET(0x16644260)
#define GDMJIJOIFEL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x78AC80)
#define GDMJIJOIFEL___INIT_OFFSET UNITYSDK_OFFSET(0x78AC60)

inline static constexpr unsigned int GDMJIJOIFEL_TypeDefinitionIndex = 10646;

struct alignas(8) GDMJIJOIFEL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMJIJOIFEL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDMJIJOIFEL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMJIJOIFEL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GDMJIJOIFEL PMEPOKNIIHJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDMJIJOIFEL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDMJIJOIFEL_PMEPOKNIIHJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BJHIPENJCOK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BJHIPENJCOK&))((::PBYTE)hIl2Cpp + GDMJIJOIFEL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMJIJOIFEL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GDMJIJOIFEL PMEPOKNIIHJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GDMJIJOIFEL EIFONLCJOPG)
	{
		return ((::GDMJIJOIFEL(*)(::FlatBuffers::ByteBuffer*, ::GDMJIJOIFEL))((::PBYTE)hIl2Cpp + GDMJIJOIFEL_PMEPOKNIIHJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BJHIPENJCOK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BJHIPENJCOK&, ::System::Int32&))((::PBYTE)hIl2Cpp + GDMJIJOIFEL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::GDMJIJOIFEL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDMJIJOIFEL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDMJIJOIFEL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
