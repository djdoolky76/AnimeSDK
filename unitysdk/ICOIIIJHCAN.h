#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GLMOEGEIJMG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ICOIIIJHCAN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ICOIIIJHCAN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x812390)
#define ICOIIIJHCAN_EDEJMKJKOCL_1_OFFSET UNITYSDK_OFFSET(0x1B7CA5D0)
#define ICOIIIJHCAN_EDEJMKJKOCL_OFFSET UNITYSDK_OFFSET(0x1B7CA370)
#define ICOIIIJHCAN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ICOIIIJHCAN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ICOIIIJHCAN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8123D0)
#define ICOIIIJHCAN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8123E0)
#define ICOIIIJHCAN___INIT_OFFSET UNITYSDK_OFFSET(0x812370)

inline static constexpr unsigned int ICOIIIJHCAN_TypeDefinitionIndex = 13766;

struct alignas(8) ICOIIIJHCAN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOIIIJHCAN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICOIIIJHCAN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GLMOEGEIJMG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GLMOEGEIJMG&))((::PBYTE)hIl2Cpp + ICOIIIJHCAN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ICOIIIJHCAN EDEJMKJKOCL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ICOIIIJHCAN EIFONLCJOPG)
	{
		return ((::ICOIIIJHCAN(*)(::FlatBuffers::ByteBuffer*, ::ICOIIIJHCAN))((::PBYTE)hIl2Cpp + ICOIIIJHCAN_EDEJMKJKOCL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::ICOIIIJHCAN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ICOIIIJHCAN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICOIIIJHCAN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GLMOEGEIJMG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GLMOEGEIJMG&, ::System::Int32&))((::PBYTE)hIl2Cpp + ICOIIIJHCAN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOIIIJHCAN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ICOIIIJHCAN EDEJMKJKOCL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ICOIIIJHCAN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICOIIIJHCAN_EDEJMKJKOCL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOIIIJHCAN_PPOMNIFACOL_OFFSET))(this);
	}
};
