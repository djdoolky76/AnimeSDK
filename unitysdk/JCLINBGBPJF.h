#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MLJFMFEFCOC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JCLINBGBPJF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JCLINBGBPJF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FD700)
#define JCLINBGBPJF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JCLINBGBPJF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JCLINBGBPJF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FD6F0)
#define JCLINBGBPJF_NIHBAHIPHPO_1_OFFSET UNITYSDK_OFFSET(0x1A5E8F90)
#define JCLINBGBPJF_NIHBAHIPHPO_OFFSET UNITYSDK_OFFSET(0x1A5E8F20)
#define JCLINBGBPJF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FD6E0)
#define JCLINBGBPJF___INIT_OFFSET UNITYSDK_OFFSET(0x7FD6C0)

inline static constexpr unsigned int JCLINBGBPJF_TypeDefinitionIndex = 12377;

struct alignas(8) JCLINBGBPJF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLINBGBPJF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCLINBGBPJF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLINBGBPJF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MLJFMFEFCOC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MLJFMFEFCOC&, ::System::Int32&))((::PBYTE)hIl2Cpp + JCLINBGBPJF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLINBGBPJF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::JCLINBGBPJF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCLINBGBPJF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCLINBGBPJF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MLJFMFEFCOC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MLJFMFEFCOC&))((::PBYTE)hIl2Cpp + JCLINBGBPJF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JCLINBGBPJF NIHBAHIPHPO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCLINBGBPJF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCLINBGBPJF_NIHBAHIPHPO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::JCLINBGBPJF NIHBAHIPHPO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JCLINBGBPJF EIFONLCJOPG)
	{
		return ((::JCLINBGBPJF(*)(::FlatBuffers::ByteBuffer*, ::JCLINBGBPJF))((::PBYTE)hIl2Cpp + JCLINBGBPJF_NIHBAHIPHPO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
