#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GMMFLMHNJPF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONHHCNCILMO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ONHHCNCILMO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81ADA0)
#define ONHHCNCILMO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ONHHCNCILMO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ONHHCNCILMO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81ADE0)
#define ONHHCNCILMO_MLMOOFLEJNI_1_OFFSET UNITYSDK_OFFSET(0x1BAB8A20)
#define ONHHCNCILMO_MLMOOFLEJNI_OFFSET UNITYSDK_OFFSET(0x1BAB89B0)
#define ONHHCNCILMO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81AD90)
#define ONHHCNCILMO___INIT_OFFSET UNITYSDK_OFFSET(0x81AD70)

inline static constexpr unsigned int ONHHCNCILMO_TypeDefinitionIndex = 10785;

struct alignas(8) ONHHCNCILMO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHHCNCILMO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONHHCNCILMO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ONHHCNCILMO MLMOOFLEJNI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONHHCNCILMO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONHHCNCILMO_MLMOOFLEJNI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHHCNCILMO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHHCNCILMO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ONHHCNCILMO MLMOOFLEJNI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ONHHCNCILMO EIFONLCJOPG)
	{
		return ((::ONHHCNCILMO(*)(::FlatBuffers::ByteBuffer*, ::ONHHCNCILMO))((::PBYTE)hIl2Cpp + ONHHCNCILMO_MLMOOFLEJNI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::ONHHCNCILMO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONHHCNCILMO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONHHCNCILMO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GMMFLMHNJPF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GMMFLMHNJPF&, ::System::Int32&))((::PBYTE)hIl2Cpp + ONHHCNCILMO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GMMFLMHNJPF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GMMFLMHNJPF&))((::PBYTE)hIl2Cpp + ONHHCNCILMO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
