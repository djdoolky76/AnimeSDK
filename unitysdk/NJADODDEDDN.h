#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NJADODDEDDN_ANINAEBIEOH_OFFSET UNITYSDK_OFFSET(0x755790)
#define NJADODDEDDN_BENIGDKEBMJ_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define NJADODDEDDN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NJADODDEDDN_CNHOKELPBBD_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NJADODDEDDN_FOPLHHECFPN_OFFSET UNITYSDK_OFFSET(0x761240)
#define NJADODDEDDN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NJADODDEDDN_LFJJJKJAJKN_OFFSET UNITYSDK_OFFSET(0x755D20)
#define NJADODDEDDN_NFAFLKOMNPC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NJADODDEDDN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1D0C8C50)
#define NJADODDEDDN_PGGJFOJBHKM_OFFSET UNITYSDK_OFFSET(0x7AC220)
#define NJADODDEDDN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NJADODDEDDN_TypeDefinitionIndex = 14992;

struct alignas(4) NJADODDEDDN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJADODDEDDN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJADODDEDDN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BENIGDKEBMJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NJADODDEDDN_BENIGDKEBMJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NJADODDEDDN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NJADODDEDDN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJADODDEDDN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean PGGJFOJBHKM(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + NJADODDEDDN_PGGJFOJBHKM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 LFJJJKJAJKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJADODDEDDN_LFJJJKJAJKN_OFFSET))(this);
	}

	::System::Int32 FOPLHHECFPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJADODDEDDN_FOPLHHECFPN_OFFSET))(this);
	}

	::System::String* CNHOKELPBBD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJADODDEDDN_CNHOKELPBBD_OFFSET))(this);
	}

	/*
	static ::NJADODDEDDN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NJADODDEDDN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NJADODDEDDN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ANINAEBIEOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJADODDEDDN_ANINAEBIEOH_OFFSET))(this);
	}

	::System::Int32 NFAFLKOMNPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJADODDEDDN_NFAFLKOMNPC_OFFSET))(this);
	}
};
