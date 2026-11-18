#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PINADEBBEKC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MACLNMHAAHD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MACLNMHAAHD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C3E20)
#define MACLNMHAAHD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MACLNMHAAHD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MACLNMHAAHD_KCALHIGELMM_1_OFFSET UNITYSDK_OFFSET(0x17FC0360)
#define MACLNMHAAHD_KCALHIGELMM_OFFSET UNITYSDK_OFFSET(0x17FC0260)
#define MACLNMHAAHD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C3E10)
#define MACLNMHAAHD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C3E00)
#define MACLNMHAAHD___INIT_OFFSET UNITYSDK_OFFSET(0x7C3DE0)

inline static constexpr unsigned int MACLNMHAAHD_TypeDefinitionIndex = 12460;

struct alignas(8) MACLNMHAAHD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MACLNMHAAHD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MACLNMHAAHD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MACLNMHAAHD KCALHIGELMM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MACLNMHAAHD EIFONLCJOPG)
	{
		return ((::MACLNMHAAHD(*)(::FlatBuffers::ByteBuffer*, ::MACLNMHAAHD))((::PBYTE)hIl2Cpp + MACLNMHAAHD_KCALHIGELMM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MACLNMHAAHD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MACLNMHAAHD KCALHIGELMM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MACLNMHAAHD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MACLNMHAAHD_KCALHIGELMM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PINADEBBEKC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PINADEBBEKC&))((::PBYTE)hIl2Cpp + MACLNMHAAHD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PINADEBBEKC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PINADEBBEKC&, ::System::Int32&))((::PBYTE)hIl2Cpp + MACLNMHAAHD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MACLNMHAAHD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MACLNMHAAHD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MACLNMHAAHD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MACLNMHAAHD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
