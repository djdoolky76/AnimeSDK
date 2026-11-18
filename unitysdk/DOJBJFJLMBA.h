#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PBEHPIJCOPE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DOJBJFJLMBA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DOJBJFJLMBA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C1F90)
#define DOJBJFJLMBA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DOJBJFJLMBA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DOJBJFJLMBA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C1F70)
#define DOJBJFJLMBA_MLPALFFHOLP_1_OFFSET UNITYSDK_OFFSET(0x17F24A70)
#define DOJBJFJLMBA_MLPALFFHOLP_OFFSET UNITYSDK_OFFSET(0x17F24A00)
#define DOJBJFJLMBA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C1F80)
#define DOJBJFJLMBA___INIT_OFFSET UNITYSDK_OFFSET(0x7C1F50)

inline static constexpr unsigned int DOJBJFJLMBA_TypeDefinitionIndex = 16975;

struct alignas(8) DOJBJFJLMBA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJBJFJLMBA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOJBJFJLMBA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DOJBJFJLMBA MLPALFFHOLP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOJBJFJLMBA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOJBJFJLMBA_MLPALFFHOLP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PBEHPIJCOPE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PBEHPIJCOPE&, ::System::Int32&))((::PBYTE)hIl2Cpp + DOJBJFJLMBA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJBJFJLMBA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DOJBJFJLMBA MLPALFFHOLP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DOJBJFJLMBA EIFONLCJOPG)
	{
		return ((::DOJBJFJLMBA(*)(::FlatBuffers::ByteBuffer*, ::DOJBJFJLMBA))((::PBYTE)hIl2Cpp + DOJBJFJLMBA_MLPALFFHOLP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJBJFJLMBA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::DOJBJFJLMBA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOJBJFJLMBA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOJBJFJLMBA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PBEHPIJCOPE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PBEHPIJCOPE&))((::PBYTE)hIl2Cpp + DOJBJFJLMBA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
