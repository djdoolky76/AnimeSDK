#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NDOPMDCILCK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NDOPMDCILCK_DMFIECNNCNG_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define NDOPMDCILCK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NDOPMDCILCK_HJBGDAENKPN_OFFSET UNITYSDK_OFFSET(0x756490)
#define NDOPMDCILCK_HLPJLCNEOIH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NDOPMDCILCK_HMPFPCCBKMJ_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NDOPMDCILCK_ILCKGOLIOGM_OFFSET UNITYSDK_OFFSET(0x755E40)
#define NDOPMDCILCK_KFIFFEIKJEG_OFFSET UNITYSDK_OFFSET(0x755840)
#define NDOPMDCILCK_LFJJJKJAJKN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NDOPMDCILCK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AB148E0)
#define NDOPMDCILCK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NDOPMDCILCK_TypeDefinitionIndex = 12037;

struct alignas(4) NDOPMDCILCK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOPMDCILCK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDOPMDCILCK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NDOPMDCILCK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDOPMDCILCK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDOPMDCILCK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NDOPMDCILCK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NDOPMDCILCK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NDOPMDCILCK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* HLPJLCNEOIH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOPMDCILCK_HLPJLCNEOIH_OFFSET))(this);
	}

	::System::Int32 DMFIECNNCNG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOPMDCILCK_DMFIECNNCNG_OFFSET))(this);
	}

	::System::Boolean HJBGDAENKPN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NDOPMDCILCK_HJBGDAENKPN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ILCKGOLIOGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOPMDCILCK_ILCKGOLIOGM_OFFSET))(this);
	}

	::System::Int32 LFJJJKJAJKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOPMDCILCK_LFJJJKJAJKN_OFFSET))(this);
	}

	::System::String* HMPFPCCBKMJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOPMDCILCK_HMPFPCCBKMJ_OFFSET))(this);
	}

	::System::Int32 KFIFFEIKJEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOPMDCILCK_KFIFFEIKJEG_OFFSET))(this);
	}
};
