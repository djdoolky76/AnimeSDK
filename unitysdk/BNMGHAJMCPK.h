#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CJEMBADFOEG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BNMGHAJMCPK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BNMGHAJMCPK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F98F0)
#define BNMGHAJMCPK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BNMGHAJMCPK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BNMGHAJMCPK_LDENABKNDIF_1_OFFSET UNITYSDK_OFFSET(0x1A5386C0)
#define BNMGHAJMCPK_LDENABKNDIF_OFFSET UNITYSDK_OFFSET(0x1A5385C0)
#define BNMGHAJMCPK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F98D0)
#define BNMGHAJMCPK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F98E0)
#define BNMGHAJMCPK___INIT_OFFSET UNITYSDK_OFFSET(0x7F98B0)

inline static constexpr unsigned int BNMGHAJMCPK_TypeDefinitionIndex = 17021;

struct alignas(8) BNMGHAJMCPK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNMGHAJMCPK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNMGHAJMCPK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CJEMBADFOEG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CJEMBADFOEG&, ::System::Int32&))((::PBYTE)hIl2Cpp + BNMGHAJMCPK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::BNMGHAJMCPK LDENABKNDIF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BNMGHAJMCPK EIFONLCJOPG)
	{
		return ((::BNMGHAJMCPK(*)(::FlatBuffers::ByteBuffer*, ::BNMGHAJMCPK))((::PBYTE)hIl2Cpp + BNMGHAJMCPK_LDENABKNDIF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CJEMBADFOEG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CJEMBADFOEG&))((::PBYTE)hIl2Cpp + BNMGHAJMCPK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNMGHAJMCPK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNMGHAJMCPK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::BNMGHAJMCPK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BNMGHAJMCPK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNMGHAJMCPK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BNMGHAJMCPK LDENABKNDIF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BNMGHAJMCPK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNMGHAJMCPK_LDENABKNDIF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
