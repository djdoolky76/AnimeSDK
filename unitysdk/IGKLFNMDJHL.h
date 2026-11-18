#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LKCNNEIDHAF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IGKLFNMDJHL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IGKLFNMDJHL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x814A20)
#define IGKLFNMDJHL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IGKLFNMDJHL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IGKLFNMDJHL_GLOFJACHJGH_1_OFFSET UNITYSDK_OFFSET(0x1B88B550)
#define IGKLFNMDJHL_GLOFJACHJGH_OFFSET UNITYSDK_OFFSET(0x1B88B2B0)
#define IGKLFNMDJHL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x814A10)
#define IGKLFNMDJHL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x814A60)
#define IGKLFNMDJHL___INIT_OFFSET UNITYSDK_OFFSET(0x8149F0)

inline static constexpr unsigned int IGKLFNMDJHL_TypeDefinitionIndex = 13705;

struct alignas(8) IGKLFNMDJHL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKLFNMDJHL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGKLFNMDJHL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IGKLFNMDJHL GLOFJACHJGH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IGKLFNMDJHL EIFONLCJOPG)
	{
		return ((::IGKLFNMDJHL(*)(::FlatBuffers::ByteBuffer*, ::IGKLFNMDJHL))((::PBYTE)hIl2Cpp + IGKLFNMDJHL_GLOFJACHJGH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LKCNNEIDHAF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LKCNNEIDHAF&, ::System::Int32&))((::PBYTE)hIl2Cpp + IGKLFNMDJHL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::IGKLFNMDJHL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IGKLFNMDJHL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGKLFNMDJHL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LKCNNEIDHAF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LKCNNEIDHAF&))((::PBYTE)hIl2Cpp + IGKLFNMDJHL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IGKLFNMDJHL GLOFJACHJGH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IGKLFNMDJHL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGKLFNMDJHL_GLOFJACHJGH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKLFNMDJHL_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKLFNMDJHL_PPOMNIFACOL_OFFSET))(this);
	}
};
