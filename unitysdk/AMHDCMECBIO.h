#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ENIHLMPCEDB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMHDCMECBIO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AMHDCMECBIO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E1F20)
#define AMHDCMECBIO_EFJNJLAIIDL_1_OFFSET UNITYSDK_OFFSET(0x194EE520)
#define AMHDCMECBIO_EFJNJLAIIDL_OFFSET UNITYSDK_OFFSET(0x194EE4B0)
#define AMHDCMECBIO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AMHDCMECBIO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AMHDCMECBIO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E1F00)
#define AMHDCMECBIO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E1F10)
#define AMHDCMECBIO___INIT_OFFSET UNITYSDK_OFFSET(0x7E1EE0)

inline static constexpr unsigned int AMHDCMECBIO_TypeDefinitionIndex = 11783;

struct alignas(8) AMHDCMECBIO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHDCMECBIO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMHDCMECBIO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ENIHLMPCEDB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ENIHLMPCEDB&, ::System::Int32&))((::PBYTE)hIl2Cpp + AMHDCMECBIO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::AMHDCMECBIO EFJNJLAIIDL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMHDCMECBIO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMHDCMECBIO_EFJNJLAIIDL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ENIHLMPCEDB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ENIHLMPCEDB&))((::PBYTE)hIl2Cpp + AMHDCMECBIO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHDCMECBIO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHDCMECBIO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AMHDCMECBIO EFJNJLAIIDL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AMHDCMECBIO EIFONLCJOPG)
	{
		return ((::AMHDCMECBIO(*)(::FlatBuffers::ByteBuffer*, ::AMHDCMECBIO))((::PBYTE)hIl2Cpp + AMHDCMECBIO_EFJNJLAIIDL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::AMHDCMECBIO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMHDCMECBIO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMHDCMECBIO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
