#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LMGGLMPDKEC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LMGGLMPDKEC_BGEEEJGEBLL_OFFSET UNITYSDK_OFFSET(0x757190)
#define LMGGLMPDKEC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LMGGLMPDKEC_BHHIAFGANEN_OFFSET UNITYSDK_OFFSET(0x754920)
#define LMGGLMPDKEC_DFFLHJDEELO_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define LMGGLMPDKEC_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LMGGLMPDKEC_FFGLNDNBGFH_OFFSET UNITYSDK_OFFSET(0x763AA0)
#define LMGGLMPDKEC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LMGGLMPDKEC_GNBDOMICCLE_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define LMGGLMPDKEC_LALGBAJHHCF_OFFSET UNITYSDK_OFFSET(0x757290)
#define LMGGLMPDKEC_LOMINDBFOKB_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define LMGGLMPDKEC_MCKBINKHANH_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define LMGGLMPDKEC_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LMGGLMPDKEC_NNBHCBDDENA_OFFSET UNITYSDK_OFFSET(0x761240)
#define LMGGLMPDKEC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19101150)
#define LMGGLMPDKEC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LMGGLMPDKEC_TypeDefinitionIndex = 13340;

struct alignas(4) LMGGLMPDKEC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGGLMPDKEC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMGGLMPDKEC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean FFGLNDNBGFH(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + LMGGLMPDKEC_FFGLNDNBGFH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* MCKBINKHANH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGGLMPDKEC_MCKBINKHANH_OFFSET))(this);
	}

	::System::Int32 BHHIAFGANEN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGGLMPDKEC_BHHIAFGANEN_OFFSET))(this);
	}

	::System::String* LALGBAJHHCF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGGLMPDKEC_LALGBAJHHCF_OFFSET))(this);
	}

	::System::String* BGEEEJGEBLL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGGLMPDKEC_BGEEEJGEBLL_OFFSET))(this);
	}

	::System::Int32 NNBHCBDDENA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGGLMPDKEC_NNBHCBDDENA_OFFSET))(this);
	}

	/*
	::LMGGLMPDKEC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LMGGLMPDKEC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMGGLMPDKEC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGGLMPDKEC_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* GNBDOMICCLE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGGLMPDKEC_GNBDOMICCLE_OFFSET))(this);
	}

	::System::Int32 LOMINDBFOKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGGLMPDKEC_LOMINDBFOKB_OFFSET))(this);
	}

	::System::Boolean DFFLHJDEELO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LMGGLMPDKEC_DFFLHJDEELO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LMGGLMPDKEC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LMGGLMPDKEC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LMGGLMPDKEC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGGLMPDKEC_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGGLMPDKEC_NFKFHJBEPGD_OFFSET))(this);
	}
};
