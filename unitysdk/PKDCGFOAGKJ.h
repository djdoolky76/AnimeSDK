#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BJLCLJNDDLF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PKDCGFOAGKJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PKDCGFOAGKJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x806580)
#define PKDCGFOAGKJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PKDCGFOAGKJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PKDCGFOAGKJ_JMKAFMJEOCO_1_OFFSET UNITYSDK_OFFSET(0x1AD9AF10)
#define PKDCGFOAGKJ_JMKAFMJEOCO_OFFSET UNITYSDK_OFFSET(0x1AD9AE10)
#define PKDCGFOAGKJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x806560)
#define PKDCGFOAGKJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x806570)
#define PKDCGFOAGKJ___INIT_OFFSET UNITYSDK_OFFSET(0x806540)

inline static constexpr unsigned int PKDCGFOAGKJ_TypeDefinitionIndex = 14421;

struct alignas(8) PKDCGFOAGKJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKDCGFOAGKJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKDCGFOAGKJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BJLCLJNDDLF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BJLCLJNDDLF&, ::System::Int32&))((::PBYTE)hIl2Cpp + PKDCGFOAGKJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::PKDCGFOAGKJ JMKAFMJEOCO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PKDCGFOAGKJ EIFONLCJOPG)
	{
		return ((::PKDCGFOAGKJ(*)(::FlatBuffers::ByteBuffer*, ::PKDCGFOAGKJ))((::PBYTE)hIl2Cpp + PKDCGFOAGKJ_JMKAFMJEOCO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BJLCLJNDDLF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BJLCLJNDDLF&))((::PBYTE)hIl2Cpp + PKDCGFOAGKJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKDCGFOAGKJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PKDCGFOAGKJ JMKAFMJEOCO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PKDCGFOAGKJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKDCGFOAGKJ_JMKAFMJEOCO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKDCGFOAGKJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::PKDCGFOAGKJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PKDCGFOAGKJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKDCGFOAGKJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
