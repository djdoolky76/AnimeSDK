#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CLDDDPFBGLD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FEKLIDDJGIK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FEKLIDDJGIK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EAE80)
#define FEKLIDDJGIK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FEKLIDDJGIK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FEKLIDDJGIK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EAE70)
#define FEKLIDDJGIK_NHIBJBELBIP_1_OFFSET UNITYSDK_OFFSET(0x19AEF8F0)
#define FEKLIDDJGIK_NHIBJBELBIP_OFFSET UNITYSDK_OFFSET(0x19AEF850)
#define FEKLIDDJGIK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EAEC0)
#define FEKLIDDJGIK___INIT_OFFSET UNITYSDK_OFFSET(0x7EAE50)

inline static constexpr unsigned int FEKLIDDJGIK_TypeDefinitionIndex = 13715;

struct alignas(8) FEKLIDDJGIK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKLIDDJGIK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEKLIDDJGIK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CLDDDPFBGLD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CLDDDPFBGLD&, ::System::Int32&))((::PBYTE)hIl2Cpp + FEKLIDDJGIK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKLIDDJGIK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FEKLIDDJGIK NHIBJBELBIP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FEKLIDDJGIK EIFONLCJOPG)
	{
		return ((::FEKLIDDJGIK(*)(::FlatBuffers::ByteBuffer*, ::FEKLIDDJGIK))((::PBYTE)hIl2Cpp + FEKLIDDJGIK_NHIBJBELBIP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::FEKLIDDJGIK NHIBJBELBIP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FEKLIDDJGIK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEKLIDDJGIK_NHIBJBELBIP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::FEKLIDDJGIK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FEKLIDDJGIK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEKLIDDJGIK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CLDDDPFBGLD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CLDDDPFBGLD&))((::PBYTE)hIl2Cpp + FEKLIDDJGIK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKLIDDJGIK_PPOMNIFACOL_OFFSET))(this);
	}
};
