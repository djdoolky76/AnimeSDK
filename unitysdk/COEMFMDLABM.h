#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LGPOFPAJFID.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define COEMFMDLABM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define COEMFMDLABM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AD4F0)
#define COEMFMDLABM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define COEMFMDLABM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define COEMFMDLABM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7AD530)
#define COEMFMDLABM_NOKIBPEFKHN_1_OFFSET UNITYSDK_OFFSET(0x17775DB0)
#define COEMFMDLABM_NOKIBPEFKHN_OFFSET UNITYSDK_OFFSET(0x17775D40)
#define COEMFMDLABM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AD4E0)
#define COEMFMDLABM___INIT_OFFSET UNITYSDK_OFFSET(0x7AD4C0)

inline static constexpr unsigned int COEMFMDLABM_TypeDefinitionIndex = 12966;

struct alignas(8) COEMFMDLABM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + COEMFMDLABM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COEMFMDLABM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::COEMFMDLABM NOKIBPEFKHN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::COEMFMDLABM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COEMFMDLABM_NOKIBPEFKHN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COEMFMDLABM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::COEMFMDLABM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::COEMFMDLABM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COEMFMDLABM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LGPOFPAJFID& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LGPOFPAJFID&))((::PBYTE)hIl2Cpp + COEMFMDLABM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LGPOFPAJFID& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LGPOFPAJFID&, ::System::Int32&))((::PBYTE)hIl2Cpp + COEMFMDLABM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COEMFMDLABM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::COEMFMDLABM NOKIBPEFKHN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::COEMFMDLABM EIFONLCJOPG)
	{
		return ((::COEMFMDLABM(*)(::FlatBuffers::ByteBuffer*, ::COEMFMDLABM))((::PBYTE)hIl2Cpp + COEMFMDLABM_NOKIBPEFKHN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
