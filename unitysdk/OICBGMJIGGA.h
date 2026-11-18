#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JCMCNIKANHE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OICBGMJIGGA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OICBGMJIGGA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D83F0)
#define OICBGMJIGGA_GEBCLFLBEIC_1_OFFSET UNITYSDK_OFFSET(0x18E2FB20)
#define OICBGMJIGGA_GEBCLFLBEIC_OFFSET UNITYSDK_OFFSET(0x18E2FAB0)
#define OICBGMJIGGA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OICBGMJIGGA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OICBGMJIGGA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D83E0)
#define OICBGMJIGGA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D83D0)
#define OICBGMJIGGA___INIT_OFFSET UNITYSDK_OFFSET(0x7D83B0)

inline static constexpr unsigned int OICBGMJIGGA_TypeDefinitionIndex = 9326;

struct alignas(8) OICBGMJIGGA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OICBGMJIGGA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OICBGMJIGGA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OICBGMJIGGA GEBCLFLBEIC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OICBGMJIGGA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OICBGMJIGGA_GEBCLFLBEIC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::OICBGMJIGGA GEBCLFLBEIC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OICBGMJIGGA EIFONLCJOPG)
	{
		return ((::OICBGMJIGGA(*)(::FlatBuffers::ByteBuffer*, ::OICBGMJIGGA))((::PBYTE)hIl2Cpp + OICBGMJIGGA_GEBCLFLBEIC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JCMCNIKANHE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JCMCNIKANHE&))((::PBYTE)hIl2Cpp + OICBGMJIGGA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OICBGMJIGGA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JCMCNIKANHE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JCMCNIKANHE&, ::System::Int32&))((::PBYTE)hIl2Cpp + OICBGMJIGGA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::OICBGMJIGGA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OICBGMJIGGA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OICBGMJIGGA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OICBGMJIGGA_GHKKNCCLPAN_OFFSET))(this);
	}
};
