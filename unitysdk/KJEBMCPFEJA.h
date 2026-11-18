#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JBOGCDEGFKE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KJEBMCPFEJA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KJEBMCPFEJA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D6E70)
#define KJEBMCPFEJA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KJEBMCPFEJA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KJEBMCPFEJA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D6E60)
#define KJEBMCPFEJA_OJGHFKFHPDA_1_OFFSET UNITYSDK_OFFSET(0x18DE9530)
#define KJEBMCPFEJA_OJGHFKFHPDA_OFFSET UNITYSDK_OFFSET(0x18DE94D0)
#define KJEBMCPFEJA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D6E50)
#define KJEBMCPFEJA___INIT_OFFSET UNITYSDK_OFFSET(0x7D6E30)

inline static constexpr unsigned int KJEBMCPFEJA_TypeDefinitionIndex = 9913;

struct alignas(8) KJEBMCPFEJA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEBMCPFEJA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJEBMCPFEJA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEBMCPFEJA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JBOGCDEGFKE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JBOGCDEGFKE&, ::System::Int32&))((::PBYTE)hIl2Cpp + KJEBMCPFEJA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEBMCPFEJA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JBOGCDEGFKE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JBOGCDEGFKE&))((::PBYTE)hIl2Cpp + KJEBMCPFEJA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::KJEBMCPFEJA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KJEBMCPFEJA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJEBMCPFEJA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KJEBMCPFEJA OJGHFKFHPDA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KJEBMCPFEJA EIFONLCJOPG)
	{
		return ((::KJEBMCPFEJA(*)(::FlatBuffers::ByteBuffer*, ::KJEBMCPFEJA))((::PBYTE)hIl2Cpp + KJEBMCPFEJA_OJGHFKFHPDA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::KJEBMCPFEJA OJGHFKFHPDA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KJEBMCPFEJA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJEBMCPFEJA_OJGHFKFHPDA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
