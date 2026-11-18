#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JCPLFKNEJDE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOKIHPKNMGG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MOKIHPKNMGG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D7D60)
#define MOKIHPKNMGG_DLGNEHHACMD_1_OFFSET UNITYSDK_OFFSET(0x18E12DB0)
#define MOKIHPKNMGG_DLGNEHHACMD_OFFSET UNITYSDK_OFFSET(0x18E12D50)
#define MOKIHPKNMGG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MOKIHPKNMGG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MOKIHPKNMGG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D7D40)
#define MOKIHPKNMGG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D7D50)
#define MOKIHPKNMGG___INIT_OFFSET UNITYSDK_OFFSET(0x7D7D20)

inline static constexpr unsigned int MOKIHPKNMGG_TypeDefinitionIndex = 10255;

struct alignas(8) MOKIHPKNMGG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKIHPKNMGG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOKIHPKNMGG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKIHPKNMGG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JCPLFKNEJDE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JCPLFKNEJDE&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOKIHPKNMGG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKIHPKNMGG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::MOKIHPKNMGG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MOKIHPKNMGG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOKIHPKNMGG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MOKIHPKNMGG DLGNEHHACMD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MOKIHPKNMGG EIFONLCJOPG)
	{
		return ((::MOKIHPKNMGG(*)(::FlatBuffers::ByteBuffer*, ::MOKIHPKNMGG))((::PBYTE)hIl2Cpp + MOKIHPKNMGG_DLGNEHHACMD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JCPLFKNEJDE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JCPLFKNEJDE&))((::PBYTE)hIl2Cpp + MOKIHPKNMGG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MOKIHPKNMGG DLGNEHHACMD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MOKIHPKNMGG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOKIHPKNMGG_DLGNEHHACMD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
