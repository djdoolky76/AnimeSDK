#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PLHHGGGCGJM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDLEDCKKCOD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GDLEDCKKCOD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x813D30)
#define GDLEDCKKCOD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GDLEDCKKCOD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GDLEDCKKCOD_OGGCKONILLC_1_OFFSET UNITYSDK_OFFSET(0x1B86C420)
#define GDLEDCKKCOD_OGGCKONILLC_OFFSET UNITYSDK_OFFSET(0x1B86C380)
#define GDLEDCKKCOD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x813D20)
#define GDLEDCKKCOD___INIT_OFFSET UNITYSDK_OFFSET(0x813D00)

inline static constexpr unsigned int GDLEDCKKCOD_TypeDefinitionIndex = 12991;

struct alignas(8) GDLEDCKKCOD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLEDCKKCOD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDLEDCKKCOD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PLHHGGGCGJM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PLHHGGGCGJM&))((::PBYTE)hIl2Cpp + GDLEDCKKCOD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLEDCKKCOD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GDLEDCKKCOD OGGCKONILLC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GDLEDCKKCOD EIFONLCJOPG)
	{
		return ((::GDLEDCKKCOD(*)(::FlatBuffers::ByteBuffer*, ::GDLEDCKKCOD))((::PBYTE)hIl2Cpp + GDLEDCKKCOD_OGGCKONILLC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::GDLEDCKKCOD OGGCKONILLC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDLEDCKKCOD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDLEDCKKCOD_OGGCKONILLC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLEDCKKCOD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::GDLEDCKKCOD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDLEDCKKCOD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDLEDCKKCOD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
