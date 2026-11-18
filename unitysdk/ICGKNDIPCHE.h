#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NAAEMGLBFOA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ICGKNDIPCHE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ICGKNDIPCHE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F88C0)
#define ICGKNDIPCHE_FDFNBLPJPKL_1_OFFSET UNITYSDK_OFFSET(0x1A4F58B0)
#define ICGKNDIPCHE_FDFNBLPJPKL_OFFSET UNITYSDK_OFFSET(0x1A4F5840)
#define ICGKNDIPCHE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ICGKNDIPCHE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ICGKNDIPCHE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F8900)
#define ICGKNDIPCHE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F88B0)
#define ICGKNDIPCHE___INIT_OFFSET UNITYSDK_OFFSET(0x7F8890)

inline static constexpr unsigned int ICGKNDIPCHE_TypeDefinitionIndex = 11997;

struct alignas(8) ICGKNDIPCHE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGKNDIPCHE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICGKNDIPCHE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ICGKNDIPCHE FDFNBLPJPKL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ICGKNDIPCHE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICGKNDIPCHE_FDFNBLPJPKL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGKNDIPCHE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NAAEMGLBFOA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NAAEMGLBFOA&))((::PBYTE)hIl2Cpp + ICGKNDIPCHE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::ICGKNDIPCHE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ICGKNDIPCHE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICGKNDIPCHE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NAAEMGLBFOA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NAAEMGLBFOA&, ::System::Int32&))((::PBYTE)hIl2Cpp + ICGKNDIPCHE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGKNDIPCHE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ICGKNDIPCHE FDFNBLPJPKL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ICGKNDIPCHE EIFONLCJOPG)
	{
		return ((::ICGKNDIPCHE(*)(::FlatBuffers::ByteBuffer*, ::ICGKNDIPCHE))((::PBYTE)hIl2Cpp + ICGKNDIPCHE_FDFNBLPJPKL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
