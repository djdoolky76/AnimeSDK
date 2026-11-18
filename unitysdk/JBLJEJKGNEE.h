#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AHDJKNIMHFC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JBLJEJKGNEE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JBLJEJKGNEE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7BF070)
#define JBLJEJKGNEE_CELFKCPJBGI_1_OFFSET UNITYSDK_OFFSET(0x17C23350)
#define JBLJEJKGNEE_CELFKCPJBGI_OFFSET UNITYSDK_OFFSET(0x17C232E0)
#define JBLJEJKGNEE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JBLJEJKGNEE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JBLJEJKGNEE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7BF060)
#define JBLJEJKGNEE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7BF050)
#define JBLJEJKGNEE___INIT_OFFSET UNITYSDK_OFFSET(0x7BF030)

inline static constexpr unsigned int JBLJEJKGNEE_TypeDefinitionIndex = 14001;

struct alignas(8) JBLJEJKGNEE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBLJEJKGNEE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBLJEJKGNEE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JBLJEJKGNEE CELFKCPJBGI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JBLJEJKGNEE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBLJEJKGNEE_CELFKCPJBGI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBLJEJKGNEE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AHDJKNIMHFC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AHDJKNIMHFC&))((::PBYTE)hIl2Cpp + JBLJEJKGNEE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBLJEJKGNEE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AHDJKNIMHFC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AHDJKNIMHFC&, ::System::Int32&))((::PBYTE)hIl2Cpp + JBLJEJKGNEE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::JBLJEJKGNEE CELFKCPJBGI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JBLJEJKGNEE EIFONLCJOPG)
	{
		return ((::JBLJEJKGNEE(*)(::FlatBuffers::ByteBuffer*, ::JBLJEJKGNEE))((::PBYTE)hIl2Cpp + JBLJEJKGNEE_CELFKCPJBGI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::JBLJEJKGNEE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JBLJEJKGNEE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBLJEJKGNEE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
