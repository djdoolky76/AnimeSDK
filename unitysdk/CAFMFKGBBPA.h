#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DANOLKBOMEP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CAFMFKGBBPA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CAFMFKGBBPA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F4F70)
#define CAFMFKGBBPA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CAFMFKGBBPA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CAFMFKGBBPA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F4F60)
#define CAFMFKGBBPA_NCMIPLJGNBK_1_OFFSET UNITYSDK_OFFSET(0x1A173930)
#define CAFMFKGBBPA_NCMIPLJGNBK_OFFSET UNITYSDK_OFFSET(0x1A1738C0)
#define CAFMFKGBBPA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F4FB0)
#define CAFMFKGBBPA___INIT_OFFSET UNITYSDK_OFFSET(0x7F4F40)

inline static constexpr unsigned int CAFMFKGBBPA_TypeDefinitionIndex = 15804;

struct alignas(8) CAFMFKGBBPA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFMFKGBBPA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAFMFKGBBPA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DANOLKBOMEP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DANOLKBOMEP&))((::PBYTE)hIl2Cpp + CAFMFKGBBPA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFMFKGBBPA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DANOLKBOMEP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DANOLKBOMEP&, ::System::Int32&))((::PBYTE)hIl2Cpp + CAFMFKGBBPA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::CAFMFKGBBPA NCMIPLJGNBK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CAFMFKGBBPA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAFMFKGBBPA_NCMIPLJGNBK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::CAFMFKGBBPA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CAFMFKGBBPA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAFMFKGBBPA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFMFKGBBPA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CAFMFKGBBPA NCMIPLJGNBK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CAFMFKGBBPA EIFONLCJOPG)
	{
		return ((::CAFMFKGBBPA(*)(::FlatBuffers::ByteBuffer*, ::CAFMFKGBBPA))((::PBYTE)hIl2Cpp + CAFMFKGBBPA_NCMIPLJGNBK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
