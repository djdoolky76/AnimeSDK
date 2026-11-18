#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HAGEIKJBNIG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DFOEALFNHIC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DFOEALFNHIC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x807620)
#define DFOEALFNHIC_BMLHOKBABNP_1_OFFSET UNITYSDK_OFFSET(0x1ADC5730)
#define DFOEALFNHIC_BMLHOKBABNP_OFFSET UNITYSDK_OFFSET(0x1ADC56C0)
#define DFOEALFNHIC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DFOEALFNHIC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DFOEALFNHIC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x807600)
#define DFOEALFNHIC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x807610)
#define DFOEALFNHIC___INIT_OFFSET UNITYSDK_OFFSET(0x8075E0)

inline static constexpr unsigned int DFOEALFNHIC_TypeDefinitionIndex = 15395;

struct alignas(8) DFOEALFNHIC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOEALFNHIC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFOEALFNHIC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DFOEALFNHIC BMLHOKBABNP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFOEALFNHIC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFOEALFNHIC_BMLHOKBABNP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HAGEIKJBNIG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HAGEIKJBNIG&, ::System::Int32&))((::PBYTE)hIl2Cpp + DFOEALFNHIC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOEALFNHIC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::DFOEALFNHIC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFOEALFNHIC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFOEALFNHIC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HAGEIKJBNIG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HAGEIKJBNIG&))((::PBYTE)hIl2Cpp + DFOEALFNHIC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOEALFNHIC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DFOEALFNHIC BMLHOKBABNP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DFOEALFNHIC EIFONLCJOPG)
	{
		return ((::DFOEALFNHIC(*)(::FlatBuffers::ByteBuffer*, ::DFOEALFNHIC))((::PBYTE)hIl2Cpp + DFOEALFNHIC_BMLHOKBABNP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
