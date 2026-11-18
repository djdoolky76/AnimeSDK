#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PDOBNAILOFE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KFINNGCBOHI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KFINNGCBOHI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A8E00)
#define KFINNGCBOHI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KFINNGCBOHI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KFINNGCBOHI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A8E50)
#define KFINNGCBOHI_PAGKFONDMAI_1_OFFSET UNITYSDK_OFFSET(0x17495B00)
#define KFINNGCBOHI_PAGKFONDMAI_OFFSET UNITYSDK_OFFSET(0x17495A60)
#define KFINNGCBOHI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A8E40)
#define KFINNGCBOHI___INIT_OFFSET UNITYSDK_OFFSET(0x7A8DE0)

inline static constexpr unsigned int KFINNGCBOHI_TypeDefinitionIndex = 9358;

struct alignas(8) KFINNGCBOHI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFINNGCBOHI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFINNGCBOHI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KFINNGCBOHI PAGKFONDMAI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KFINNGCBOHI EIFONLCJOPG)
	{
		return ((::KFINNGCBOHI(*)(::FlatBuffers::ByteBuffer*, ::KFINNGCBOHI))((::PBYTE)hIl2Cpp + KFINNGCBOHI_PAGKFONDMAI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::KFINNGCBOHI PAGKFONDMAI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KFINNGCBOHI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFINNGCBOHI_PAGKFONDMAI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFINNGCBOHI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::KFINNGCBOHI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KFINNGCBOHI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFINNGCBOHI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFINNGCBOHI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PDOBNAILOFE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PDOBNAILOFE&, ::System::Int32&))((::PBYTE)hIl2Cpp + KFINNGCBOHI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PDOBNAILOFE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PDOBNAILOFE&))((::PBYTE)hIl2Cpp + KFINNGCBOHI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
