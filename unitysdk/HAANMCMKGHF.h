#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KBACPMBPKEB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HAANMCMKGHF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HAANMCMKGHF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x809E90)
#define HAANMCMKGHF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HAANMCMKGHF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HAANMCMKGHF_KNFKPNKFGPA_1_OFFSET UNITYSDK_OFFSET(0x1B11CD60)
#define HAANMCMKGHF_KNFKPNKFGPA_OFFSET UNITYSDK_OFFSET(0x1B11CCF0)
#define HAANMCMKGHF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x809ED0)
#define HAANMCMKGHF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x809E80)
#define HAANMCMKGHF___INIT_OFFSET UNITYSDK_OFFSET(0x809E60)

inline static constexpr unsigned int HAANMCMKGHF_TypeDefinitionIndex = 16798;

struct alignas(8) HAANMCMKGHF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAANMCMKGHF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAANMCMKGHF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAANMCMKGHF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::HAANMCMKGHF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HAANMCMKGHF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAANMCMKGHF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KBACPMBPKEB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KBACPMBPKEB&, ::System::Int32&))((::PBYTE)hIl2Cpp + HAANMCMKGHF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KBACPMBPKEB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KBACPMBPKEB&))((::PBYTE)hIl2Cpp + HAANMCMKGHF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HAANMCMKGHF KNFKPNKFGPA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HAANMCMKGHF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAANMCMKGHF_KNFKPNKFGPA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAANMCMKGHF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HAANMCMKGHF KNFKPNKFGPA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HAANMCMKGHF EIFONLCJOPG)
	{
		return ((::HAANMCMKGHF(*)(::FlatBuffers::ByteBuffer*, ::HAANMCMKGHF))((::PBYTE)hIl2Cpp + HAANMCMKGHF_KNFKPNKFGPA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
