#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DJBKFNIIOOD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PCFIJMCALOJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PCFIJMCALOJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C4DD0)
#define PCFIJMCALOJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PCFIJMCALOJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PCFIJMCALOJ_JPMKCEENDBM_1_OFFSET UNITYSDK_OFFSET(0x17FE6A30)
#define PCFIJMCALOJ_JPMKCEENDBM_OFFSET UNITYSDK_OFFSET(0x17FE69C0)
#define PCFIJMCALOJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C4DB0)
#define PCFIJMCALOJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C4DC0)
#define PCFIJMCALOJ___INIT_OFFSET UNITYSDK_OFFSET(0x7C4D90)

inline static constexpr unsigned int PCFIJMCALOJ_TypeDefinitionIndex = 10200;

struct alignas(8) PCFIJMCALOJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFIJMCALOJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PCFIJMCALOJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PCFIJMCALOJ JPMKCEENDBM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PCFIJMCALOJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PCFIJMCALOJ_JPMKCEENDBM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::PCFIJMCALOJ JPMKCEENDBM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PCFIJMCALOJ EIFONLCJOPG)
	{
		return ((::PCFIJMCALOJ(*)(::FlatBuffers::ByteBuffer*, ::PCFIJMCALOJ))((::PBYTE)hIl2Cpp + PCFIJMCALOJ_JPMKCEENDBM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DJBKFNIIOOD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DJBKFNIIOOD&, ::System::Int32&))((::PBYTE)hIl2Cpp + PCFIJMCALOJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFIJMCALOJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DJBKFNIIOOD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DJBKFNIIOOD&))((::PBYTE)hIl2Cpp + PCFIJMCALOJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFIJMCALOJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::PCFIJMCALOJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PCFIJMCALOJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PCFIJMCALOJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
