#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OHJKMPBJDBN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JBGPKLGHEHI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JBGPKLGHEHI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A8890)
#define JBGPKLGHEHI_DMGABPKHNCO_1_OFFSET UNITYSDK_OFFSET(0x174864D0)
#define JBGPKLGHEHI_DMGABPKHNCO_OFFSET UNITYSDK_OFFSET(0x17486460)
#define JBGPKLGHEHI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JBGPKLGHEHI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JBGPKLGHEHI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A88D0)
#define JBGPKLGHEHI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A88E0)
#define JBGPKLGHEHI___INIT_OFFSET UNITYSDK_OFFSET(0x7A8870)

inline static constexpr unsigned int JBGPKLGHEHI_TypeDefinitionIndex = 15255;

struct alignas(8) JBGPKLGHEHI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGPKLGHEHI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBGPKLGHEHI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JBGPKLGHEHI DMGABPKHNCO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JBGPKLGHEHI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBGPKLGHEHI_DMGABPKHNCO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::JBGPKLGHEHI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JBGPKLGHEHI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBGPKLGHEHI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OHJKMPBJDBN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OHJKMPBJDBN&, ::System::Int32&))((::PBYTE)hIl2Cpp + JBGPKLGHEHI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGPKLGHEHI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JBGPKLGHEHI DMGABPKHNCO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JBGPKLGHEHI EIFONLCJOPG)
	{
		return ((::JBGPKLGHEHI(*)(::FlatBuffers::ByteBuffer*, ::JBGPKLGHEHI))((::PBYTE)hIl2Cpp + JBGPKLGHEHI_DMGABPKHNCO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OHJKMPBJDBN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OHJKMPBJDBN&))((::PBYTE)hIl2Cpp + JBGPKLGHEHI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGPKLGHEHI_PPOMNIFACOL_OFFSET))(this);
	}
};
