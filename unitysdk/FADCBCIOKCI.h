#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MLLEMLENJAO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FADCBCIOKCI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FADCBCIOKCI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B2AA0)
#define FADCBCIOKCI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FADCBCIOKCI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FADCBCIOKCI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B2A80)
#define FADCBCIOKCI_NPIAFMIMEEE_1_OFFSET UNITYSDK_OFFSET(0x17AACE90)
#define FADCBCIOKCI_NPIAFMIMEEE_OFFSET UNITYSDK_OFFSET(0x17AACDF0)
#define FADCBCIOKCI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B2A90)
#define FADCBCIOKCI___INIT_OFFSET UNITYSDK_OFFSET(0x7B2A60)

inline static constexpr unsigned int FADCBCIOKCI_TypeDefinitionIndex = 15057;

struct alignas(8) FADCBCIOKCI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FADCBCIOKCI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FADCBCIOKCI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FADCBCIOKCI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MLLEMLENJAO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MLLEMLENJAO&, ::System::Int32&))((::PBYTE)hIl2Cpp + FADCBCIOKCI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::FADCBCIOKCI NPIAFMIMEEE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FADCBCIOKCI EIFONLCJOPG)
	{
		return ((::FADCBCIOKCI(*)(::FlatBuffers::ByteBuffer*, ::FADCBCIOKCI))((::PBYTE)hIl2Cpp + FADCBCIOKCI_NPIAFMIMEEE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FADCBCIOKCI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::FADCBCIOKCI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FADCBCIOKCI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FADCBCIOKCI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MLLEMLENJAO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MLLEMLENJAO&))((::PBYTE)hIl2Cpp + FADCBCIOKCI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FADCBCIOKCI NPIAFMIMEEE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FADCBCIOKCI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FADCBCIOKCI_NPIAFMIMEEE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
