#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FGJOHGGGABB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CNABCNKKAFD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CNABCNKKAFD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B2100)
#define CNABCNKKAFD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CNABCNKKAFD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CNABCNKKAFD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B2150)
#define CNABCNKKAFD_MJNNELAJFKE_1_OFFSET UNITYSDK_OFFSET(0x17A908F0)
#define CNABCNKKAFD_MJNNELAJFKE_OFFSET UNITYSDK_OFFSET(0x17A90880)
#define CNABCNKKAFD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B2140)
#define CNABCNKKAFD___INIT_OFFSET UNITYSDK_OFFSET(0x7B20E0)

inline static constexpr unsigned int CNABCNKKAFD_TypeDefinitionIndex = 13783;

struct alignas(8) CNABCNKKAFD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNABCNKKAFD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNABCNKKAFD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CNABCNKKAFD MJNNELAJFKE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CNABCNKKAFD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNABCNKKAFD_MJNNELAJFKE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::CNABCNKKAFD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CNABCNKKAFD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNABCNKKAFD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNABCNKKAFD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FGJOHGGGABB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FGJOHGGGABB&, ::System::Int32&))((::PBYTE)hIl2Cpp + CNABCNKKAFD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::CNABCNKKAFD MJNNELAJFKE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CNABCNKKAFD EIFONLCJOPG)
	{
		return ((::CNABCNKKAFD(*)(::FlatBuffers::ByteBuffer*, ::CNABCNKKAFD))((::PBYTE)hIl2Cpp + CNABCNKKAFD_MJNNELAJFKE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNABCNKKAFD_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FGJOHGGGABB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FGJOHGGGABB&))((::PBYTE)hIl2Cpp + CNABCNKKAFD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
