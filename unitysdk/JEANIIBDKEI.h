#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FMABALPLECJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JEANIIBDKEI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JEANIIBDKEI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DF780)
#define JEANIIBDKEI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JEANIIBDKEI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JEANIIBDKEI_HLKKJLGPGCA_1_OFFSET UNITYSDK_OFFSET(0x19358930)
#define JEANIIBDKEI_HLKKJLGPGCA_OFFSET UNITYSDK_OFFSET(0x193588C0)
#define JEANIIBDKEI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DF770)
#define JEANIIBDKEI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DF7C0)
#define JEANIIBDKEI___INIT_OFFSET UNITYSDK_OFFSET(0x7DF750)

inline static constexpr unsigned int JEANIIBDKEI_TypeDefinitionIndex = 11726;

struct alignas(8) JEANIIBDKEI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEANIIBDKEI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEANIIBDKEI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JEANIIBDKEI HLKKJLGPGCA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEANIIBDKEI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEANIIBDKEI_HLKKJLGPGCA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FMABALPLECJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FMABALPLECJ&))((::PBYTE)hIl2Cpp + JEANIIBDKEI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FMABALPLECJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FMABALPLECJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + JEANIIBDKEI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::JEANIIBDKEI HLKKJLGPGCA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JEANIIBDKEI EIFONLCJOPG)
	{
		return ((::JEANIIBDKEI(*)(::FlatBuffers::ByteBuffer*, ::JEANIIBDKEI))((::PBYTE)hIl2Cpp + JEANIIBDKEI_HLKKJLGPGCA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::JEANIIBDKEI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEANIIBDKEI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEANIIBDKEI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEANIIBDKEI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEANIIBDKEI_GHKKNCCLPAN_OFFSET))(this);
	}
};
