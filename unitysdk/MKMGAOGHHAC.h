#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EJIECHGHPIN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MKMGAOGHHAC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MKMGAOGHHAC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8050E0)
#define MKMGAOGHHAC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MKMGAOGHHAC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MKMGAOGHHAC_IJFILKNJGMP_1_OFFSET UNITYSDK_OFFSET(0x1AD76620)
#define MKMGAOGHHAC_IJFILKNJGMP_OFFSET UNITYSDK_OFFSET(0x1AD765C0)
#define MKMGAOGHHAC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x805120)
#define MKMGAOGHHAC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8050D0)
#define MKMGAOGHHAC___INIT_OFFSET UNITYSDK_OFFSET(0x8050B0)

inline static constexpr unsigned int MKMGAOGHHAC_TypeDefinitionIndex = 10994;

struct alignas(8) MKMGAOGHHAC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMGAOGHHAC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKMGAOGHHAC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMGAOGHHAC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::MKMGAOGHHAC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKMGAOGHHAC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKMGAOGHHAC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMGAOGHHAC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EJIECHGHPIN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EJIECHGHPIN&, ::System::Int32&))((::PBYTE)hIl2Cpp + MKMGAOGHHAC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MKMGAOGHHAC IJFILKNJGMP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MKMGAOGHHAC EIFONLCJOPG)
	{
		return ((::MKMGAOGHHAC(*)(::FlatBuffers::ByteBuffer*, ::MKMGAOGHHAC))((::PBYTE)hIl2Cpp + MKMGAOGHHAC_IJFILKNJGMP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EJIECHGHPIN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EJIECHGHPIN&))((::PBYTE)hIl2Cpp + MKMGAOGHHAC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MKMGAOGHHAC IJFILKNJGMP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKMGAOGHHAC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKMGAOGHHAC_IJFILKNJGMP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
