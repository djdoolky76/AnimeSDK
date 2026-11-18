#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JGGIBGKKFHH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONHHGLGPEPH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ONHHGLGPEPH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E6F90)
#define ONHHGLGPEPH_DOELNAKLHCP_1_OFFSET UNITYSDK_OFFSET(0x195CA210)
#define ONHHGLGPEPH_DOELNAKLHCP_OFFSET UNITYSDK_OFFSET(0x195CA110)
#define ONHHGLGPEPH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ONHHGLGPEPH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ONHHGLGPEPH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E6F80)
#define ONHHGLGPEPH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E6FD0)
#define ONHHGLGPEPH___INIT_OFFSET UNITYSDK_OFFSET(0x7E6F60)

inline static constexpr unsigned int ONHHGLGPEPH_TypeDefinitionIndex = 9623;

struct alignas(8) ONHHGLGPEPH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHHGLGPEPH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONHHGLGPEPH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JGGIBGKKFHH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JGGIBGKKFHH&, ::System::Int32&))((::PBYTE)hIl2Cpp + ONHHGLGPEPH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::ONHHGLGPEPH DOELNAKLHCP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ONHHGLGPEPH EIFONLCJOPG)
	{
		return ((::ONHHGLGPEPH(*)(::FlatBuffers::ByteBuffer*, ::ONHHGLGPEPH))((::PBYTE)hIl2Cpp + ONHHGLGPEPH_DOELNAKLHCP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::ONHHGLGPEPH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONHHGLGPEPH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONHHGLGPEPH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHHGLGPEPH_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JGGIBGKKFHH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JGGIBGKKFHH&))((::PBYTE)hIl2Cpp + ONHHGLGPEPH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ONHHGLGPEPH DOELNAKLHCP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONHHGLGPEPH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONHHGLGPEPH_DOELNAKLHCP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHHGLGPEPH_PPOMNIFACOL_OFFSET))(this);
	}
};
