#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JCKKGPBNJII.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JMCCPPIMICM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JMCCPPIMICM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x812C60)
#define JMCCPPIMICM_ECPAIABBMMI_1_OFFSET UNITYSDK_OFFSET(0x1B7DD960)
#define JMCCPPIMICM_ECPAIABBMMI_OFFSET UNITYSDK_OFFSET(0x1B7DD8F0)
#define JMCCPPIMICM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JMCCPPIMICM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JMCCPPIMICM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x812C40)
#define JMCCPPIMICM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x812C50)
#define JMCCPPIMICM___INIT_OFFSET UNITYSDK_OFFSET(0x812C20)

inline static constexpr unsigned int JMCCPPIMICM_TypeDefinitionIndex = 14298;

struct alignas(8) JMCCPPIMICM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMCCPPIMICM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMCCPPIMICM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JMCCPPIMICM ECPAIABBMMI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JMCCPPIMICM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMCCPPIMICM_ECPAIABBMMI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JCKKGPBNJII& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JCKKGPBNJII&, ::System::Int32&))((::PBYTE)hIl2Cpp + JMCCPPIMICM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMCCPPIMICM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JCKKGPBNJII& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JCKKGPBNJII&))((::PBYTE)hIl2Cpp + JMCCPPIMICM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JMCCPPIMICM ECPAIABBMMI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JMCCPPIMICM EIFONLCJOPG)
	{
		return ((::JMCCPPIMICM(*)(::FlatBuffers::ByteBuffer*, ::JMCCPPIMICM))((::PBYTE)hIl2Cpp + JMCCPPIMICM_ECPAIABBMMI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMCCPPIMICM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::JMCCPPIMICM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JMCCPPIMICM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMCCPPIMICM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
