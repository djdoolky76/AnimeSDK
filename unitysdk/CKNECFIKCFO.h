#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ICNJLCPDMEA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CKNECFIKCFO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CKNECFIKCFO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B2070)
#define CKNECFIKCFO_DCPAHDNNKPC_1_OFFSET UNITYSDK_OFFSET(0x17A8D0E0)
#define CKNECFIKCFO_DCPAHDNNKPC_OFFSET UNITYSDK_OFFSET(0x17A8D070)
#define CKNECFIKCFO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CKNECFIKCFO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CKNECFIKCFO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B2060)
#define CKNECFIKCFO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B20B0)
#define CKNECFIKCFO___INIT_OFFSET UNITYSDK_OFFSET(0x7B2040)

inline static constexpr unsigned int CKNECFIKCFO_TypeDefinitionIndex = 10452;

struct alignas(8) CKNECFIKCFO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKNECFIKCFO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKNECFIKCFO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKNECFIKCFO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ICNJLCPDMEA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ICNJLCPDMEA&))((::PBYTE)hIl2Cpp + CKNECFIKCFO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CKNECFIKCFO DCPAHDNNKPC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CKNECFIKCFO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKNECFIKCFO_DCPAHDNNKPC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ICNJLCPDMEA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ICNJLCPDMEA&, ::System::Int32&))((::PBYTE)hIl2Cpp + CKNECFIKCFO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::CKNECFIKCFO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CKNECFIKCFO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKNECFIKCFO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKNECFIKCFO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CKNECFIKCFO DCPAHDNNKPC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CKNECFIKCFO EIFONLCJOPG)
	{
		return ((::CKNECFIKCFO(*)(::FlatBuffers::ByteBuffer*, ::CKNECFIKCFO))((::PBYTE)hIl2Cpp + CKNECFIKCFO_DCPAHDNNKPC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
