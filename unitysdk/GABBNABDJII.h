#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define GABBNABDJII_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GABBNABDJII_BBOAJIIDEJG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GABBNABDJII_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GABBNABDJII_GDEDEJDDEJE_OFFSET UNITYSDK_OFFSET(0x754C20)
#define GABBNABDJII_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GABBNABDJII_GOMEICIMLCN_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define GABBNABDJII_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GABBNABDJII_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5AD830)
#define GABBNABDJII___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GABBNABDJII_TypeDefinitionIndex = 10513;

struct alignas(4) GABBNABDJII
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GABBNABDJII_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GABBNABDJII___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GABBNABDJII_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::GABBNABDJII BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GABBNABDJII(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GABBNABDJII_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GABBNABDJII OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GABBNABDJII(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GABBNABDJII_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean GOMEICIMLCN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GABBNABDJII_GOMEICIMLCN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 BBOAJIIDEJG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GABBNABDJII_BBOAJIIDEJG_OFFSET))(this);
	}

	::System::Int32 GDEDEJDDEJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GABBNABDJII_GDEDEJDDEJE_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GABBNABDJII_HKELPCLHLEC_OFFSET))(this);
	}
};
