#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MPPCBEMAPMI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OHPDBGONEKF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OHPDBGONEKF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81E8F0)
#define OHPDBGONEKF_ENMPKKFBBEB_1_OFFSET UNITYSDK_OFFSET(0x1BF7C2C0)
#define OHPDBGONEKF_ENMPKKFBBEB_OFFSET UNITYSDK_OFFSET(0x1BF7C250)
#define OHPDBGONEKF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OHPDBGONEKF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OHPDBGONEKF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81E930)
#define OHPDBGONEKF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81E8E0)
#define OHPDBGONEKF___INIT_OFFSET UNITYSDK_OFFSET(0x81E8C0)

inline static constexpr unsigned int OHPDBGONEKF_TypeDefinitionIndex = 13491;

struct alignas(8) OHPDBGONEKF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPDBGONEKF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHPDBGONEKF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MPPCBEMAPMI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MPPCBEMAPMI&))((::PBYTE)hIl2Cpp + OHPDBGONEKF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::OHPDBGONEKF ENMPKKFBBEB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OHPDBGONEKF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHPDBGONEKF_ENMPKKFBBEB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::OHPDBGONEKF ENMPKKFBBEB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OHPDBGONEKF EIFONLCJOPG)
	{
		return ((::OHPDBGONEKF(*)(::FlatBuffers::ByteBuffer*, ::OHPDBGONEKF))((::PBYTE)hIl2Cpp + OHPDBGONEKF_ENMPKKFBBEB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPDBGONEKF_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPDBGONEKF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::OHPDBGONEKF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OHPDBGONEKF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHPDBGONEKF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MPPCBEMAPMI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MPPCBEMAPMI&, ::System::Int32&))((::PBYTE)hIl2Cpp + OHPDBGONEKF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
