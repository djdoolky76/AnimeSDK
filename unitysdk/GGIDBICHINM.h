#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BKDMJOAJFFP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GGIDBICHINM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GGIDBICHINM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F7FA0)
#define GGIDBICHINM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GGIDBICHINM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GGIDBICHINM_KMCJJPPNAAH_1_OFFSET UNITYSDK_OFFSET(0x1A4D8960)
#define GGIDBICHINM_KMCJJPPNAAH_OFFSET UNITYSDK_OFFSET(0x1A4D88F0)
#define GGIDBICHINM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F7F90)
#define GGIDBICHINM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F7FE0)
#define GGIDBICHINM___INIT_OFFSET UNITYSDK_OFFSET(0x7F7F70)

inline static constexpr unsigned int GGIDBICHINM_TypeDefinitionIndex = 16618;

struct alignas(8) GGIDBICHINM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIDBICHINM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGIDBICHINM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BKDMJOAJFFP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BKDMJOAJFFP&))((::PBYTE)hIl2Cpp + GGIDBICHINM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BKDMJOAJFFP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BKDMJOAJFFP&, ::System::Int32&))((::PBYTE)hIl2Cpp + GGIDBICHINM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::GGIDBICHINM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GGIDBICHINM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGIDBICHINM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GGIDBICHINM KMCJJPPNAAH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GGIDBICHINM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGIDBICHINM_KMCJJPPNAAH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIDBICHINM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GGIDBICHINM KMCJJPPNAAH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GGIDBICHINM EIFONLCJOPG)
	{
		return ((::GGIDBICHINM(*)(::FlatBuffers::ByteBuffer*, ::GGIDBICHINM))((::PBYTE)hIl2Cpp + GGIDBICHINM_KMCJJPPNAAH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIDBICHINM_PPOMNIFACOL_OFFSET))(this);
	}
};
