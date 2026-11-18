#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ENAPKCHCMEL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ODBFDBEDODM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ODBFDBEDODM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x803080)
#define ODBFDBEDODM_EHGPIBCPGNO_1_OFFSET UNITYSDK_OFFSET(0x1AB27220)
#define ODBFDBEDODM_EHGPIBCPGNO_OFFSET UNITYSDK_OFFSET(0x1AB271C0)
#define ODBFDBEDODM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ODBFDBEDODM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ODBFDBEDODM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8030C0)
#define ODBFDBEDODM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x803070)
#define ODBFDBEDODM___INIT_OFFSET UNITYSDK_OFFSET(0x803050)

inline static constexpr unsigned int ODBFDBEDODM_TypeDefinitionIndex = 9499;

struct alignas(8) ODBFDBEDODM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBFDBEDODM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODBFDBEDODM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBFDBEDODM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::ODBFDBEDODM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODBFDBEDODM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODBFDBEDODM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ODBFDBEDODM EHGPIBCPGNO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ODBFDBEDODM EIFONLCJOPG)
	{
		return ((::ODBFDBEDODM(*)(::FlatBuffers::ByteBuffer*, ::ODBFDBEDODM))((::PBYTE)hIl2Cpp + ODBFDBEDODM_EHGPIBCPGNO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::ODBFDBEDODM EHGPIBCPGNO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODBFDBEDODM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODBFDBEDODM_EHGPIBCPGNO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ENAPKCHCMEL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ENAPKCHCMEL&))((::PBYTE)hIl2Cpp + ODBFDBEDODM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBFDBEDODM_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ENAPKCHCMEL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ENAPKCHCMEL&, ::System::Int32&))((::PBYTE)hIl2Cpp + ODBFDBEDODM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
