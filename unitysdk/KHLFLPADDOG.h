#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EOCFGICDHPI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KHLFLPADDOG_ABOGAFBMCCM_1_OFFSET UNITYSDK_OFFSET(0x1A5FB770)
#define KHLFLPADDOG_ABOGAFBMCCM_OFFSET UNITYSDK_OFFSET(0x1A5FB700)
#define KHLFLPADDOG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KHLFLPADDOG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FDCF0)
#define KHLFLPADDOG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KHLFLPADDOG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KHLFLPADDOG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FDD40)
#define KHLFLPADDOG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FDD30)
#define KHLFLPADDOG___INIT_OFFSET UNITYSDK_OFFSET(0x7FDCD0)

inline static constexpr unsigned int KHLFLPADDOG_TypeDefinitionIndex = 17211;

struct alignas(8) KHLFLPADDOG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLFLPADDOG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHLFLPADDOG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KHLFLPADDOG ABOGAFBMCCM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KHLFLPADDOG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHLFLPADDOG_ABOGAFBMCCM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLFLPADDOG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::KHLFLPADDOG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KHLFLPADDOG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHLFLPADDOG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLFLPADDOG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KHLFLPADDOG ABOGAFBMCCM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KHLFLPADDOG EIFONLCJOPG)
	{
		return ((::KHLFLPADDOG(*)(::FlatBuffers::ByteBuffer*, ::KHLFLPADDOG))((::PBYTE)hIl2Cpp + KHLFLPADDOG_ABOGAFBMCCM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EOCFGICDHPI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EOCFGICDHPI&, ::System::Int32&))((::PBYTE)hIl2Cpp + KHLFLPADDOG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EOCFGICDHPI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EOCFGICDHPI&))((::PBYTE)hIl2Cpp + KHLFLPADDOG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
